#include "Adafruit_VL53L0X.h"


// address we will assign if dual sensor is present
#define LOX1_ADDRESS 0x30
#define LOX2_ADDRESS 0x31
#define LOX3_ADDRESS 0x32
#define LOX4_ADDRESS 0x33
#define LOX5_ADDRESS 0x34
#define LOX6_ADDRESS 0x35
#define LOX7_ADDRESS 0x36
#define LOX8_ADDRESS 0x37
#define LOX9_ADDRESS 0x38
#define LOX10_ADDRESS 0x39
#define LOX11_ADDRESS 0x40


// set the pins to shutdown
#define SHT_LOX1 2
#define SHT_LOX2 4
#define SHT_LOX3 6
#define SHT_LOX4 8
#define SHT_LOX5 10
#define SHT_LOX6 12
#define SHT_LOX7 14
#define SHT_LOX8 17
#define SHT_LOX9 19
#define SHT_LOX10 22
#define SHT_LOX11 25




// objects for the vl53l0x
Adafruit_VL53L0X lox1 = Adafruit_VL53L0X();
Adafruit_VL53L0X lox2 = Adafruit_VL53L0X();
Adafruit_VL53L0X lox3 = Adafruit_VL53L0X();
Adafruit_VL53L0X lox4 = Adafruit_VL53L0X();
Adafruit_VL53L0X lox5 = Adafruit_VL53L0X();
Adafruit_VL53L0X lox6 = Adafruit_VL53L0X();
Adafruit_VL53L0X lox7 = Adafruit_VL53L0X();
Adafruit_VL53L0X lox8 = Adafruit_VL53L0X();
Adafruit_VL53L0X lox9 = Adafruit_VL53L0X();
Adafruit_VL53L0X lox10 = Adafruit_VL53L0X();
Adafruit_VL53L0X lox11 = Adafruit_VL53L0X();



// this holds the measurement
VL53L0X_RangingMeasurementData_t measure1;
VL53L0X_RangingMeasurementData_t measure2;
VL53L0X_RangingMeasurementData_t measure3;
VL53L0X_RangingMeasurementData_t measure4;
VL53L0X_RangingMeasurementData_t measure5;
VL53L0X_RangingMeasurementData_t measure6;
VL53L0X_RangingMeasurementData_t measure7;
VL53L0X_RangingMeasurementData_t measure8;
VL53L0X_RangingMeasurementData_t measure9;
VL53L0X_RangingMeasurementData_t measure10;
VL53L0X_RangingMeasurementData_t measure11;


/*
    Reset all sensors by setting all of their XSHUT pins low for delay(10), then set all XSHUT high to bring out of reset
    Keep sensor #1 awake by keeping XSHUT pin high
    Put all other sensors into shutdown by pulling XSHUT pins low
    Initialize sensor #1 with lox.begin(new_i2c_address) Pick any number but 0x29 and it must be under 0x7F. Going with 0x30 to 0x3F is probably OK.
    Keep sensor #1 awake, and now bring sensor #2 out of reset by setting its XSHUT pin high.
    Initialize sensor #2 with lox.begin(new_i2c_address) Pick any number but 0x29 and whatever you set the first sensor to
 */
void setID() {
  
  // all reset
  digitalWrite(SHT_LOX1, LOW);    
  digitalWrite(SHT_LOX2, LOW);
  digitalWrite(SHT_LOX3, LOW);
  digitalWrite(SHT_LOX4, LOW);
  digitalWrite(SHT_LOX5, LOW);
  digitalWrite(SHT_LOX6, LOW);
  digitalWrite(SHT_LOX7, LOW);
  digitalWrite(SHT_LOX8, LOW);
  digitalWrite(SHT_LOX9, LOW);
  digitalWrite(SHT_LOX10, LOW);
  digitalWrite(SHT_LOX11, LOW);
 
  delay(10);
  
  // all unreset
  digitalWrite(SHT_LOX1, HIGH);
  digitalWrite(SHT_LOX2, HIGH);
  digitalWrite(SHT_LOX3, HIGH);
  digitalWrite(SHT_LOX4, HIGH);
  digitalWrite(SHT_LOX5, HIGH);
  digitalWrite(SHT_LOX6, HIGH);
  digitalWrite(SHT_LOX7, HIGH);
  digitalWrite(SHT_LOX8, HIGH);
  digitalWrite(SHT_LOX9, HIGH);
  digitalWrite(SHT_LOX10, HIGH);
  digitalWrite(SHT_LOX11, HIGH);
  delay(10);


  // activating LOX1 and resetting LOX2
  digitalWrite(SHT_LOX1, HIGH);
  digitalWrite(SHT_LOX2, LOW);
  digitalWrite(SHT_LOX3, LOW);
  digitalWrite(SHT_LOX4, LOW);
  digitalWrite(SHT_LOX5, LOW);
  digitalWrite(SHT_LOX6, LOW);
  digitalWrite(SHT_LOX7, LOW);
  digitalWrite(SHT_LOX8, LOW);
  digitalWrite(SHT_LOX9, LOW);
  digitalWrite(SHT_LOX10, LOW);
  digitalWrite(SHT_LOX11, LOW);
 
  

  // initing LOX1
  if(!lox1.begin(LOX1_ADDRESS)) {
    
    while(1);
  }
  delay(10);


  // activating LOX2
  digitalWrite(SHT_LOX2, HIGH);
  delay(10);

  //initing LOX2
  if(!lox2.begin(LOX2_ADDRESS)) {
    
    while(1);
  }

  // activating LOX3
  digitalWrite(SHT_LOX3, HIGH);
  delay(10);

  //initing LOX3
  if(!lox3.begin(LOX3_ADDRESS)) {
    
    while(1);
  }

  // activating LOX4
  digitalWrite(SHT_LOX4, HIGH);
  delay(10);

  //initing LOX4
  if(!lox4.begin(LOX4_ADDRESS)) {
    
    while(1);
  }

  // activating LOX5
  digitalWrite(SHT_LOX5, HIGH);
  delay(10);

  //initing LOX5
  if(!lox5.begin(LOX5_ADDRESS)) {
    
    while(1);
  }

  // activating LOX6
  digitalWrite(SHT_LOX6, HIGH);
  delay(10);

  //initing LOX6
  if(!lox6.begin(LOX6_ADDRESS)) {
    
    while(1);
  }

  // activating LOX7
  digitalWrite(SHT_LOX7, HIGH);
  delay(10);

  //initing LOX7
  if(!lox7.begin(LOX7_ADDRESS)) {
    
    while(1);
  }

  // activating LOX8
  digitalWrite(SHT_LOX8, HIGH);
  delay(10);

  //initing LOX8
  if(!lox8.begin(LOX8_ADDRESS)) {
    
    while(1);
  }

  // activating LOX9
  digitalWrite(SHT_LOX9, HIGH);
  delay(10);

  //initing LOX9
  if(!lox9.begin(LOX9_ADDRESS)) {
    
    while(1);
  }

  // activating LOX10
  digitalWrite(SHT_LOX10, HIGH);
  delay(10);

  //initing LOX10
  if(!lox10.begin(LOX10_ADDRESS)) {
    
    while(1);
  }

  // activating LOX11
  digitalWrite(SHT_LOX11, HIGH);
  delay(10);

  //initing LOX11
  if(!lox11.begin(LOX11_ADDRESS)) {
    
    while(1);
  }
}


void read_dual_sensors() {
  
  lox1.rangingTest(&measure1, false); // pass in 'true' to get debug data printout!
  lox2.rangingTest(&measure2, false); // pass in 'true' to get debug data printout!
  lox3.rangingTest(&measure3, false); // pass in 'true' to get debug data printout!
  lox4.rangingTest(&measure4, false); // pass in 'true' to get debug data printout!
  lox5.rangingTest(&measure5, false); // pass in 'true' to get debug data printout!
  lox6.rangingTest(&measure6, false); // pass in 'true' to get debug data printout!
  lox7.rangingTest(&measure7, false); // pass in 'true' to get debug data printout!
  lox8.rangingTest(&measure8, false); // pass in 'true' to get debug data printout!
  lox9.rangingTest(&measure9, false); // pass in 'true' to get debug data printout!
  lox10.rangingTest(&measure10, false); // pass in 'true' to get debug data printout!
  lox11.rangingTest(&measure11, false); // pass in 'true' to get debug data printout!
 
  


  // print sensor one reading
  Serial.print(F("1:"));
  if(measure1.RangeStatus != 4 && measure1.RangeMilliMeter<8000) {     // if not out of range
    Serial.print(measure1.RangeMilliMeter);
  } else {
    Serial.print(F("-1"));
  }
  
  Serial.println(F(""));


  // print sensor two reading
  Serial.print(F("2:"));
  if(measure2.RangeStatus != 4 && measure2.RangeMilliMeter<8000) {
    Serial.print(measure2.RangeMilliMeter);
  } else {
    Serial.print(F("-1"));
  }
  Serial.println(F(""));
  

  // print sensor three reading
  Serial.print(F("3:"));
  if(measure3.RangeStatus != 4 && measure3.RangeMilliMeter<8000) {
    Serial.print(measure3.RangeMilliMeter);
  } else {
    Serial.print(F("-1"));
  }
  Serial.println(F(""));

  // print sensor four reading
  Serial.print(F("4:"));
  if(measure4.RangeStatus != 4 && measure4.RangeMilliMeter<8000) {
    Serial.print(measure4.RangeMilliMeter);
  } else {
    Serial.print(F("-1"));
  }
  Serial.println(F(""));

  // print sensor five reading
  Serial.print(F("5:"));
  if(measure5.RangeStatus != 4 && measure5.RangeMilliMeter<8000) {
    Serial.print(measure5.RangeMilliMeter);
  } else {
    Serial.print(F("-1"));
  }
  Serial.println(F(""));

  // print sensor six reading
  Serial.print(F("6:"));
  if(measure6.RangeStatus != 4 && measure6.RangeMilliMeter<8000) {
    Serial.print(measure6.RangeMilliMeter);
  } else {
    Serial.print(F("-1"));
  }
  Serial.println(F(""));

  // print sensor seven reading
  Serial.print(F("7:"));
  if(measure7.RangeStatus != 4 && measure7.RangeMilliMeter<8000) {
    Serial.print(measure7.RangeMilliMeter);
  } else {
    Serial.print(F("-1"));
  }
  Serial.println(F(""));

  // print sensor eight reading
  Serial.print(F("8:"));
  if(measure8.RangeStatus != 4 && measure8.RangeMilliMeter<8000) {
    Serial.print(measure8.RangeMilliMeter);
  } else {
    Serial.print(F("-1"));
  }
  Serial.println(F(""));

  // print sensor nine reading
  Serial.print(F("9:"));
  if(measure9.RangeStatus != 4 && measure9.RangeMilliMeter<8000) {
    Serial.print(measure9.RangeMilliMeter);
  } else {
    Serial.print(F("-1"));
  }
  Serial.println(F(""));

  // print sensor ten reading
  Serial.print(F("10:"));
  if(measure10.RangeStatus != 4 && measure10.RangeMilliMeter<8000) {
    Serial.print(measure10.RangeMilliMeter);
  } else {
    Serial.print(F("-1"));
  }
  Serial.println(F(""));

  // print sensor eleven reading
  Serial.print(F("11:"));
  if(measure11.RangeStatus != 4 && measure11.RangeMilliMeter<8000) {
    Serial.print(measure11.RangeMilliMeter);
  } else {
    Serial.print(F("-1"));
  }
  Serial.println(F(""));
}


void setup() {
  Serial.begin(115200);

  // wait until serial port opens for native USB devices
  while (! Serial) { delay(1); }


  pinMode(SHT_LOX1, OUTPUT);
  pinMode(SHT_LOX2, OUTPUT);
  pinMode(SHT_LOX3, OUTPUT);
  pinMode(SHT_LOX4, OUTPUT);
  pinMode(SHT_LOX5, OUTPUT);
  pinMode(SHT_LOX6, OUTPUT);
  pinMode(SHT_LOX7, OUTPUT);
  pinMode(SHT_LOX8, OUTPUT);
  pinMode(SHT_LOX9, OUTPUT);
  pinMode(SHT_LOX10, OUTPUT);
  pinMode(SHT_LOX11, OUTPUT);
 



  digitalWrite(SHT_LOX1, LOW);
  digitalWrite(SHT_LOX2, LOW);
  digitalWrite(SHT_LOX3, LOW);
  digitalWrite(SHT_LOX4, LOW);
  digitalWrite(SHT_LOX5, LOW);
  digitalWrite(SHT_LOX6, LOW);
  digitalWrite(SHT_LOX7, LOW);
  digitalWrite(SHT_LOX8, LOW);
  digitalWrite(SHT_LOX9, LOW);
  digitalWrite(SHT_LOX10, LOW);
  digitalWrite(SHT_LOX11, LOW);
  


 
  setID();
 
}

void loop() {
   
  read_dual_sensors();
  delay(100);
}
