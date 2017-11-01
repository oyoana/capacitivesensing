#include <CapacitiveSensor.h> //we need to download this library otherwise we will get an error

CapacitiveSensor   cs_4_8 = CapacitiveSensor(4,8); // 1M resistor between pins 4 & 8, pin 8 is sensor pin, add a metal surface there
CapacitiveSensor   cs_5_10 = CapacitiveSensor(5,10); // 1M resistor between pins 5 & 10, pin 10 is sensor pin, add a metal surface there
CapacitiveSensor   cs_6_11 = CapacitiveSensor(6,11); // 1M resistor between pins 6 & 11, pin 11 is sensor pin, add a metal surface there



void setup()                    
{
   cs_4_8.set_CS_AutocaL_Millis(0xFFFFFFFF);// turn off autocalibrate on channel 1 - just as an example
   cs_5_10.set_CS_AutocaL_Millis(0xFFFFFFFF);// turn off autocalibrate on channel 1 - just as an example
   cs_6_11.set_CS_AutocaL_Millis(0xFFFFFFFF);// turn off autocalibrate on channel 1 - just as an example

   Serial.begin(9600);

}

void loop()                    
{
 long sensor1 =  cs_4_8.capacitiveSensor(50);
 long sensor2 =  cs_5_10.capacitiveSensor(50);
 long sensor3 =  cs_6_11.capacitiveSensor(50);


    Serial.print("sensor1 ");  // print sensor1 text
    Serial.println(sensor1);  // print sensor1 output 

    Serial.print("sensor2 ");  // print sensor2 text
    Serial.println(sensor2);  // print sensor2 output

    Serial.print("sensor3 "); //print sensor3 text
    Serial.println(sensor3); //print sensor3 output

delay(50);
 
}
