#include <stdio.h>
#include <stdlib.h>

/*
Nome: FRANCISCO RICARDO DOS SANTOS SILVA
Matrícula: 2018010559

5.  (2,0 pt) Faça um programa em C que solicita e lê a idade de n pessoas, onde o valor de n 
            deve ser informado pelo usuário. Ao final, o programa deve informar o total de 
            pessoas maiores e menores de idade, e a idade da pessoa mais nova e da pessoa mais velha.
*/

int main(){
    int nova, velha, n, aux1, aux2, i, idade;
    aux1 = 0;
    aux2 = 0;

    //mensagem inicial e solicitação da quantidade de pessoas a serem verificadas
    do {   
        printf("\n|=========================================|\n");
        printf("|\tVerificador de idade ");
        printf("\n|=========================================|");
        printf("\n| Quantidade de pessoas para verificar: ");
        scanf("%d", &n);
        if(n <=0){
            printf("\n\t|==================================================|");
            printf("\n\t| Valor ivalido - Dica, Use um numero positivo  ;)");   //coloquei uma dica caso o usuário erre.
            printf("\n\t|==================================================|\n");
        }
    } while (n <= 0);
    
    
    //condição de repetição até atingir a quantidade informada pelo o usuário 
    for (i = 1; i <= n; i++) {
        do{
            printf("| Digite a idade da pessoa: N %d:", i);
            scanf("%d", &idade);
            if(idade <= 0){
                printf("\n\t|==================================================|");
                printf("\n\t| Valor ivalido - Dica, Use um numero positivo  ;)");
                printf("\n\t|==================================================|\n");
            }
        } while (idade <= 0);
        
        if(i == 1){
            nova = idade;
            velha = idade;
        }
        //verificação de idade
        //contagem de pessoas maiores de idade
        if(idade >= 18){
            aux1++;
            if (velha < idade){
                velha = idade; 
            }
        }
        //contagem de pessoas menores de idade
        else {
            aux2++;
            if (nova > idade){
                nova = idade;
            }
        }
    }
    //mensagens finais a serem exibidas para o usuário
    printf("\n|============== RESULTADOS ===============|");
    printf("\n|-----------------------------------------|");
    printf("\n|\tMaiores de idade: %d Pessoas", aux1);
    printf("\n|\tMenores de idade: %d Pessoas", aux2);
    printf("\n|-----------------------------------------|");
    printf("\n|\tIdade da pessoa mais jovem: %d", nova);
    printf("\n|\tIdade da pessoa mais velha: %d", velha);
    printf("\n|=========================================|\n");

    //mensagem final do programa. tipo aquelas de volte sempre.
    printf("\n Obrigado por usar nosso programa :)\n\tby Ricardo Santos\n\n");
    
    return 0;
}