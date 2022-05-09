#include <stdio.h>
#include <stdlib.h>
/*
2. A determinação da divisibilidade de um número por outro é importante na 
programação. Sabendo disso, crie um programa que solicita e lê dois números 
inteiros (numerador e denominador) e verifica se a divisão é exata. Se for, exiba a 
mensagem: “É divisível!”. Caso contrário, exiba a mensagem: “Não é divisível!”.
Obs.: não esqueça que a divisão só deve ser realizada, caso o denominador seja 
diferente de zero. Caso contrário, o programa deve exibir uma mensagem 
informando que a divisão é indefinida.
*/

int main(){
    int num, div;
    printf("Digite o numerador: ");
    scanf("%d", &num);
    printf("Digite o denominador: ");
    scanf("%d", &div);
    if (div == 0){
        printf("A divisao eh indeferida!\n");
    }else if(num % div == 0){
        printf("Eh divisivel!\n");
    }else {
        printf("Nao eh divisivel!\n");
    }

    return 0;
}