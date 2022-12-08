#include <stdio.h>
#include <stdlib.h.>

int main(){

    int n = 0;

    printf("Insira um valor para a condicao de parada da contagem: ");
    scanf("%d", &n);

    for(n; 0 <= n; n--){
        printf("%d\n", n);
    }

}
