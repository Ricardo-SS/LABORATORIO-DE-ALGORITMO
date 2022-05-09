#include <stdio.h>
#include <stdlib.h>

/*
1. Escreva um programa que exibe os 100 primeiros números inteiros, iniciando com o valor 0.
*/

int main (){

    int n = 0;

    while (n <= 100)
    {
        printf("Numero %d\n", n++);
    }
    
    // system("pause"); comano para ser usando no windows para o exe nao fechar depois da execução
    return 0;
}