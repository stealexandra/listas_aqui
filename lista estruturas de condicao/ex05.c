#include <stdio.h>
#include <stdlib.h.>
#include <math.h>

int main(){
    int x = 0, qua = 0, raiz = 0;

    printf("Insira um valor... ");
    scanf("%d", &x);

    if(x > 0){
        printf("O valor elevado ao quadrado e igual a %f \n ", pow(x, 2));
        printf("E sua raiz quadrada de e %f", sqrt(x));
    }
}
