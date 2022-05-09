#include <stdio.h>

/*
A cotação do dólar influencia na economia brasileira e muitos economistas se
encarregam de calcular, muitas vezes de forma manual, o valor do real em dólar.
Você foi contratado por um economista para automatizar a conversão de reais em
dólares. Crie um programa que solicita e lê a cotação do dólar atual e o valor em real
a ser convertido e, em seguida, calcula e exibe o resultado da conversão.
*/

int main (){
    float dolar=0, real=0, conv=0;
    
    printf("Digite a cotação atual do dolar $: ");
    scanf("%f", &dolar);

    printf("Digite o valor em reais a ser convertido R$: ");
    scanf("%f", &real);

    conv=(real/dolar);

    printf("O valore em dolares eh = USS %.2f\n", conv);

    system("pause"); //evita do terminal fechar ao executar o exe gerado.

    return 0;
}