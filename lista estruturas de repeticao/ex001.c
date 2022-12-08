#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
  int x = 0,n = 0;
  printf("Insira um valor para a condicao de parada da contagem: ");
  scanf("%d", &n);
  for(x = 0 ; x <= n ; x++)
  {
     printf("%d\n",x);
  }
  return 0;
}
