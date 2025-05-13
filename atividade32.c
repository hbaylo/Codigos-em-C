#include <stdio.h>

int main() {

    double valor;
    int v, c100, c50, c20, c10, c5, c2;
    int m1, m050, m025, m010, m005, m001;

    scanf("%lf", &valor);

    // Convertendo tudo para centavos para evitar problemas com ponto flutuante
    v = (int)(valor * 100 + 0.5); // arredonda corretamente

    c100 = v / 10000;
    c50 = (v - c100 * 10000) / 5000;
    c20 = (v - c100 * 10000 - c50 * 5000) / 2000;
    c10 = (v - c100 * 10000 - c50 * 5000 - c20 * 2000) / 1000;
    c5 = (v - c100 * 10000 - c50 * 5000 - c20 * 2000 - c10 * 1000) / 500;
    c2 = (v - c100 * 10000 - c50 * 5000 - c20 * 2000 - c10 * 1000 - c5 * 500) / 200;

    m1 = (v - c100 * 10000 - c50 * 5000 - c20 * 2000 - c10 * 1000 - c5 * 500 - c2 * 200) / 100;
    m050 = (v - c100 * 10000 - c50 * 5000 - c20 * 2000 - c10 * 1000 - c5 * 500 - c2 * 200 - m1 * 100) / 50;
    m025 = (v - c100 * 10000 - c50 * 5000 - c20 * 2000 - c10 * 1000 - c5 * 500 - c2 * 200 - m1 * 100 - m050 * 50) / 25;
    m010 = (v - c100 * 10000 - c50 * 5000 - c20 * 2000 - c10 * 1000 - c5 * 500 - c2 * 200 - m1 * 100 - m050 * 50 - m025 * 25) / 10;
    m005 = (v - c100 * 10000 - c50 * 5000 - c20 * 2000 - c10 * 1000 - c5 * 500 - c2 * 200 - m1 * 100 - m050 * 50 - m025 * 25 - m010 * 10) / 5;
    m001 = (v - c100 * 10000 - c50 * 5000 - c20 * 2000 - c10 * 1000 - c5 * 500 - c2 * 200 - m1 * 100 - m050 * 50 - m025 * 25 - m010 * 10 - m005 * 5);

    printf("NOTAS:\n");
    printf("%d nota(s) de R$ 100.00\n", c100);
    printf("%d nota(s) de R$ 50.00\n", c50);
    printf("%d nota(s) de R$ 20.00\n", c20);
    printf("%d nota(s) de R$ 10.00\n", c10);
    printf("%d nota(s) de R$ 5.00\n", c5);
    printf("%d nota(s) de R$ 2.00\n", c2);

    printf("MOEDAS:\n");
    printf("%d moeda(s) de R$ 1.00\n", m1);
    printf("%d moeda(s) de R$ 0.50\n", m050);
    printf("%d moeda(s) de R$ 0.25\n", m025);
    printf("%d moeda(s) de R$ 0.10\n", m010);
    printf("%d moeda(s) de R$ 0.05\n", m005);
    printf("%d moeda(s) de R$ 0.01\n", m001);

    return 0;
}//Henrique Baylo Cordeiro 22510423