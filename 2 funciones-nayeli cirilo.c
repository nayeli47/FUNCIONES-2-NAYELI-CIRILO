#include <stdio.h>
#include <stdlib.h>

void hola(int i,int j){
	for(i=1;i<=5;i++){
		
		
		for(j=1;j<=i;j++){
			printf("*");
			
		}
		printf("\n");
	}
}



int main(int argc, char *argv[]) {
	int i,j;
	
	hola(i,j);
	
	
	return 0;
}

