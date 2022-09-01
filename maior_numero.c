#include <stdio.h>

int main()
{
  int vetor[10];
  int maior = 0;

  printf("Digite 10 números:");
  for(int i = 0; i < 10; i++){
    scanf("%d", &vetor[i]);
    if(vetor[i] > maior){
      maior = vetor[i];
    }
  }
  printf("O maior número digitado foi: %d", maior);
}

