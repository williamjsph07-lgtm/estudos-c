#include <stdio.h>

int main() {
    float nota1, nota2, nota3, media;
    int aprovados = 0;
    int exame = 0;
    int reprovados = 0;

    for (int i = 1; i <= 10; i++) {
        printf("\nAluno %d\n", i);

        printf("Nota 1: ");
        scanf("%f", &nota1);

        printf("Nota 2: ");
        scanf("%f", &nota2);

        printf("Nota 3: ");
        scanf("%f", &nota3);

        media = (nota1 + nota2 + nota3) / 3;

        if (media >= 6) {
            aprovados++;
        } else if (media >= 4) {
            exame++;
        } else {
            reprovados++;
        }
    }

    printf("\n===== RESULTADO =====\n");
    printf("Aprovados: %d\n", aprovados);
    printf("Exame: %d\n", exame);
    printf("Reprovados: %d\n", reprovados);

    return 0;
}