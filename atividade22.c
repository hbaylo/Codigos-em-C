#include <stdio.h>

int main() {
    int X; // Distância 
    scanf("%d", &X);
     float Y, consumo;
     scanf("%f", &Y);
    // por um ser inteiro e o outro ser flutuante, sempre use mais de um scanf
    consumo = X / Y;
    
    printf("%.3f km/l\n", consumo);
    
    return 0;
} //Henrique Baylo Cordeiro // 22510423