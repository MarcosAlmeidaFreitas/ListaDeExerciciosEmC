/*Faça um programa que solicite ao usuário a quantidade de valores que serão digitados, 
leia os n valores e exiba a média.*/

#include <stdio.h>

void main(){
  int nTermos;
  float resultado = 0;
  float termo;
    
  do{
    printf("Digite quantos valores voce quer atribuir: ");
    scanf("%d", &nTermos);
  }while (nTermos < 2);
    
    
  for(int i=0; i < nTermos; i++){
    printf("Digite o termo %d: ", i+1);
    scanf(" %f", &termo);
    resultado = resultado + termo;
  }

  resultado = resultado / nTermos;
  printf("O resultado da media dos termos: %f", resultado);
}