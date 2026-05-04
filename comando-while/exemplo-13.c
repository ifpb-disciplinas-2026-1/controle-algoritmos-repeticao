
#include <stdio.h>
int main(){
    int numero;
    int contador = 1;
    printf("Digite um número: ");
    scanf("%d", &numero);
    // controle lógico -> número diferente de zero
    while (numero != 0){
        printf("Contador: %d \n", contador++);
        printf("Digite um número: ");
        scanf("%d", &numero);
    }
    return 0;
}