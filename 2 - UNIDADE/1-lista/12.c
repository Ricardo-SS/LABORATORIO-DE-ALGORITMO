#include <stdio.h>

/*
Faça um programa para calcular o volume de uma caixa retangular. Para isto, utilize
a seguinte fórmula:

volume = comprimento × largura × altura

Os valores do comprimento, da largura e da altura devem ser fornecidos pelo
usuário.
*/

int main () {
    float v=0, c=0, l=0, a=0;
    printf("Digite o comprimento da caixa: ");
    scanf("%f", &c);

    printf("Digite a largura da caixa: ");
    scanf("%f", &l);

    printf("Digite a altura da caixa: ");
    scanf("%f", &a);

    v=(c*l*a);
    printf("O volume da caixa eh = %.2f\n", v);

    system("pause"); //evita do terminal fechar ao executar o exe gerado.

    return 0;
}