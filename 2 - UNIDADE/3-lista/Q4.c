#include <stdio.h>
#include <stdlib.h>

/*
4. Escreva um programa que exibe os números divisíveis por 2 existentes no 
intervalo de 10 (inclusive) a 50 (inclusive). Ao final, o programa deve informar o 
total de números que foram exibidos.
*/

int main (){

    int num=0, cont=0, i;

    for (i = 10; i<=50; i++){
        if(i % 2 == 0){
            printf("Nº - %d\n", i);
            cont++;
        }
    }
    printf("O total de numereos divisiveis eh = %d", cont);

    return 0;
}