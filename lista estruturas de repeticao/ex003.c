#include<stdio.h>
#include<locale.h>
int main(){
int n;

printf("Digite um numero: \n");
scanf("%d", &n);
for (int i = 0, num = n + 1 + (n % 2); i < n; i++, num += 2) {
    printf("%d\n", num);
}
}
