#include <stdio.h>

int main() {
    float N1, N2, N3, N4, nota_exame;
    float media, media_final;

    scanf("%f %f %f %f %f", &N1, &N2, &N3, &N4, &nota_exame);

    media = (N1 * 2 + N2 * 3 + N3 * 4 + N4 * 1) / 10;

    printf("Media: %.1f\n", media);

    if (media >= 7.0) {
        printf("Aluno aprovado.\n");
    } else if (media < 5.0) {
        printf("Aluno reprovado.\n");
    } else {
        printf("Aluno em exame.\n");
        printf("Nota do exame: %.1f\n", nota_exame);

        media_final = (media + nota_exame) / 2;

        if (media_final >= 5.0) {
            printf("Aluno aprovado.\n");
        } else {
            printf("Aluno reprovado.\n");
        }

        printf("Media final: %.1f\n", media_final);
    }

    return 0;
}//Henrique Baylo Cordeiro 22510423
//professor como no segundo caso dos dados de entrada não tem a nota do exame eu estou considerando como 0.
//Então na minha resolução eu coloco 0 na 5° variável.