// Escreva um programa que leia o salário de um funcionário, 
// calcule e mostre o seu novo salário, com 10% de aumento.

#include <stdio.h>
int main(){
    float salario, novo_salario;
    printf("Digite o salário: ");
    scanf("%f", &salario);
    novo_salario = salario * 1.1;
    printf("Novo salário: %.2f \n", novo_salario);
    return 0;
}