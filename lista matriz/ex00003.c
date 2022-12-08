#include <stdio.h>
#include <stdlib.h>

#define num 5
void main(){

int a[num][num];


for( int i =0; i<num; i++){
    for( int j =0; j<num; j++){
        if(i==j){
            a[i][j]=1;
        }else{
            a[i][j]=0;
        }
    }
}
for( int i =0; i<num; i++){
    for( int j =0; j<num; j++){
        printf("%d \t",a[i][j]);
    }
    printf("\n");
}
}
