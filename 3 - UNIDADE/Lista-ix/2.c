#include <stdio.h>
#include <stdlib.h>

/*
Nome: FRANCISCO RICARDO DOS SANTOS SILVA
Matrícula:

2. Faça uma função, sem retorno, que recebe um valor inteiro por parâmetro e informa 
    se ele é par ou ímpar.
*/

//função que vai receber o valor por parametro e verificar se ele é par ou impar.
void verifica (int a){
    if (a % 2 == 0){
        printf("O numero digitado eh PAR !");
    }
    else {
        printf("O numero digitado NAO eh IMPAR !");
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