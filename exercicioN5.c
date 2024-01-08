/* Faça um programa que calcule o produto de dois números através de somas sucessivas.*/

#include <stdio.h>
  void main(){
      int n1, n2, resultado = 0;
      printf("\nDigite dois numeros para que possa ser feito o produto atraves de somas sucessivas ");
      printf("\nDigite o primeiro numero: ");
      scanf(" %d", &n1);
      printf("Digite o segundo numero: ");
      scanf(" %d", &n2);
      
      int i=0;
      
      while(i != n2){
        resultado = resultado + n1; 
        i++;
      }
      
      printf("\nO resultado do produto entre %d e %d = %d", n1, n2, resultado);
  }