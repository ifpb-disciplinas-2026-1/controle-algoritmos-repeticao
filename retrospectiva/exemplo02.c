// Escreva um programa que leia um número e apresenta o valor do seu sucessor e antecessor.

#include <stdio.h>
int main(){
    int num;
    printf("Digite um número inteiro: ");
    scanf("%i", &num);
    printf("antecessor: %i \n",num-1);
    printf("sucessor: %i \n",num+1);
    return 0;
}