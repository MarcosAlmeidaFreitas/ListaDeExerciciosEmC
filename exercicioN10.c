/*Faça um programa que calcule a divisão através de subtrações sucessivas.*/
#include <stdio.h>

void main(){
  int dividendo =0;
  int dividendo2 =0;
  int divisior = 1;
  int quociente = 0;
  int resto = 10000;
  int parada =0;
  
  printf("Digite o dividendo: ");
  scanf(" %d", &dividendo);
  
  //variavel para poder mostrar depois qual era o dividendo
  dividendo2 = dividendo;

  do{
    printf("Digite o divisor: ");
    scanf(" %d", &divisior);
    if(divisior == 0 ) printf("Nao e permitido 0 no divisor!!!\n");
  }while (divisior == 0);

  if(dividendo == 0 ){
    printf("Zero dividido por qualquer numero sempre sera zero");
    return;
  } 

  if(divisior == 1) {
    printf("Qualquer numero divido 1, o resultado e dividendo: %d", dividendo);
    return;
  }

  if(dividendo < divisior){
    printf("Nao e possivel que dividir um dividendo menor do que o divisor com subtracoes consecutivas");
    return;
  }

  do{
    if(dividendo - divisior >= 0){
      quociente++;
      dividendo = dividendo - divisior;
    }else{
      parada = 1;
    }
  }while(parada == 0);

  if(dividendo > 0){
    resto = dividendo % divisior;
    printf("%d / %d = %d  e o resto: %d ", dividendo2, divisior, quociente, resto);
  }else{
    printf("%d / %d = %d ", dividendo2, divisior, quociente);
  } 
}