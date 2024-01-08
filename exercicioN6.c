/*Jogo do PIM! Faça um programa que que informe os números de 1 á 20 e a cada 3 números escreva a
palavra PIM ao invés do número. Ex: 1,2,3,PIM,5,6,7,PIM,9 . . .*/

#include <stdio.h>
 void main(){
  int cont=1;

  for(int i=1; i <= 20; i++){
    if(i == 4 || i % 4 == 0){
      printf("PIM!!, ");
    }else{
      printf("%d, ", i);
    }
  }       
}
 