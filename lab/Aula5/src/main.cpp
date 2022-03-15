#include <Arduino.h>

void setup() {
  DDRD = 0b01100000;
  PORTD = 0;
}

void loop() {
  
  if(PIND &(0b00001000)){
    PORTD &=(0b11011111);
    PORTD |= 0b01000000;
    _delay_ms(1000);
    PORTD &=(0b10111111);
    PORTD |= 0b00100000;
    _delay_ms(1000);
  }
  else if(PIND &(0b00010000)){
    PORTD &=(0b11011111);
    PORTD |= 0b01000000;
    _delay_ms(100);
    PORTD &=(0b10111111);
    PORTD |= 0b00100000;
    _delay_ms(100);
  }
  else{
    PORTD=0;
  }

}