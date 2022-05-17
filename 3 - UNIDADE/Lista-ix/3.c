#include <stdio.h>
#include <stdlib.h>

/*
Nome: FRANCISCO RICARDO DOS SANTOS SILVA
Matrícula:

3.  Escreva uma função, com retorno, que recebe dois números inteiros por parâmetro, 
    verifica e retorna o maior valor. 
    Obs.: a função main deve receber e exibir o resultado.
*/

//função que vai receber o valor por parametro e verificar qual deles é maior.
//aqui usamos uma função int pois funções void nao retornam valores.
int verifica (int a, int b){
    if (a > b){
        return a;
    }
    else if (a < b) {
        return b;
    }
    else {
        return a;   //se os numeros forem iguais não importa qual vai ser retornado, arbitariamente escolhemos o A.
    }
}

//programa principal que recebe o valor digitado pelo usuários.
int main(){
    int num1, num2, result;
    printf("Digite um numero inteiro: ");
    scanf("%d", &num1);

    printf("Digite um numero inteiro: ");
    scanf("%d", &num2);

    //A variavel result vai receber o valor retornado pela função.
    result = verifica(num1, num2);

    printf("O maior eh: %d\n", result);

    return 0;   //finaliza o programa
}