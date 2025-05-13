#include <stdio.h>
int main(){
    float valor;
    scanf("%f", &valor);
    if (valor >= 0 && valor<= 25)
        printf("intervalo [0,25]\n");
    else if(valor >= 25 && valor <= 50)
        printf("intervalo [25,50]\n");
    else if (valor >= 50 && valor <= 75)
        printf("intervalo [50,75]\n");
    else if (valor >=75 && valor <= 100)
        printf("intervalo [75,100]\n");

    return 0;
}