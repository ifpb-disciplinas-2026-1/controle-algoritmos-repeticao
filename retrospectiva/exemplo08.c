// Escreva um programa em linguagem C que leia um número e exiba a sua tabuada.

#include <stdio.h>
int main(){    
    int num;
    printf("Digite o número: ");
    scanf("%i", &num);

    for (int multiplicador = 1; multiplicador <=10; multiplicador = multiplicador + 1){
        printf("%d x %d = %d \n", num, multiplicador, num * multiplicador);
    }
    return 0;
}