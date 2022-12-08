#include <stdio.h>
#include <stdlib.h>

#define num 8
void main(){

int vet[num],x=0,y=0;
printf("Insira 8 valores \n");
for( int i =0; i<num; i++){
    scanf("%d",&vet[i]);
}
printf(" escolha duas posicoes\n");
printf("1,2,3,4,5,6,7,8,\n");
for( int i =0; i<num; i++){
    printf("%d,",vet[i]);
}
scanf("%d",&x);
scanf("%d",&y);

printf("o primeiro e %d\n",vet[x-1]);
printf("o segundo  e %d",vet[y-1]);
}
