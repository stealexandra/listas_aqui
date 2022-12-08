#include <stdio.h>
#include <stdlib.h>
int main (){
    int a,b;
    printf ("Digite o primeiro numero ");
    scanf ("%d",&a);
    printf("Digite o segundo numero ");
    scanf ("%d",&b);

    if (a>b){
    printf ("%d maior que %d", a, b);
    }
    if (a<b){
    printf ("%d maior que %d", b, a);
    }
    if (a==b){
    printf ("%d igual a %d", a, b);
    }

}
