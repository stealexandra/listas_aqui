#include <stdio.h>
#include <stdlib.h>


void main(){

int A[5][5];
int B[5][5];
printf("Insira os valores para preencher a matriz 5x5\n");
for( int i =0; i<5; i++){
    for( int j =0; j<5; j++){
        scanf("%d", &A[i][j]);
        B[i][j] = A[i][j] *2;
    }
}

for( int i =0; i<5; i++){
    for( int j =0; j<5; j++){
        printf("%d \t",B[i][j]);
    }
    printf("\n");
}
}
