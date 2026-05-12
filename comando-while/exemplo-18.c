/* Escreva um programa em linguagem C que leia uma quantidade indeterminada 
de números inteiros, calcule e exiba quantos números positivos e negativos 
foram digitados. O algoritmo deve continuar até ser digitado o zero. */

#include <stdio.h>
int main(){
  int num, cont_positivo =0, cont_negativo=0;

  printf("Digite um numero: ");
  scanf("%d", &num);
  while(num!=0){  
    if (num >0){
        cont_positivo++;
    }
    if (num<0){
        cont_negativo++;
    }
    printf("Digite um numero: ");
    scanf("%d", &num);
  }

  printf("Positivos: %d \n", cont_positivo);
  printf("Negativo: %d \n", cont_negativo);
    return 0; 
}