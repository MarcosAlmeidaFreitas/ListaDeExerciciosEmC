//Faça um programa que diga se um número digitado é ou não um número primo.

#include <stdio.h>
void main(){
  int numero, i=2, quociente;
  printf("Digite um numero para saber se ele e primo: ");
  scanf(" %d", &numero);
       
  for(i; i < numero; i++){
    quociente = numero % i;
        
    if(quociente == 0){
      printf("O numero nao e primo, pois %d e divisivel por: %d", numero, i);
        return;
    }
  }

  printf("O numero %d e primo", numero);
}