#include <stdio.h>
#include <stdlib.h>

#define num 10
void main(){


    int veta[num];
    int vetb[num];
    int vetc[num];
    printf("Insira 10 valores inteiros\n");
    for(int i = 0; i <num; i++){
        scanf("%d", &veta[i]);
    }

    for(int i = 0; i <num; i++){
        scanf("%d", &vetb[i]);
    }
    for(int i = 0; i <num; i++){
        vetc[i] = veta[i] - vetb[i];
    }
    printf("\n a soma dos numeros e \n");
    for(int i = 0; i <num; i++){
        printf("%d  ", vetc[i]);
    }



}
