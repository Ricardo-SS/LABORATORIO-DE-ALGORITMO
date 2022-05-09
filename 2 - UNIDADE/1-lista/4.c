#include <stdio.h>
/*
Crie um programa que solicita e lê uma temperatura em Celsius, faz a conversão
para Fahrenheit e exibe tal resultado. Para isto, utilize a seguinte fórmula:
F = (C × 1,8) + 32
*/

int main (){
    int f=0, c=0;

    printf("Digite a temperatura em celsius: ");
    scanf("%d", &c);
    f = ((c * 1.8) + 32);
    printf("A temperatura em Fahrenheit eh = %d\n", f);
    
    system("pause"); //evita do terminal fechar ao executar o exe gerado.

    return 0;
}