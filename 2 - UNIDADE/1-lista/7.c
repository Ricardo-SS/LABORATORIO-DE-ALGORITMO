#include <stdio.h>

/*
Escreva um programa que solicita e lê um número, calcula e exibe o seu cubo.
ex: 2x2x2 = 8
*/

int main(){
    float n=0;
    printf("Digite um numero para calcular o  cubo: ");
    scanf("%f", &n);
    n=pow(n,3);
    printf("O tripulo eh = %.2f\n", n);

    system("pause"); //evita do terminal fechar ao executar o exe gerado.

    return 0;
}