#include <stdio.h>
#include <stdlib.h>

/*
Nome: FRANCISCO RICARDO DOS SANTOS SILVA
Matrícula: 2018010559

1. (2,0 pt) Construa um programa em C que solicita e lê um valor inteiro e informa se ele é, ou não, múltiplo de 3.
*/

int main() {

    int num;
    printf("Digite um valor inteiro: ");
    scanf("%d", &num);

    //verificação se o numero é múltiplo de 3, se o resto da divisão por 3 = 0 entra na condição if
    if (num % 3 == 0){
        printf("\n|===================================|");
        printf("\n|\t %d Eh Multiplo de 3. ", num);
        printf("\n|===================================|");
    }
    // se o resto da divisão for diferente de zero entra na condição else
    else {
        printf("\n|===================================|");
        printf("\n|\t %d NAO eh Multiplo de 3.", num);
        printf("\n|===================================|");
    }
    return 0;
}