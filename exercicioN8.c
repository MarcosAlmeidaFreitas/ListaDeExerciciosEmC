/* Faça um programa que receba um inteiro e mostre seus divisores. 
Ex: 12 é divisível por 12, 6, 4, 3, 2 e por 1*/

#include <stdio.h>
void main(){
     int n1;
     printf("Digite um numero e saiba quais sao seus divisores: ");
     scanf("%d",&n1);
     for(int i = 1;i <= n1;i++){
       
        if(n1 % i == 0){
           printf("\n %d e divisivel por %d",n1,i);
        }
     }
   }