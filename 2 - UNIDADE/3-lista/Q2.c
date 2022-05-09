#include <stdio.h>
#include <stdlib.h>

/*
Faça um programa que exibe, em ordem decrescente, os 500 primeiros números inteiros positivos.
*/

int main (){

    int n = 500;

    while (n >= 0)
    {
        printf("Nº - %d\n", n--);
    }
    
    // system("pause"); comano para ser usando no windows para o exe nao fechar depois da execução
    return 0;
}