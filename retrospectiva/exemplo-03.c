// Escreva um programa que leia dois valores inteiros A e B, 
// realizar a troca dos valores e imprimir o resultado após a troca.

#include <stdio.h>
int main(){
    int a, b;
    printf("Digite dois valores A e B: ");
    scanf("%d", &a);
    scanf("%d",&b);
    printf("Valores de A: %d e B: %d\n", a, b);
    int aux = a;
    printf("Valores de A: %d e B: %d, aux: %d\n", a, b, aux);
    a = b;
    printf("Valores de A: %d e B: %d, aux: %d\n", a, b, aux);
    b = aux;
    printf("Valores de A: %d e B: %d, aux: %d\n", a, b, aux);
    printf("Valores de A: %d e B: %d\n", a, b);
    return 0;
}