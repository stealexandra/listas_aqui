#include <stdio.h>
#include <stdlib.h.>

int main(){
    int salario = 0, empres = 0;

    printf("Informe o valor do seu salario: ");
    scanf("%d", &salario);
    printf("Qual o valor da prestacao? ");
    scanf("%d", &empres);

    if(empres < salario * 0.2){
        printf("Ihuul! Seu emprestimo foi concedido com sucesso.");
    } else {
    printf("Ops! Nao foi possivel conceder o seu emprestimo...");
    }
}
