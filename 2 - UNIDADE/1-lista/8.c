#include <stdio.h>

/*
Implemente um programa que solicita ao usuário a sua idade e calcula quantos dias
de vida, aproximadamente, ele já viveu. Para simplificar o seu trabalho, ignore os
anos bissextos e use somente a idade, mas deixe o usuário ciente de que o resultado
apresentado é um valor aproximado.
*/

int main (){
    int idade=0;
    printf("Digite quantos anos voce tem: ");
    scanf("%d", &idade);
    printf("Voce ja viveu aproximadamente %d dias!\n", idade*365);

    system("pause"); //evita do terminal fechar ao executar o exe gerado.

    return 0;
}