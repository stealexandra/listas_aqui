#include<stdio.h>
#include<stdlib.h>
int main()
{
 int numero, guarda_maior, guarda_menor;
 int i;

 printf("Insira um numero inteiro: ");
 scanf("%i", &numero);

 guarda_maior=numero;
 guarda_menor=numero;

 for(i=1; i<10; i++)
 {
 printf("\nInsira o %d numero inteiro: ",i+1);
 scanf("%i", &numero);

 if(numero>guarda_maior)
 guarda_maior=numero;
 else
 if(numero<guarda_menor)
 guarda_menor=numero;
 }


 printf("\nO menor numero inserido e: %d", guarda_menor);
 printf("\nO maior numero inserido e: %d", guarda_maior);

 getch();
}
