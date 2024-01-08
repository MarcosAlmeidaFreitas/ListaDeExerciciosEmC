/* Faça um programa que leia 15 números e mostre qual é o maior, o menor e a média.*/

#include <stdio.h>
void main(){
  float soma = 0;
  float ntermos = 15;
  float numero;
  float maiorNumero = 0, menorNumero = 100000;
  float resultado = 0;

  printf("Digite uma sequencia de 15 numeros para saber qual e o maior número o menor e media dos numeros.\n");
       
  for( int i=0 ; i<15; i++){
    printf("Digite o %d numero: ", i+1);
    scanf(" %f", &numero);

    soma = soma + numero;
        
    if(numero > maiorNumero){
      maiorNumero = numero;
    } 

    if(numero < menorNumero){
      menorNumero = numero;
    }
  } 

    resultado = soma / ntermos;
    printf("\nSeu Maior Numero e: %.2f", maiorNumero); 
    printf("\nSeu Menor Numero e: %.2f", menorNumero); 
    printf("\nA media e: %.2f", resultado); 
  }