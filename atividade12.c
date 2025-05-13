#include <stdio.h>

int main() {
    char nome[50];
    float salario_fixo, total_vendas, salario_total;
    printf("Digite o nome do vendedor: ");
    scanf("%s", nome);
    printf("Digite o salario fixo: ");
    scanf("%f", &salario_fixo);
    printf("Digite o total de vendas: ");
    scanf("%f", &total_vendas);
    salario_total = salario_fixo + (total_vendas * 0.15);
    printf("TOTAL = R$ %.2lf\n", salario_total);
    return 0;
} //Henrique Baylo Cordeiro 22510423