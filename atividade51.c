#include <stdio.h>

int main() {
    int h1, m1, h2, m2;
    int inicio, fim, duracao, horas, minutos;
    scanf("%d %d %d %d", &h1, &m1, &h2, &m2);
    
    inicio = h1 * 60 + m1;
    fim = h2 * 60 + m2;
    
    if (fim <= inicio) {
        fim += 24 * 60;
    }

    duracao = fim - inicio;

    horas = duracao / 60;
    minutos = duracao % 60;

    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", horas, minutos);

    return 0;
}//Henrique Baylo Cordeiro 22510423