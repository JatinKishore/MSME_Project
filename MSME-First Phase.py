import time
import pyautogui as py
import serial

arduinoData = serial.Serial('com3', 9600)
arduinoData ="1:300"
time.sleep(1)
while True:
    while arduinoData.inWaiting() == 0:
        pass
    dataPacket = arduinoData.readline()
    dataPacket = str(dataPacket, 'utf-8')
    dataPacket = dataPacket.strip('\r\n')
    print(dataPacket)
    if dataPacket == 1:
        py.moveTo(803, 840)
        py.click()
    else:
        pass
    if dataPacket == 2:
        py.moveTo(803, 840)
        py.click()
    else:
        pass
