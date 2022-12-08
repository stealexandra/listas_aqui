#include<stdio.h>
#include <stdlib.h>

float somar (float *veto)
{
  float  soma = 0;

  for (int i = 0; i < 10; i++)
    soma = soma + veto[i];
    return soma;
}

int main(){
  float vet[10];
  int soma = 0;
  for (int i = 0; i < 10; i++){
    printf("Insira os valores para preencher o vetor: ");
    scanf("%f", &vet[i]);
  }

  soma = somar(vet);
  printf ("A soma dos valores inseridos e %d", soma);
  return 0;
}

