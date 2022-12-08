#include <stdio.h>
#include <stdlib.h>

int main()
{
  int i, soma;
  soma = 0;
  int num[10];
  printf("Insira os 10 numeros para somar:\n");
  for(i= 0; i<10; i++) {
    printf("Digite o %d valor: ", i+1);
    scanf("%d", &num[i]);
    soma +=num[i];
  }
  printf("\nSoma = %d : ", soma);

  system("pause");
   return 0;
}
