#include <stdio.h>
#include <stdlib.h>

/*
Nome: FRANCISCO RICARDO DOS SANTOS SILVA
Matrícula:

4.  Construa  uma  função,  sem  retorno,  que  recebe  um  valor  inteiro  por  parâmetro  e 
    informa se ele é, ou não, múltiplo de 5.
*/

//função que vai receber o valor por parametro e verificar se é múltiplo de 5.
void verifica (int a){
    if (a % 5 == 0){
        printf("\tEh Multiplo de 5 !");
    }
    else {
        printf("\tNAO eh Multiplo de 5 !");
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