#include <stdio.h>

int main() {
    float nota1, nota2, nota3;
    int peso1 = 2;
    int peso2 = 3;
    int peso3 = 5;
    float media;

    printf("Digite a primeira nota: ");
    scanf("%f", &nota1);

    printf("Digite a segunda nota: ");
    scanf("%f", &nota2);

    printf("Digite a terceira nota: ");
    scanf("%f", &nota3);

    printf("\nOs pesos sao: 2, 3 e 5.\n");

    if (peso1 == 0 || peso2 == 0 || peso3 == 0) {
        printf("Erro: nenhum peso pode ser 0.\n");
    } else {

        media = (nota1 * peso1 + nota2 * peso2 + nota3 * peso3)
                / (peso1 + peso2 + peso3);

        printf("\nMedia ponderada: %.2f\n", media);

        if (media >= 6) {
            printf("Situacao: APROVADO\n");
        } else if (media >= 4) {
            printf("Situacao: EXAME\n");
        } else {
            printf("Situacao: REPROVADO\n");
        }
    }

    return 0;
}