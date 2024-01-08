/*Faça um programa que mostre a soma dos valores contidos entre dois inteiros digitados (inclusive os
passados): Ex: 2 e 5 retorna 14.*/
#include <stdio.h>
 void main(){
  int n1,n2, i, resultado = 0;
    printf("\nDigite dois numeros para saber soma dos valores contidos entre esses dois valores inclusive os passados\n");
    printf("Digite o primeiro valor: ");
    scanf(" %d", &n1);
    printf("Digite o segundo valor: ");
    scanf(" %d", &n2);
  
    for(i=n1; i <= n2; i++){
       resultado = resultado + i;
    }
    
    printf("O resultado e: %d", resultado);
    
 }