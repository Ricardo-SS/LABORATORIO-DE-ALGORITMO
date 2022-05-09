#include <stdio.h>

/*
Um feirista vende suas maças a R$ 1,30 por unidade, se forem compradas menos de 
uma  dúzia,  e  a  R$  1,10  por  unidade,  se  forem  compradas  pelo  menos  uma  dúzia. 
Sabendo disso, crie um programa que solicita e lê a quantidade de maças desejadas, 
calcula e informa o preço a ser pago pelo cliente, considerando os preços definidos 
anteriormente. 
Disciplina: Laboratório de Algoritmos        Semestre: 2021.2         Data: 11/04/2022 

*/

int main (){
    int quant;
    printf("Digite a quantidade de macas? ");
    scanf("%d", &quant);
    if (quant < 12){
        printf("O total a ser pago eh = %.2f", quant * 1.30);
    }else {
        printf("O total a ser pago é = %.2f", quant * 1.10);
    }
    return 0;
}