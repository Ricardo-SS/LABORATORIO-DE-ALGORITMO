#include <stdio.h>
#include <stdlib.h>

/*
Nome: FRANCISCO RICARDO DOS SANTOS SILVA
Matrícula:

2.  (2,0 pt) Escreva um programa em C que solicita e lê um valor inteiro e informa se ele é positivo, negativo ou neutro.
*/

int main (){
    int num;
    printf("Digite um numero inteiro: ");
    scanf("%d", &num);

    //verifica se o numero é positivou, se sim entra nessa condição.
    if (num > 0){
        printf("\n|===================================|");
        printf("\n|\t O numero %d eh positivo!", num);
        printf("\n|===================================|\n");
    }
    //caso a condição anterior nao seja atendida o programa verifica se o valor é negativo, ou seja < 0.
    else if(num < 0){
        printf("\n|===================================|");
        printf("\n|\t O numero %d eh negativo!", num);
        printf("\n|===================================|\n");
    }
    //se o valor não é > 0 e também não é < 0, logo ele so pode ser 0, poderia ser feita essa verificação pelo programa
    // usando um outro else if com a condição (0==0); porem, isso seria um gasto de processamento desnecessário.
    else {
        printf("\n|===================================|");
        printf("\n|\t O numero %d eh neutro!", num);
        printf("\n|===================================|\n");
    }
    return 0;
}