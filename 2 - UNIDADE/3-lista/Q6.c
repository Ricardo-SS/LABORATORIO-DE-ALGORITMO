#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

/*
6. Crie um programa para calcular a sequência de Fibonacci, onde o valor da posição 
da sequência de Fibonacci, representado por n, deve ser fornecido pelo usuário. O 
programa deve exibir uma mensagem seguindo o padrão ilustrado nas condições a 
seguir:

• Se o usuário digitar um valor menor que zero (n < 0), como, por exemplo, 
n = −3, o programa deve exibir na tela a seguinte mensagem: Não é possível 
calcular a sequência de Fibonacci com número negativo.
• Se o usuário digitar um valor igual a zero (n = 0), o programa deve exibir na tela 
a seguinte mensagem: Sequência de Fibonacci: 0.
• Se o usuário digitar um valor igual a um (n = 1), o programa deve exibir na tela 
a seguinte mensagem: Sequência de Fibonacci: 1.
• Se o usuário digitar um valor maior que um (n > 1), como, por exemplo, n = 7, o 
programa deve exibir na tela a seguinte mensagem: Sequência de Fibonacci: 
0 1 1 2 3 5 8 13
*/

int main(){

    setlocale(LC_ALL, "Portuguese");

    int i, a, b, aux, n;
    aux=0;
    a=0;
    b=1;
    
    printf("Digite um numero inteiro: ");
    scanf("%d", &n);
    //se numero < 0 exibir mensagem que nao é possvel calcular
    if (n < 0){
        printf("Nao eh possivel calcular a sequencia de Fibonacci com numero negativo\n");
    }
    //se digitar numero 0, exibir mensagem de fibonaci = 0
    else if(n == 0){
        printf("Sequencia de Fibonacci: 0.\n");
    }
    //se digitar = 1, exibir mesagem de fibonaci = 1
    else if(n == 1){
        printf("Sequencia de Fibonacci: 1.\n");
    }
    //se > 1, exemplo, n = 7, exibir fibonaci = 0 1 1 2 3 5 8 13
    else if(n > 1){
        for(i=0; i<=n; i++){
            a=b;
            b=aux;
            printf("%d", aux);
            aux = a+b;
        }
    }
    return 0;
}