#include <stdio.h>
#include <stdlib.h>


int suma (int num1,int num2){
	int su;
	su=num1+num2;	
}
	void resta(int num1,int num2){
		int re;
		re=num1-num2;
			printf("la resta es:\n%d",re);	
	}
		
	float divi(int num1,int num2){
		float div,a,b;
		a=num1;
		b=num2;
		div=a/b;
		return div;
		}

int main(int argc, char *argv[]) {
	
	int num1,num2,num3,mult;	
	float a,b,div;
	printf("ingresar un numero\n");	
	scanf("%d",&num1);
	printf("ingresar otro numero\n");	
	scanf("%d",&num2);
	
	printf("1. SUMAR\n2. RESTAR\n3. MULTIPLICAR\n4. DIVIDIR\n");	
	scanf("%d",&num3);
	
	switch (num3){
	case 1:printf("la suma es:\n%d",suma(num1,num2)); break;	
	case 2:resta(num1,num2);break;	
	case 3:mult=num1*num2;
	printf("la multiplicacion es:\n%d",mult);break;
	case 4:div=divi(num1,num2);break;
	printf("la divicion es: %.2f\n",div); break;
	}
	
	
	
	
	return 0;
}

