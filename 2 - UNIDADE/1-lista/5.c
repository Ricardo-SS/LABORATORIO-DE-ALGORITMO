#include <stdio.h>

/*
Faça um programa que solicita e lê dois números, calcula e exibe o dobro do
primeiro e o triplo do segundo.
*/

int main (){
    int n=0;
    printf("Digite um numero: ");
    scanf("%d", &n);
    printf("Numero digitado %d\n Dobro = %d\n Tripulo = %d", n, (n*2), (n*3));

    printf("\nFim do programa!\n");

    system("pause"); //evita do terminal fechar ao executar o exe gerado.

    return 0;
}