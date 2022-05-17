#include <stdio.h>
#include <stdlib.h>
/*
Nome: FRANCISCO RICARDO DOS SANTOS SILVA
Matrícula:

6.  Faça  uma  função,  com  retorno,  para  calcular  o  valor  do  volume  de  uma  caixa 
    retangular, utilizando a seguinte fórmula: 
                    𝑣𝑜𝑙𝑢𝑚𝑒 = 𝑐𝑜𝑚𝑝𝑟𝑖𝑚𝑒𝑛𝑡𝑜 × 𝑙𝑎𝑟𝑔𝑢𝑟𝑎 × 𝑎𝑙𝑡𝑢𝑟𝑎 
Obs.: os valores do comprimento, da largura e da altura devem ser fornecidos pelo 
usuário e devem ser passados como argumento para  a função.  A função  main deve 
receber e exibir o resultado do cálculo
*/

//função que vai receber o valor por parâmetro calcular o volume.
//aqui usamos uma função float pois funções void nao retornam valores e float nao seria adequando.
float verifica (float a, float b, float c){
    return (a*b*c);
}

//programa principal que recebe o valor digitado pelo usuários.
float main(){
    float comp, larg, alt, volume;

    printf("Digite o comprimento: ");
    scanf("%f", &comp);

    printf("Digite a largura: ");
    scanf("%f", &larg);

    printf("Digite a altura: ");
    scanf("%f", &alt);

    //A variável volume vai receber o valor retornado pela função.
    volume = verifica(comp, larg, alt);

    printf("Volume: %.2f", volume);

    return 0;   //finaliza o programa
}