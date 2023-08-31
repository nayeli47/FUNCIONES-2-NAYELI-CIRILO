#include <stdio.h>
#include <stdlib.h>
int nose (int num) {
	int R;
	R=num*num-2*num;
	return R;
}

int main() {
	int num, aux;
	
	printf("Incerte un numero: ");
	scanf("%d", &num);
	
	aux=nose(num);
	
	printf("El numero %d \n el resultado es: %d\n", num, aux);
	
	return 0;
}
