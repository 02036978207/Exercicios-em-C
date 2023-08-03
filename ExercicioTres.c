#include <stdio.h>
#include <stdlib.h>

int main (){
	
	int contador = 1;
	float maiorvalor, menorvalor, valor;
	
	while(contador <= 5){
		
		printf("digite um numero: \n");
		scanf ("%f", &valor);
		
		if(contador == 1){
			maiorvalor = valor;
			menorvalor = valor;
		}
		
		if(valor > maiorvalor){
			maiorvalor = valor;
		}
		else if(valor < menorvalor){
			menorvalor = valor;
		}
		
			
		contador++;
	}
	
	printf("\n");
	printf("o maior valor é: %f \n", maiorvalor);
	printf("o menor valor é: %f \n", menorvalor);
	
	
	return 0; 
}

