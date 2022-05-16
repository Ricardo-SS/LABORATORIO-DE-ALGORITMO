#include <stdio.h>
#include <stdlib.h>

/*
Nome: FRANCISCO RICARDO DOS SANTOS SILVA
Matrícula: 2018010559

4.  (2,0 pt) Faça um programa em C que exibe os números ímpares existentes no intervalo de x (inclusive) 
            a y (inclusive), onde os valores de x e de y devem ser fornecidos pelo usuário.
            Nota: não esqueça de verificar se o intervalo fornecido pelo usuário é válido, isto é, o valor
            de x deve ser menor ou igual ao valor de y. Caso contrário, exiba uma mensagem informando que o intervalo é inválido.
*/

int main (){

    //definindo variaveis que irá armazenar os dados de entrada do usuário
    int x, y, i, cont;
    cont = 0;
    printf("\n|==================================================================|\n");
    printf("|   Digite os valores de x e y do intervalo que deseja verificar: ");
    printf("\n|==================================================================|\n");
    
    do{
        printf("\n\tDigite o valor de X: ");    //Recebe o valor de x.
        scanf("%d", &x);
        printf("\n\tDigite o valor de Y: ");    //Recebe o valor de Y.
        scanf("%d", &y);

        //Fazendo as verificações.
        if (x <= y) {
            printf("\n|===================================|");
            for (i = x; i <= y; i++){
                if(i % 2 != 0){
                    cont++;     //essa variavel foi colocada aqui para fornecer uma informação a mais, contar o total de impares no intervalo
                                //porem essa informação não é pedida na questão. coloquei mesmo so porque gosto de programar :)  
                    printf("\n|\tNumeros impares...: %d", i);
                }
            }
            printf("\n|===================================|\n");
            printf("Total de numeros impares no intervalo: %d", cont);  //essa é a mesagem ue informa o total de números impares.
        }
        //mensagem para condição invalida
        else {
            printf("\n|===================================|");
            printf("\n|\tIntervalo invalido :(");
            printf("\n|-----------------------------------|");
            //achei interessante colocar uma dica para direcionar o usuário a fazer de forma correta.
            printf("\n| Dica: Coloque Y maior que X ;) ");          
            printf("\n|===================================|\n");
        }
    } while (x > y);
    return 0;
}