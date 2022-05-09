Algoritmo "QUESTAO06L4"
// Disciplina   : LABORATÓRIO DE ALGORITMO
// Professor   : LAYSA MABEL 
// Descrição   : Aqui você descreve o que o programa faz! (função)
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 18/03/2022
Var
// Seção de Declarações das variáveis 
   item, quant: inteiro
   total: real

Inicio
// Seção de Comandos, procedimento, funções, operadores, etc... 
   escreval("----------------- MENU ----------------------|")
   escreval("| CODIGO |   especificações | PREÇO UNITARIO |")
   escreval("---------------------------------------------|")
   escreval("| 100    |  Cachorro quente |   r$  7.00     |")
   escreval("| 101    |  Bauru           |   r$  8.00     |")
   escreval("| 102    |  X-Salada        |   r$  9.00     |")
   escreval("| 103    |  Hambúrguer      |   r$ 10.00     |")
   escreval("| 104    |  Refrigerante    |   r$  3.00     |")
   escreval("---------------------------------------------|")
   escreva("Digite o codigo do item: ")
   leia(item)
   
   escolha (item)
           caso 100
                escreva("Qual a quantidade? ")
                leia(quant)
                total:= quant * 7
                escreva("Total a pagar = R$", total:5:2)
           caso 101
                escreva("Qual a quantidade? ")
                leia(quant)
                total:= quant * 8
                escreva("Total a pagar = R$", total:5:2)
           caso 102
                escreva("Qual a quantidade? ")
                leia(quant)
                total:= quant * 9
                escreva("Total a pagar = R$", total:5:2)
           caso 103
                escreva("Qual a quantidade? ")
                leia(quant)
                total:= quant * 10
                escreva("Total a pagar = R$", total:5:2)
           caso 104
                escreva("Qual a quantidade? ")
                leia(quant)
                total:= quant * 3
                escreva("Total a pagar = R$", total:5:2)
           outrocaso
                escreval("Codigo invalido")
   fimescolha

Fimalgoritmo