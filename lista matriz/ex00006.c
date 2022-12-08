#include <stdio.h>
#include <stdlib.h>

#define num 3
void main(){

int a[num][num],b=0;
printf("Insira os valores para preencher a matriz\n");

for( int i =0; i<num; i++){
    for( int j =0; j<num; j++){
        scanf("%d", &a[i][j]);

        if(i==j){
            b=b+a[i][j];
        }
    }
}
printf("a soma e %d ",b);
}
