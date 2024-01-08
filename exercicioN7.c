/* Faça um programa que leia 11 números e mostre quantos são pares e quantos são ímpares. */
#include <stdio.h>
   void main() 
       {
        int impar=0,par=0,i=0,n1;
        printf("\nDigite 11 numeros para saber quantos numeros sao pares e quantos sao impares:\n");
  
      while(i < 11){
        printf("Digite o %d numero: ", i+1);
        scanf(" %d", &n1);
        if(n1 % 2 == 0){
          par ++;
        }if(n1 % 2 != 0){
          impar ++;
        }
        i++;
     }
      printf("\n%d numeros sao pares e %d numeros sao impares", par, impar);
     }