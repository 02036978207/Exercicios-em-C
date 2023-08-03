#include <stdio.h>
#include <stdlib.h>

int main(){
	
	float chico=1.7, juca=1.1;
	int ano =0;
	
	while(chico >= juca){
		chico += 0.02;
		juca += 0.03;
		ano++;
	}
	
	printf("Sera necessario %d anos!\n\n", ano);
}
