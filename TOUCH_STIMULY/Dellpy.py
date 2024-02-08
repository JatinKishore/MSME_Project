import serial
import pyautogui as pa
import time 

ser = serial.Serial('COM5', 9600)

previous_time = time.time()  # Initialize the previous time variable
previous_e = 0  # Initialize the previous e value
previous_y = 0  # Initialize the previous y value

def numbers_to_strings(argument):
    switcher = {
        7: 492,
        6: 500,
        5: 510,
        4: 530,
        3: 550,
        2: 580
    }
    return switcher.get(argument, 0)

while True:
    data = ser.readline().decode().rstrip()
    c = data.split(":")
    d = int(c[0])
    e = int(c[1])
    y = numbers_to_strings(d)
    
    # Check if the difference between e and previous_e is less than 30
    if abs(e - previous_e) < 30 and abs(y-previous_y)==0:
        # Use the previous values
        e = previous_e
        y = previous_y

    if e < 200:
        pa.click(32, y)
    
    # Update the previous values
    previous_e = e
    previous_y = y

    # Update the previous time
    previous_time = time.time()
