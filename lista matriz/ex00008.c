#include <stdio.h>

void imprime( int a[][10] ) {
  int i,j;
  for (i=0;i<10;i++){
    for (j=0;j<10;j++){
        printf("%6d",a[i][j]);
    };
    printf("\n");
  };
  printf("\n");
}
int main () {
  int v[10][10];
  int i,j ;

  for (i=0;i<10;i++) {
    for (j=0;j<10;j++) {
      if (i==j) {
        v[i][j] = 3*i*i - 1;
      }
      else if (i <j) {
        v[i][j] = 2*i + 7*j - 2 ;
      } else {
          v[i][j] = 4*i*i*i + 5*j*j + 1;
      };
    }
  }
  printf("\nvai imprimir a matriz\n");
  imprime(&v);
}
