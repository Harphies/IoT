  // Library calls
 #include <SoftwareSerial.h>
 #include<DHT.h>

 // Pin definitions
 SoftwareSerial sim(10, 11); // Tx of sim module connected to pin 10, rx of pin module connected to pin 11
 #define DHTPIN 7 // we are conncted to pin 7
 #define DHTTYPE DHT22
 DHT dht(DHTPIN, DHTTYPE); // inititialized
 int flame_sensor_pin = 2 ;// initializing pin 2 as the sensor output pin
 int flame_pin = HIGH ; // state of sensor
 int led_pin = 13 ;// initializing the pin 13 as the led pin

 // Variables
 int chek;
 float hum; // store humidity value
 float temp // store temperature value
 int _timeout;
 String _buffer;
 String number = "+2347061057380";
   
void setup() {
pinMode ( flame_sensor_pin , INPUT ); 
delay(7000); //delay for 7 seconds to make sure the modules get the signal
Serial.begin(9600);
_buffer.reserve(50);
Serial.println("Sistem Started...");
sim.begin(9600);
delay(1000);
dht.begin()
}

void loop() {
flameReadings();
}

String _readSerial() {
  _timeout = 0;
  while  (!sim.available() && _timeout < 12000  )
  {
    delay(13);
    _timeout++;
  }
  if (sim.available()) {
    return sim.readString();
  }
}
void makeCall(){
  sim.print (F("ATD"));
  sim.print (number);
  sim.print (F(";\r\n"));
  _buffer = _readSerial();
  Serial.println(_buffer); 
  delay(5000);
}

// sunroutine
void temperatureReadings(){
  // read the flame and temperature here
  delay(200);
  // read data and store it to varaiable hum and temp
  hum = dht.readHumidity();
  temp = dht.readTemperature();
  // Print them
  Serial.print(" % Temp: ");
  Serial.print(temp);
  Serial.println("Celcius")
  delay(1000); // 2 seconds
}
void flameReading(){
 flame_pin = digitalRead(flame_sensor_pin) ;  // reading from the sensor
 if (flame_pin == LOW ){  // applying condition{
 Serial.println ( " FLAME , FLAME , FLAME " ) ;
 digitalWrite ( led_pin  , HIGH ) ;// if state is high, then turn high the led
}
else
  {
 Serial.println ( " no flame " ) ;
 digitalWrite ( led_pin , LOW ) ;  // otherwise turn it low
  } 
}
void gasReadings(){
  // Read the gas here
  float sensorVoltage;
  float sensorValue;
  sensorValue = analogRead(A0); Read the sensor value from analog pin
  sensorVoltage = sensorValue/1024*5.0 // calculate the sensor voltage
  Serial.print("sensor voltage = ");   // Print the Message
  Serial.print(sensorVoltage);         // Print the Values
  Serial.println(" V");                // Print the Message
  delay(1000);                         // Wait for 1000 ms
}
