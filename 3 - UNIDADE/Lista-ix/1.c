#include <stdio.h>
#include <stdlib.h>

/*
Nome: FRANCISCO RICARDO DOS SANTOS SILVA
Matrícula:

1. Implemente uma função, sem retorno, que recebe um valor inteiro por parâmetro e 
    informa se é, ou não, igual a zero. 
*/

//função que vai receber o valor por parametro e verificar se ele é ou nao igual a zero.
void verifica (int a){
    if (a == 0){
        printf("O numero digitado eh Zero!");
    }
    else {
        printf("O numero digitado NAO eh Zero!");
    }
}
//programa principal que recebe o valor digitado pelo usuários.
int main(){
    int num;
    printf("Digite um numero inteiro: ");
    scanf("%d", &num);
    verifica(num);

    return 0;   //finaliza o programa
}