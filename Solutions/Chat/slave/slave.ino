#include <SPI.h>

void setup() {
  Serial.begin(9600);
  SPI.begin();
}

void loop() {
  SPI.transfer(1);
}
