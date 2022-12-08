#include <stdio.h>
#include <stdlib.h>
void exclamacao(int num){
    int i, j;
    for(i = 1; i<=num; i++){
        for(j = 0; j<i; j++){
            printf("!");
        }
    printf("\n");
    }
}
int main(){

    int num1;
    printf("Insira um valor inteiro: \n");
    scanf("%d", &num1);
    exclamacao(num1);
    return 0;
}
