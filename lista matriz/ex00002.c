#include <stdio.h>
#include <stdlib.h>

#define num 4
void main(){

int a[num][num],maior=-99999999;
int con,lin;
printf("insira 16 valores\n");
for( int i =0; i<num; i++){
    for( int j =0; j<num; j++){
        scanf("%d", &a[i][j]);
        if(a[i][j]>maior){
        maior=a[i][j];
        lin=i+1;
        con=j+1;
        }
    }
}
printf("o maior e %d\n", maior);
printf("linha %d\ncoluna %d",lin,con);
}
