#include <stdio.h>
#include <stdlib.h>

int main(){
	
	double A= 5000000, B= 7000000;
	int tempo= 0;
	
	while(A <= B){
		A=A*1.3; 
		B=B*1.2;
		tempo++;
	}
	printf("O tempo	necessario sera de %d anos\n", tempo);
}
