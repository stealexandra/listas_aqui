#include <stdio.h>
#include <stdlib.h.>

int main(){

    int num = 0;
    printf("Insira um valor ");
    scanf("%d", &num);

    if(num % 3 == 0){
        printf("O valor inserido e divisivel por 3\n");
    } if (num % 5 == 0){
        printf("O valor inserido e divisivel por 5\n");
    } else if(num % 3 != 0 && num % 5 != 0){
        printf("O valor inserido nao e divisivel por 3 e por 5");
    }


}
