#include <stdio.h>
/*
Crie um programa que simule uma calculadora simples, ou seja, que efetua as quatro operações 
básicas da matemática (soma, subtração, multiplicação e divisão) para dois valores reais 
fornecidos pelo usuário. O programa deve exibir as opções ao usuário e efetuar uma delas, 
conforme a opção digitada pelo usuário. Para isso, utilize a estrutura SWITCH
*/

int main(){
    float num1, num2;
    int op;     //variavel que vai receber a opção digitada

    //menu de opções
    printf ("========= Calculador Basica ==========\n");
    printf ("[1] Soma\n");
    printf ("[2] Subtracao\n");
    printf ("[3] Multiplicacao\n");
    printf ("[4] Divisao\n");
    printf ("======================================\n");

    scanf("%d", &op);
    printf("Digite o primeiro numero: ");
    scanf("%f", &num1);
    printf("Digite o segundo numero: ");
    scanf("%f", &num2);

    switch(op){
        case (1):
        printf("A soma eh = %.2f", num1 + num2);
        break;
        case (2):
        printf("A subtracao eh = %.2f", num1 - num2);
        break;
        case (3):
        printf("A multiplicação eh = %.2f", num1 * num2);
        break;
        case (4):
        printf("A divisao eh = %.2f", num1 / num2);
        break;
        default :
        printf ("Valor invalido!\n");
    }

    return 0;
}