#include <stdio.h>
#include <stdlib.h>

#define num 10
void main(){
    printf("Insira 10 valores\n");
    int vet[num];
    int maior=-9999999, menor=9999999;

    for(int i = 0; i <num; i++){
        scanf("%d", &vet[i]);
        if(vet[i] > maior){
            maior = vet[i];
        }
        if(vet[i] < menor){
            menor = vet[i];
        }
    }
    printf("\nMaior %d\nMenor %d", maior, menor);




}
