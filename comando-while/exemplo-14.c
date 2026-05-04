// O que esse algoritmo faz?
#include <stdio.h>
int main(){
  char letra = '\0';
  while (letra!='a'){
     printf("%c", letra);
     letra= getchar();
    // scanf("%c", &letra);
  }
  printf("Você digitou a tecla: %c", letra);
  return 0;
}