void setup() {
  DDRB = 0b00000000;
  PORTB |= 0b00000001;
}

void loop() {
  PORTB = PORTB << 1;
  _delay_ms(250);
  PORTB = PORTB >> 1;
  _delay_ms(250);

}
