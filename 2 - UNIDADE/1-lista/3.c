#include <stdio.h>

/*
Todos os números naturais possuem antecessor, que é o número que antecede
(anterior) um valor específico, e sucessor, que é o número que sucede (posterior) um
valor específico. Sabendo disso, implemente um programa que solicita ao usuário a
entrada de um número inteiro e apresenta seu antecessor e sucessor.
*/

int main(){
    int n=0;
    printf("Digit eum numero: ");
    scanf("%d", &n);
    printf("O atecessor de %d eh %d e o sucessor eh %d", n, (n-1), (n+1));
    return 0;

    system("pause"); //evita do terminal fechar ao executar o exe gerado.

    return 0;
}