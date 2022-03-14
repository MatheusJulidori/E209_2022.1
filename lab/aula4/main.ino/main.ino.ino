void setup() {
  DDRD = 0b00000111;
  DDRB = 0b00000000;
}

void loop() {
  PORTB |= 0b00000111;

}
