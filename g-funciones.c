#include <stdio.h>
float excede6(float cp)
{
	
	float h;
	h=(cp-(cp*4/100));
	return h;
}

float excede12(float cp)
{
	float f;
	f=(cp-(cp*10/100));
	return f;
}
int main() {
	int cant, precio;
	float aux,cp;
	printf("Cantidad de productos llevados:\n");
	scanf("%d", &cant);
	printf("ingrese precio por producto:\n");
	scanf("%d", &precio);
	
	cp=cant*precio;
	
	if (cant >= 6){
		aux=excede6(cp);
		printf("Con descuentro es: %.2f\n", aux);
		printf("Sin descuento es: %.2f\n", cp);
	}
	else if (cant >= 12) {
		aux=excede12(cp);
		printf("Con descuentro es: %.2f\n", aux);
		printf("Sin descuento es: %.2f\n", cp);
	}
	else {
		printf("el total: %.2f\n", cp);
	}
	return 0;
	
}
