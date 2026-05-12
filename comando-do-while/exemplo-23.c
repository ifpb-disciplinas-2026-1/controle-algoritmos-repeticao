/**
Escreva um programa em linguagem C que simule um jogo de adivinhação. 
O algoritmo deve calcular um número aleatório (selecionado) e ler uma quantidade 
indefinida de números positivos (informado). 
Ele será finalizado quando os números selecionado e informados forem iguais 
ou quando ultrapassar cinco tentativas. 
Por fim, devem ser exibidos: o número selecionado e a quantidade de tentativas.
 */

 #include <stdio.h>
 #include <stdlib.h>
 #include <time.h>

int main(){
    srand(time(NULL)); 

    int aleatorio = rand() % 100 + 1;
    // int aleatorio = 39;
    int numero;
    int tentativas =0;
    int menor = 1,  maior = 100;

    do{
        printf("Digite um numero entre %d e %d\n", menor, maior);
        scanf("%d", &numero);
        if(numero < aleatorio){
            menor = numero;
        }
        if(numero > aleatorio){
            maior = numero;
        }
        tentativas++;
    }while(numero != aleatorio && tentativas < 5);
    
    if(numero != aleatorio){
        printf("Você perdeu!!!");
    }else{
        printf("Você ganhou!!!!");
    }
    printf("Numero aleatorio: %d\n", aleatorio);
    return 0; 
}