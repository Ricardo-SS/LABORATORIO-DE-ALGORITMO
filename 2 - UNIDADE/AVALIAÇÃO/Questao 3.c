#include <stdio.h>
#include <stdlib.h>

/*
Nome: FRANCISCO RICARDO DOS SANTOS SILVA
Matrícula: 2018010559

3. (2,0 pt) Faça um programa em C que exibe o somatório dos números pares 
            existentes no intervalo entre 10 (inclusive) e 300 (inclusive).
*/

int main (){

    //definindo variaveis
    int soma, i;
    soma=0;     //atribuindo valor zero a variavel soma para evitar lixo de memória

    //laço de repetição que irá pegar somente os numeros pares (resto zero) e somar na variavel soma
    for (i=9; i<=300; i++){
        if(i % 2 == 0){         //se o numero dividido por 2 tiver resto zero entra no laço, c.c. não entra.
            soma = soma + i;    //a variavel soma recebe o valor dela propria + o valor de i que teve resto zero
            printf("Somando numeros...: %d\n", i);  //Essa linha serve para printar todos os números paraes caso seja preciso verificar,
                                                    //caso queira exibir apenas o resultado final do somatório basta comentar essa linha.
        }
    }
    //Printa o valor total da soma dos numeros pares no intervalo definido, que nesse caso foi de 10 a 300.
    printf("\n|=======================================================|\n");    //só pra deixar bonitinho
    printf("|\tSomatorio total de numeros pares = %d", soma);
    printf("\n|=======================================================|\n");
    //finaliza o programa 
    return 0;
}