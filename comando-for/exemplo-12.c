// Escreva um programa em linguagem C que leia um número positivo, 
// calcule o n-esimo termo da sequencia fibonnaci

#include <stdio.h>
int main(){    
    int n;
    printf("Digite um numero: ");
    scanf("%i", &n);


    int primeiro = 0;
    int segundo = 1;
    int atual = 1;

    for(int contador = 1; contador <= n; contador = contador+1){
        printf("%i -> %i\n", contador, atual);
        atual = primeiro + segundo;
        primeiro = segundo;
        segundo = atual;
    }

    return 0;
}