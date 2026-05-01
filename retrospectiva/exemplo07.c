// Escreva um programa em linguagem C que exiba 
// o quadrado dos números ímpares contidos no intervalo de 1 a 10.

#include <stdio.h>
int main(){    
    int num = 1;
    for (; num <= 10; num = num + 1){
        if (num % 2 != 0 ){
            printf("%d -> %d\n",num,  num * num);
        }
    }

    printf("%d\n", num);
    
    for (int num = 1; num <= 10; num = num + 2){
            printf("%d -> %d\n",num,  num * num);
    }

    return 0;
}