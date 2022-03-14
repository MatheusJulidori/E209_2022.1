//Carregar no PlatformIO

int main(){

  DDRD = (PD3<<1);//Configura PD3 como saida no portal D, o resto por padrão é entrada
  DDRB = 0b00001111;//Configura PB7,6,5, e 4 como entrada e 3,2,1,0 como saida
  PORTD |= (PD3<<1);//Coloca 1 na saida do PD3
  PORTB |= 0b10100000; // Ativa pull up no PB7 e PB5, pois ambos estão como entrada

  while(1){
    __delay_ms(1000);
    PORTD &= !(PD3<<1);//Desliga PD3
    __delay_ms(1000);
    PORTD |= (PD3<<1);//Liga PD3

    if!(PINB&(1<<PB5)){//Se o botão no PB5 estiver pressionado, mantem PD3 desligado
      PORTD &= !(PD3<<1);
    }
  }

}

