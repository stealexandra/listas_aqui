#include <stdio.h>
#include <stdlib.h>
int main(){
float preco, preco_adicionado;
char destino[3], resposta[3];
    printf("Qual o valor do protuto? (em R$) ");
    scanf("%f", &preco);
    printf("Pra qual estado deve ser o destino do produto? (MG, SP, RJ ou MS): ");
    scanf("%s", &destino);

    if(strcmp(destino, "sp") == 0 || strcmp(destino, "SP") == 0){
            preco_adicionado = preco + (preco*0.12);
            printf("O valor para o estado de SP, fica R$%.2f\n", preco_adicionado);

    }else if(strcmp(destino, "mg") == 0 || strcmp(destino, "MG") == 0){
        preco_adicionado = preco + (preco*0.07);
        printf("O valor para o estado de MG, fica R$%.2f\n", preco_adicionado);

    }else if(strcmp(destino, "rj") == 0 || strcmp(destino, "RJ") == 0){
       preco_adicionado = preco + (preco*0.15);
       printf("O valor para o estado do RJ, fica R$%.2f\n", preco_adicionado);

    }else if(strcmp(destino, "ms") == 0 || strcmp(destino, "MS") == 0 ){
     preco_adicionado = preco + (preco*0.08);
     printf("O valor para o estado de MS, fica R$%.2f\n", preco_adicionado);

    }else{
        printf("Erro, nenhum estado foi cadastrado...!\n");

 }
return 0;


}
