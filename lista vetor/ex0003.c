#include <stdio.h>
#include <stdlib.h>

#define num 5
void main(){

int vet[num], media=0;
printf("Insira 6 valores\n");
for( int i =0; i<num; i++){
    scanf("%d",&vet[i]);
    media =media+(vet[i]/ num );
}
for( int i =0; i<num; i++){
    printf("%d,",vet[i]);
}
printf(" \n a media dos valores e %d",media);
}
