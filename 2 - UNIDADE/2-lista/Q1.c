#include <stdio.h>

// 1. Escreva um programa que solicita e lê um valor inteiro e informa se ele é positivo, 
// negativo ou neutro

int main (){
    int num;
    printf("Digite um numero inteiro: ");
    scanf("%d", &num);
    if (num > 0){
        printf("O numero %d eh positivo!\n", num);
    }
    else if(num < 0){
        printf("O numero %d eh negativo!\n", num);
    }
    else {
        printf("O numero %d eh nulo!\n", num);
    }
    return 0;
}