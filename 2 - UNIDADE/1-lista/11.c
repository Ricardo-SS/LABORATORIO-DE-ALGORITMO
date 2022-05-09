#include <stdio.h>

/*
Elabore um programa que calcula a área de uma circunferência. Para isto, utilize a
seguinte fórmula: A = πr^2
*/

int main (){
    float a=0, r=0, pi=3.1416;
    printf("Digite o raio da circunferencia: ");
    scanf("%f", &r);
    a=(pi*(r*r));
    printf("A area da circunferencia eh = %.2f\n", a);

    system("pause"); //evita do terminal fechar ao executar o exe gerado.

    return 0;
}