#include <stdio.h>
#include <stdlib.h>

#define num 4
void main(){

int a[num][num],b=0;
printf("Insira os valores\n");

for( int i =0; i<num; i++){
    for( int j =0; j<num; j++){
        scanf("%d", &a[i][j]);

        if(a[i][j]<0){
            b++;
        }
    }
}
printf("%d numeros inseridos sao negativos",b);
}
