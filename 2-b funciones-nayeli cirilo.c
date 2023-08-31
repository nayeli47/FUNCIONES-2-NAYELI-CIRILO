#include <stdio.h>
#include <stdlib.h>

void hola(int t,int i, int j ){
	for(i=1;i<=t;i++){
		
		
		for(j=1;j<=i;j++){
			printf("*");
			
		}
		printf("\n");
	}
}

int main(int argc, char *argv[]) {
	int i,j,t;
	
	
	printf("inserte las lineas del triangulo\n");
	scanf("%d",&t);
	
	hola(t,i,j );
	
	
	
	
	return 0;
}

