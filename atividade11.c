#include <stdio.h>
#include <stdlib.h>

// professor eu estou usando como base para fazer esse exercicio avaliativo a atividade 6 feita em aula. Entretanto eu tirei o int argc, char *argv
// porque voce disse que nesses casos não faria diferença ter eles ou não no codigo

int main()
{
    float A, B, C;
    scanf("%f%f%f", &A, &B, &C);

    printf("MEDIA = %.1f\n",
    ((A * 2)+(B * 3)+(C * 5))/10);
    return 0;
}
// Henrique Baylo Cordeiro 
// RA 22510423