## Smart LPG project

## Components

- Arduino Uno 1
- Sim800L Gsm Modue 1
- MQ6 Gas Sesor for Iso-butane 1
- MQ2 for Propane 1
- Flame Sensor 2
- 1N4007 diode 5
- 2A power supply 1
- 3.7V-4.2V Lithium at 1200mAh and above 1
- 2A DC-DC Buck Converter (LM2596) 1
- 10k resistor 5
- 20k Resistor 5
- 1k rsistor 10
- 100ohmn 10
- Male 2 Female wire 40 pieces
- Female 2 Female Wire 10 pices
- Male to Male 20 pieces
- DHT22 temperature sensor 1
- Buzzer 1
- Arduino shield
- GSM Antenna (GSM/GPRS/3G L-shaped Antenna)1
- GSM Copper spring Antenna 1
- Improvements After prototype
  - 3G GSM Module replacement
  - 5 Way Flame sensor

## connections

- MQ6 connection
- VCC -> 5V
- GND -> GND
- A0 -> Analog 0
- D0 -> Not Connected

* The MQ-6 gas sensor is highly sensitive to LPG, iso-butane,
* propane and less sensitive to alcohol, cooking fume and cigarette smoke.
* It could be used in gas leakage detecting equipments in family and industry.
* The resistance of the sensitive component changes as the concentration of the target gas changes.
* After uploading the code, you will see the serial monitor reading.
* It took about 3 minutes for the readings to stabilize.

- Flame sensor is an electronic device which is capable of sensing/detection of fire or a high temperature zone.
- They are able to detect the fire up to 3 feet
- Flame sensor can detect fire or any other light sources whose wavelength is in the range of 760nm to 1100nm
- This device consists of and IR sensor, an LED for indication, operational amplifier circuit and a potentio-meter.
- The device is sensitive to flame so when it detects the flame it turns on its LED to show an indication
- Its analog output provides real time output voltage on the thermal resistance.
- Voltage -> 5V
- Groung -> GND
- Digital output -> pin 2
