#include <stdio.h>
#include <stdlib.h>
int main(){

    int num1, num2, op, resul;

    printf("Insira um valor para a operacao: ");
    scanf("%d", &num1);

    printf("insira outro valor: ");
    scanf("%d", &num2);

    printf("Que operador deseja usar?\n");
    printf("(+ = 1) \n(- = 2) \n(x = 3)\n(/ = 4)\n ");
    scanf("%d", &op);

    switch(op){

        case 1:
            resul = num1 + num2;
            printf("Somando %d com %d, o resultado fica %d", num1, num2, resul);

        case 2:
            resul = num1 - num2;
            printf("Subtraindo %d com %d, o resultado fica %d", num1, num2, resul);

        case 3:
            resul = num1 * num2;
            printf("Multiplicando %d com %d, o resultado fica %d", num1, num2, resul);


        case 4:
            resul = num1 / num2;
            printf("Dividindo %d com %d, o resultado fica %d", num1, num2, resul);
    }

    return 0;

}
