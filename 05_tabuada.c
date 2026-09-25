#include <stdio.h>

int main() {
    int numero;
    int continuar = 1;

    while (continuar == 1) {

        printf("\nDigite um numero: ");
        scanf("%d", &numero);

        printf("\nTabuada do %d:\n", numero);

        for (int i = 1; i <= 10; i++) {
            printf("%d x %d = %d\n", numero, i, numero * i);
        }

        printf("\nDeseja ver outra tabuada? (1-Sim / 0-Nao): ");
        scanf("%d", &continuar);
    }

    printf("\nPrograma encerrado.\n");

    return 0;
}