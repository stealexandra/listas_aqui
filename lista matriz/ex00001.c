#include <stdio.h>
#include <stdlib.h>

#define num 3
void main(){

int a[num][num],menor=99999999;
printf("Insira 9 valores\n");

for( int i =0; i<num; i++){
    for( int j =0; j<num; j++){
        scanf("%d", &a[i][j]);
        if(a[i][j]<menor){
        menor=a[i][j];
        }
    }
}
printf("o menor e %d", menor);
}
