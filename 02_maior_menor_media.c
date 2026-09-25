#include <stdio.h>

int main() {
    int n;
    float numero;
    float maior, menor;
    float soma = 0;
    float media;

    printf("Quantos numeros voce quer digitar? ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Quantidade invalida.\n");
        return 0;
    }

    for (int i = 1; i <= n; i++) {
        printf("Digite o %d numero: ", i);
        scanf("%f", &numero);

        soma = soma + numero;

        if (i == 1) {
            maior = numero;
            menor = numero;
        } else {
            if (numero > maior) {
                maior = numero;
            }

            if (numero < menor) {
                menor = numero;
            }
        }
    }

    media = soma / n;

    printf("\nMaior valor: %.2f\n", maior);
    printf("Menor valor: %.2f\n", menor);
    printf("Media: %.2f\n", media);

    return 0;
}