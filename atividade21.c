#include <stdio.h>
int main() {
    double VOLUME, R, pi;
    pi = 3.14159;
    scanf("%lf",&R);
    VOLUME = ((4.0/3.0) * R * R * R * pi);
    printf("VOLUME = %.3lf\n", VOLUME);
    
    return 0;
}//Henrique Baylo Cordeiro 22510423
// Nao esquecer de usar o ponto para numero quebrado e nao virgula
//o recado de cima e um aviso pra quando eu for usar esse exercicio como base para outros