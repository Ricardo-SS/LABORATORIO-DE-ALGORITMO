Algoritmo "QUESTAO06L4"
// Disciplina   : LABORAT�RIO DE ALGORITMO
// Professor   : LAYSA MABEL 
// Descri��o   : Aqui voc� descreve o que o programa faz! (fun��o)
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 18/03/2022
Var
// Se��o de Declara��es das vari�veis 
   item, quant: inteiro
   total: real

Inicio
// Se��o de Comandos, procedimento, fun��es, operadores, etc... 
   escreval("----------------- MENU ----------------------|")
   escreval("| CODIGO |   especifica��es | PRE�O UNITARIO |")
   escreval("---------------------------------------------|")
   escreval("| 100    |  Cachorro quente |   r$  7.00     |")
   escreval("| 101    |  Bauru           |   r$  8.00     |")
   escreval("| 102    |  X-Salada        |   r$  9.00     |")
   escreval("| 103    |  Hamb�rguer      |   r$ 10.00     |")
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