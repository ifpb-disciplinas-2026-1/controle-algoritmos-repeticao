/* Escreva um programa em linguagem C que leia um número inteiro e 
exiba quantos de algarismos o número informado possui. */

#include <stdio.h>
int main(){
  int num;
  int cont = 1;
  printf("Digite um numero: ");
  scanf("%d", &num);
  int resultado = num / 10;
  while(resultado > 0){
    cont++;
    resultado = resultado / 10;
  }
  printf("Quantidade: %d\n", cont);
  return 0; 
}