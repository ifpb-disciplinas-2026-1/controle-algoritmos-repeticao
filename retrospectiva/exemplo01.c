// Escreva um programa que leia um número inteiro e apresente a metade deste número.
#include <stdio.h>
int main(){
    int num;
    printf("Digite um numero inteiro: ");
    scanf("%d", &num);
    float resultado = (float) num / 2;
    printf("O resultado desta operação é: %.2f \n", resultado);
    return 0;
}