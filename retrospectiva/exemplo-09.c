// Escreva um programa em linguagem C que exiba a seguinte mensagem:
// 0 5 10 15 20 25 30 35 40 45 50 Terminou!

#include <stdio.h>
int main(){    
    for(int num = 0; num <= 50 ;num = num + 5){
        printf("%d ", num);
    }
    printf("Terminou!\n");

    return 0;
}