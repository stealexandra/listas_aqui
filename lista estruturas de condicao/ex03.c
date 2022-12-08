#include<stdio.h>
#include<stdlib.h>

int main(){

   int num;
   printf("Digite o primeiro numero ");
   scanf("%i", &num);
   if(num % 2 == 0){
       printf("\n Numero par\n");
   }
   else{
       printf("\n Numero impar\n");
   }
}
