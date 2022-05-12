#include <Thermistor.h> //https://www.youtube.com/watch?v=sj5gzMSyX6I
#include <math.h>


Thermistor temp(2);


void setup() {
Serial.begin(9600);
pinMode(5, OUTPUT);
}


void loop() {

  double temperature = temp.getTemp();
  Serial.print("Temperatura: ");
  Serial.print(temperature);
  Serial.println("Cº");


  if (temperature > 200){
    digitalWrite(5, LOW);
  }
  else{
    digitalWrite(5, HIGH);
  }

  //delay(100);
}