#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(int argc, char *argv[]) {
	
	 setlocale(LC_ALL, "Portuguese");
	 
	 int i, j, res;
	 
	 for(j=1; j<=10; j++){
	 	
	 	for (i=1; i<=10; i++){
	 	
	 	res = j * i;
	 
	 	printf("%d x %d = %d\n", j, i, res);
	 }
	 	printf("\n");
	 
	 }
	 
	 return 0;
}
