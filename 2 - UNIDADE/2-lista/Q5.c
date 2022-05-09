/*
A Lanchonete Coma Bem deseja informatizar o seu estabelecimento visando melhor 
atender  seus  clientes.  Para  isso,  decidiu  trabalhar  com  pedidos  realizados  em  seu 
aplicativo,  disponível  em  dispositivos  eletrônicos  dispostos  no  local.  Você  foi 
contratado para criar um sistema para tal lanchonete. O cardápio da lanchonete está 
ilustrado na tabela a seguir.

CÓDIGO DO ITEM ESPECIFICAÇÃO PREÇO UNITÁRIO 
100 Cachorro quente 8,00 
101 Bauru  9,00 
102 X-Salada  10,00 
103 Hambúrguer 12,00 
104 Refrigerante (lata) 3,00 
 
 Inicialmente, o programa deve exibir as informações da tabela anterior. Em seguida, 
o programa deve solicitar e ler o código do item desejado e a quantidade de tal item. 
Por fim, o programa deve calcular e exibir o valor a ser pago. Considere que, a cada 
execução  do  programa,  o  cliente  só  pode  escolher  um  item,  variando  apenas  sua 
quantidade. 
*/

#include <stdio.h>

int main (){
    
    printf("-----------------------------------------------\n");
    printf("|CÓD. ITEM | ESPECIFICAÇÃO        |PREÇO UNIT.|\n");
    printf("-----------------------------------------------\n");
    printf("|   100    | Cachorro quente      |   8,00    |\n");
    printf("|   101    | Bauru                |   9,00    |\n");
    printf("|   102    | X-Salada             |  10,00    |\n");
    printf("|   103    | Hambúrguer           |  12,00    |\n");
    printf("|   104    | Refrigerante (lata)  |   3,00    |\n");
    printf("-----------------------------------------------\n");

    int item, quant;
    printf("Digite o codigo do item que deseja: \n");
    printf("-----------------------------------------------\n");
    scanf("%d", &item);
    printf("Digite a quantidade: \n");
    printf("-----------------------------------------------\n");
    scanf("%d", &quant);

    switch(item){
        case (100):
        printf("----------------------------------------------\n");
        printf("\tTotal a pagar R$ %d\n", quant * 8);
        printf("----------------------------------------------\n");
        break;
        case (101):
        printf("----------------------------------------------\n");
        printf("\tTotal a pagar R$ %d\n", quant * 9);
        printf("----------------------------------------------\n");
        break;
        case (102):
        printf("----------------------------------------------\n");
        printf("\tTotal a pagar R$ %d\n", quant * 10);
        printf("----------------------------------------------\n");
        break;
        case (103):
        printf("----------------------------------------------\n");
        printf("\tTotal a pagar R$ %d\n", quant * 12);
        printf("----------------------------------------------\n");
        break;
        case (104):
        printf("----------------------------------------------\n");
        printf("\tTotal a pagar R$ %d\n", quant * 3);
        printf("----------------------------------------------\n");
        break;
        default :
        printf("----------------------------------------------\n");
        printf("\t\t Item invalido!\n");
        printf("----------------------------------------------\n");
        break;
    }
    return 0;
}