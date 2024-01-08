/* Faça um programa que mostre a sequencia de Fibonacci antes um número digitado pelo usuário.
Ex: Se ler 10 mostra 1 1 2 3 5 8*/

#include <stdio.h>
  void main(){
    int usuario;
    int n1 = 0, n2 = 1; 
    int parada = 0;
    int resultado = 0;
         
    printf("Digite um numero para saber a sequencia de Fibonacci menor q ele: ");
    scanf(" %d", &usuario);
         
    do{      
      resultado = n1 + n2;
      n2 = n1;
      
      if(n1 !=0) printf(" %d", n1);
      
      if(resultado < usuario){
        n1 = resultado;
      }else{
        parada = 1; 
      }
      
    }while (parada == 0);
}