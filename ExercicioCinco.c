#include <stdio.h>
#include <stdlib.h>

main(){
	int i, soma = 100;
	
	for(i =101; i<=300; i+=2){

	soma += i;
	printf("%3d\n",i);
		}
	printf("soma dos numeros impares de 100 a 300: %d\n\n" , soma);
}
