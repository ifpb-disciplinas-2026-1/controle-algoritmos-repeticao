// Escreva um programa em linguagem C que leia 5 números reais, 
// verifique e exiba quantos dos números lidos são maiores que 10.

#include <stdio.h>
int main(){    
    float numero;
    int contador=0;
    for(int num = 1; num <= 5 ;num = num + 1){
        scanf("%f", &numero);    
        if (numero >= 10){
            contador = contador + 1;
        }
    }

    printf("Maiores: %d\n", contador);
    

    return 0;
}