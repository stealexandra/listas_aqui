#include <stdio.h>
#include <stdlib.h>

int main(){

    int vet[10] = {3, 9, 3, 22, 13, 3, 1, 11, 69, 1};

    for(int k = 0; k < 10; k++){
        printf("%d ", vet[k]);
    }

    for(int i = 0; i < 10; i++){
        for(int j = i + 1; j < 10; j++){
            if(vet[i] == vet[j]){
                printf("\nO valor %d se repete", vet[i]);
            }
        }
    }
}
