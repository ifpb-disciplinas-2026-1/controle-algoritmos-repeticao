// Escreva um programa em linguagem C que leia um numero, 
// calcular o seu fatorial

#include <stdio.h>
int main(){    
    int n;
    printf("Digite um numero: ");
    scanf("%i", &n);

    long long fatorial =1;
    for(int num = n; num >=1; num = num - 1){
        // printf("%i ", num);
        fatorial = fatorial * num;
    }
    printf("Fatorial: %lld\n", fatorial);
    return 0;
}