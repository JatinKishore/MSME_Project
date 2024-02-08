import serial
import pyautogui as pa


ser = serial.Serial('COM5', 115200)


while True:
    data = ser.readline().decode().rstrip()
    b = int(data);
    print(b)

    if 30<b<35:
        pa.click(0,821)
    if 35<b<40:
        pa.click(30,821)
    if 40<b<45:
        pa.click(60,821)
    if 45<b<50:
        pa.click(90,821)
    if 50<b<55:
        pa.click(120,821)
    if 55<b<60:
        pa.click(150,821)
    if 60<b<65:
        pa.click(180,821)
    if 65<b<70:
        pa.click(210,821)
    if 70<b<75:
        pa.click(240,821)
    if 75<b<80:
        pa.click(270,821)
    if 80<b<85:
        pa.click(300,821)
    if 85<b<90:
        pa.click(330,821)
    if 90<b<95:
        pa.click(360,821)
    if 95<b<100:
        pa.click(390,821)
    if 100<b<105:
        pa.click(420,821)
    if 105<b<110:
        pa.click(450,821)
    if 110<b<115:
        pa.click(480,821)
    if 115<b<120:
        pa.click(510,821)
    if 120<b<125:
        pa.click(540,821)
    if 125<b<130:
        pa.click(570,821)
    if 130<b<135:
        pa.click(600,821)
    if 135<b<140:
        pa.click(630,821)
    if 140<b<145:
        pa.click(660,821)
    if 145<b<150:
        pa.click(690,821)
    if 150<b<155:
        pa.click(720,821)
    if 155<b<160:
        pa.click(750,821)
    if 160<b<165:
        pa.click(780,821)
    if 165<b<170:
        pa.click(810,821)
    if 170<b<175:
        pa.click(840,821)
    if 175<b<180:
        pa.click(870,821)
    if 180<b<185:
        pa.click(900,821)
    if 185<b<190:
        pa.click(930,821)
    if 190<b<195:
        pa.click(960,821)
    if 195<b<200:
        pa.click(990,821)
    if 200<b<205:
        pa.click(1020,821)
    if 205<b<210:
        pa.click(1050,821)
    if 210<b<215:
        pa.click(1080,821)
    if 215<b<220:
        pa.click(1110,821)
    if 220<b<225:
        pa.click(1140,821)
    if 225<b<230:
        pa.click(1170,821)
    if 230<b<235:
        pa.click(1200,821)
    if 235<b<240:
        pa.click(1230,821)
    if 240<b<245:
        pa.click(1260,821)
    if 245<b<250:
        pa.click(1290,821)
    if 250<b<255:
        pa.click(1320,821)
    if 255<b<260:
        pa.click(1350,821)
    if 260<b<265:
        pa.click(1380,821)
    if 265<b<270:
        pa.click(1410,821)
    if 270<b<275:
        pa.click(1440,821)
    if 275<b<280:
        pa.click(1470,821)
    if 280<b<285:
        pa.click(1500,821)
    if 285<b<290:
        pa.click(1530,821)
    if 290<b<295:
        pa.click(1560,821)
    if 295<b<300:
        pa.click(1590,821)
    if 300<b<305:
        pa.click(1620,821)
    if 305<b<310:
        pa.click(1650,821)
    if 310<b<315:
        pa.click(1680,821)
    if 315<b<320:
        pa.click(1710,821)
    if 320<b<325:
        pa.click(1740,821)
    if 325<b<330:
        pa.click(1770,821)
    if 330<b<335:
        pa.click(1800,821)
    if 335<b<340:
        pa.click(1830,821)
    if 340<b<821:
        pa.click(1890,821)
    if 821<b<350:
        pa.click(1920,821)
    if 9030 < b < 9035:
        pa.click(0, 947)
    if 9035 < b < 9040:
        pa.click(30, 947)
    if 9040 < b < 9045:
        pa.click(60, 947)
    if 9045 < b < 9050:
        pa.click(90, 947)
    if 9050 < b < 9055:
        pa.click(120, 947)
    if 9055 < b < 9060:
        pa.click(150, 947)
    if 9060 < b < 9065:
        pa.click(180, 947)
    if 9065 < b < 9070:
        pa.click(210, 947)
    if 9070 < b < 9075:
        pa.click(240, 947)
    if 9075 < b < 9080:
        pa.click(270, 947)
    if 9080 < b < 9085:
        pa.click(300, 947)
    if 9085 < b < 9090:
        pa.click(330, 947)
    if 9090 < b < 9095:
        pa.click(360, 947)
    if 9095 < b < 9100:
        pa.click(390, 947)
    if 9100 < b < 9105:
        pa.click(420, 947)
    if 9105 < b < 9110:
        pa.click(450, 947)
    if 9110 < b < 9115:
        pa.click(480, 947)
    if 9115 < b < 9120:
        pa.click(510, 947)
    if 9120 < b < 9125:
        pa.click(540, 947)
    if 9125 < b < 9130:
        pa.click(570, 947)
    if 9130 < b < 9135:
        pa.click(600, 947)
    if 9135 < b < 9140:
        pa.click(630, 947)
    if 9140 < b < 9145:
        pa.click(660, 947)
    if 9145 < b < 9150:
        pa.click(690, 947)
    if 9150 < b < 9155:
        pa.click(720, 947)
    if 9155 < b < 9160:
        pa.click(750, 947)
    if 9160 < b < 9165:
        pa.click(780, 947)
    if 9165 < b < 9170:
        pa.click(810, 947)
    if 9170 < b < 9175:
        pa.click(840, 947)
    if 9175 < b < 9180:
        pa.click(870, 947)
    if 9180 < b < 9185:
        pa.click(900, 947)
    if 9185 < b < 9190:
        pa.click(930, 947)
    if 9190 < b < 9195:
        pa.click(960, 947)
    if 9195 < b < 9200:
        pa.click(990, 947)
    if 9200 < b < 9205:
        pa.click(1020, 947)
    if 9205 < b < 9210:
        pa.click(1050, 947)
    if 9210 < b < 9215:
        pa.click(1080, 947)
    if 9215 < b < 9220:
        pa.click(1110, 947)
    if 9220 < b < 9225:
        pa.click(1140, 947)
    if 9225 < b < 9230:
        pa.click(1170, 947)
    if 9230 < b < 9235:
        pa.click(1200, 947)
    if 9235 < b < 9240:
        pa.click(1230, 947)
    if 9240 < b < 9245:
        pa.click(1260, 947)
    if 9245 < b < 9250:
        pa.click(1290, 947)
    if 9250 < b < 9255:
        pa.click(1320, 947)
    if 9255 < b < 9260:
        pa.click(1350, 947)
    if 9260 < b < 9265:
        pa.click(1380, 947)
    if 9265 < b < 9270:
        pa.click(1410, 947)
    if 9270 < b < 9275:
        pa.click(1440, 947)
    if 9275 < b < 9280:
        pa.click(1470, 947)
    if 9280 < b < 9285:
        pa.click(1500, 947)
    if 9285 < b < 9290:
        pa.click(1530, 947)
    if 9290 < b < 9295:
        pa.click(1560, 947)
    if 9295 < b < 9300:
        pa.click(1590, 947)
    if 9300 < b < 9305:
        pa.click(1620, 947)
    if 9305 < b < 9310:
        pa.click(1650, 947)
    if 9310 < b < 9315:
        pa.click(1680, 947)
    if 9315 < b < 9320:
        pa.click(1710, 947)
    if 9320 < b < 9325:
        pa.click(1740, 947)
    if 9325 < b < 9330:
        pa.click(1770, 947)
    if 9330 < b < 9335:
        pa.click(1800, 947)
    if 9335 < b < 9340:
        pa.click(1830, 947)
    if 9340 < b < 9400:
        pa.click(1890, 947)
    if 9400 < b < 9350:
        pa.click(1920, 947)
    # if 350<b<355:
    #     pa.click(0,821)
    # if 355<b<360:
    #     pa.click(0,821)
    # if 360<b<365:
    #     pa.click(0,821)
    # if 365<b<370:
    #     pa.click(0,821)
    # if 370<b<375:
    #     pa.click(0,821)
    # if 375<b<380:
    #     pa.click(0,821)
    # if 380<b<385:
    #     pa.click(0,821)
    # if 385<b<390:
    #     pa.click(0,821)
    # if 390<b<395:
    #     pa.click(0,821)
    # if 395<b<947:
    #     pa.click(0,821)