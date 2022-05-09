#include <stdio.h>

/*
Você foi procurado por uma nutricionista para automatizar o cálculo do Índice de
Massa Corpórea (IMC) de seus pacientes. Para isto, crie um programa que solicita e
lê o peso e a altura de uma pessoa e apresenta seu IMC com duas casas decimais
após a vírgula. O IMC é calculado por meio da seguinte fórmula:

IMC = (peso/altura²)
*/

int main (){
    float peso=0.0, altura=0.0, imc=0.0;
    printf("Digite seu peso: ");
    scanf("%f", &peso);

    printf("Digite sua altura: ex 1.75 \n");
    printf("Nao esqueca o ponto que separa os metros dos centimetros, Ex 1.75\n ");
    scanf("%f", &altura);

    imc = (peso/(altura*altura));

    printf("Seu IMC = %.2f\n", imc);
    printf("\nPrograma finalizado!\n");

    system("pause"); //evita do terminal fechar ao executar o exe gerado.

    return 0;
}