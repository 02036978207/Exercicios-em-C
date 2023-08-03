#include <stdio.h>
#include <stdlib.h>

int numero;
int contador=0;

int main (int argc, char *argv[])

{
    // Write C code here
    printf("tabuada \n\n");
    printf("Digite o numero da tabuada: ");
    scanf("%d", &numero);
    
    for(contador=1;contador<=10;contador++)
    {
        printf("%d x %d = %d\n", numero,contador,numero*contador);
    }
system ("pause");
    return 0;
}
