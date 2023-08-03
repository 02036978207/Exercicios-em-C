#include <stdio.h>

int main() {
    int idade;
    int contador = 0;

    printf("Digite a idade de 10 pessoas:\n");

    for(int i = 1; i <= 10; i++){
        printf("Pessoa %d: ", i);
        scanf("%d", &idade);

        if (idade > 18) {
            contador++;
        }
    }

    printf("O numero de pessoas maiores que 18 anos e: %d\n", contador);

    return 0;
}
