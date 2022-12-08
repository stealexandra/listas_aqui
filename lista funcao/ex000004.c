#include <stdio.h>
#include <stdlib.h>

int elevar(int x, int y) {
	if (y == 1){
        return x;
	} else{
        return (x * elevar(x, y-1));
	}
}

int main() {
	int x, y;

	printf("Qual a base da potenciacao? \n");
	scanf("%d", &x);
	printf("\nQual a potencia? \n");
	scanf("%d", &y);

	printf("\nResultado: %d\n\n", elevar(x, y));
}
