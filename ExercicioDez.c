#include <stdio.h> 
#include <stdlib.h> 
#include <locale.h> 

int main(void) 
{ 
char cod; 
float val,vista,prazo,val_t,pr_aux = 0; 
int i = 1; 

setlocale(LC_ALL, "Portuguese"); 

while (i <= 15) { 
printf ("Digite o código (V para transação a vista e P para prazo):\n"); 
cod = getchar(); 
if (cod == '\n' || cod ==EOF) break; 
cod = toupper(cod); 

if(cod == 'V') { 
printf ("Digite o valor a vista: \n"); 
scanf("%f",&val); 
vista += val; 
} 
else if(cod == 'P') { 
printf ("Digite o valor a prazo: \n"); 
scanf ("%f",&val); 
prazo += val;
} 
i++; 

getchar(); 
} 

val_t = vista + prazo;  


printf ("Valor total das compras a vista: R$ %.2f \n",vista); 
printf ("Valor total das compras a prazo: R$ %.2f \n", prazo); 
printf ("Valor total das compras: R$ %.2f \n", val_t);  

system("pause"); 
return 0; 
}
