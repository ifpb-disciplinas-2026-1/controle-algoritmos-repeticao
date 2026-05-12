/* Escreva um programa em linguagem C que leia um número indeterminado 
de números positivos. O algoritmo deve calcular, imprimir a soma e a média, 
e continuar até ser digitado o zero. */

#include <stdio.h>
int main(){
    int soma=0, contador=0;   
    int numero;
    do{
        printf("Digite um numero: ");
        scanf("%d", &numero);
        if(numero < 0){
            // break;
            continue;
        }
        soma = soma + numero;
        contador ++;
    }while(numero!=0);
    float media = (float) soma / contador;
    printf("Soma: %d, Contador: %d, Média: %.2f\n", soma, contador, media);

    return 0; 
}