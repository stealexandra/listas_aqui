#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

main()

{
    setlocale(LC_ALL,"");
    int i, n, a = 0;
    float media;
    for(i = 0; i < 10; i ++)

    {

     printf("INFORME O %d� N�MERO: ", i + 1);
     scanf("%d", &n);
     a = a + n;

    }

    media = a / 10;
    printf("A m�dia dos valores inseridos e: %.2f\n", media);

    }
