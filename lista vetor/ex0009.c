#include <stdio.h>
#include <stdlib.h>

#define num 100
void main(){

int vet[num];
for(int i = 0; i <101; i++){
    if(i%7!=0){
        vet[i]=i;
    }else{

    }
}
for(int i = 0; i <101; i++){
    if(i%7!=0){
        printf("%d,",vet[i]);
    }else{

    }
}
}
