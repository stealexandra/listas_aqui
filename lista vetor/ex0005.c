#include <stdio.h>
#include <stdlib.h>

#define num 10
void main(){

    int vet[num],par=0;
    printf("Insira 10 valores\n");
    for(int i = 0; i <num; i++){
        scanf("%d", &vet[i]);
    }
    for(int i = 0; i <num; i++){
        if(vet[i] % 2 == 0){
            par++;
        }
    }
printf("a quantidade de valores pares inseridos foram %d",par);
}
