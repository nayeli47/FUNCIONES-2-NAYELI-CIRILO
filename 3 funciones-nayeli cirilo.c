#include <stdio.h>
#include <stdlib.h>
void hola(int num){
if(num>=1 && num<=12){
switch(num){
case 1:printf("tiene 31 dias");break;
case 2:printf("tiene 29 dias");break;
case 3:printf("tiene 31 dias");break;
case 4:printf("tiene 30 dias");break;
case 5:printf("tiene 31 dias");break;
case 6:printf("tiene 30 dias");break;
case 7:printf("tiene 31 dias");break;
case 8:printf("tiene 31 dias");break;
case 9:printf("tiene 30 dias");break;
case 10:printf("tiene 31 dias");break;
case 11:printf("tiene 30 dias");break;
case 12:printf("tiene 31 dias");break;
}		
}else{printf("el mes insertado no existe");}		
}

int main(int argc, char *argv[]) {
int num;
 
	printf("escriba el numero del mes (1 al 12)\n");
	scanf("%d",&num);
	
	hola(num);
	
	return 0;
}

