#include <stdio.h>
#include <stdlib.h>

#define num 6
void main(){

int vet[num];
printf("Digite 6 valores\n");

for( int i =0; i<num; i++){
    scanf("%d",&vet[i]);
}
for( int i = num-1; i>-1; i--){
    printf("%d,",vet[i]);
}
}
