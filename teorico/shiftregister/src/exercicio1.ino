//Carregar no PlatformIO

int main(){

  DDRB |= (PD3<<1);//Configura PD3 como saida no portal D, o resto por padrão é entrada
  DDRD &= 11110001;//Configura PD4,3,2,1 como entrada
  PORTB &= !(PB2<<1);//Coloca 0 na saida do PB2

  //Temp = PD1 Pressao = PD2 Nivel = PD3 e Peso = PD4

  while(1){

    if(PIND&((1<<PD1)|(1<<PD2)) | PIND&((1<<PD1)|(1<<PD4)) | PIND&(!(1<<PD1)|(1<<PD2)) | PIND&(!(1<<PD4)|(1<<PD1))){//Se o botão no PB5 estiver pressionado, mantem PD3 desligado
      PORTB |= (PB2<<1);
    }
    
  }

}

