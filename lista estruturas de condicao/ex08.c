#include <stdio.h>
#include <stdlib.h.>

int main(){

    int dia = 0;

    printf("Insira um valor de 1 a 7: ");
    scanf("%d", &dia);

    switch(dia){
    case 1:
        printf("Domingo");
        break;
    case 2:
        printf("Segunda");
        break;
    case 3:
        printf("Terca");
        break;
    case 4:
        printf("Quarta");
        break;
    case 5:
        printf("Quinta");
        break;
    case 6:
        printf("Sexta");
        break;
    case 7:
        printf("S�bado");
        break;
    default:
        printf("Esse dia da semana nao existe, meu companheiro. Tente novamente.");

    }

}
