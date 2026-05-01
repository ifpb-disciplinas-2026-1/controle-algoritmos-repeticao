// Escreva um programa em linguagem C que exiba os números de 10 a 1.

#include <stdio.h>
int main(){    
    for (int num = 10; num >= 1; num = num - 1){
        printf("%d\n", num);
    }
    return 0;
}