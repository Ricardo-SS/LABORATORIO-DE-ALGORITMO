#include <stdio.h>

/*
Faça um programa que solicita e lê temperatura em Fahrenheit, faz a conversão para
Celsius e exibe tal resultado. Para isto, utilize a seguinte fórmula:
C = (F − 32)/1,8
*/

int main (){
    float c=0, f=0;
    printf("Digite a temperatura em Fahrenheit: ");
    scanf("%f", &f);
    c=(f - 32)/1.8;
    printf("A temperatura em celsius eh = %.2f\n", c);

    system("pause"); //evita do terminal fechar ao executar o exe gerado.

    return 0;
}