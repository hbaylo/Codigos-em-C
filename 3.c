#include <stdio.h>
int main() {
    printf("Colocar o valor do raio em metros");
    double area, raio, pi;

    pi = 3.14159;

    scanf("%lf",&raio);
    area = raio*raio*pi;
    printf("A=%.4lf\n", area);
    
    return 0;
}