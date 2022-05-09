#include <stdio.h>
#include <stdlib.h>

/*
3. Escreva um programa que solicita e lê a idade do usuário, e exibe uma mensagem 
informando se ele é maior ou menor de idade. Esses procedimentos devem ser repetidos 10 vezes.
*/

int main (){

    int idade, i;
    for (i=0; i <= 10; i++) {
        printf("Informe sua idade: ");
        scanf("%d", &idade);
        if (idade < 18){
            printf("Menor de Idade!");
        } else {
            printf("Maior de idade!" );
        }
    }

    // system("pause"); comano para ser usando no windows para o exe nao fechar depois da execução
    return 0;
}