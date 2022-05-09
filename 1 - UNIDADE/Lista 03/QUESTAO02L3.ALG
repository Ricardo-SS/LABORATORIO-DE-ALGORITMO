Algoritmo "Questao02L3"
// Disciplina  : Lboratório de Algoritmos 
// Professor   : Laysa Mabel de Oliveira Fontes 
// Descrição   : Aqui você descreve o que o programa faz! (função)
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 11/03/2022
Var
// Seção de Declarações das variáveis 
   quant: inteiro

Inicio
// Seção de Comandos, procedimento, funções, operadores, etc... 
   escreva ("Digite a quantidade de maçãs: ")
   leia (quant)
   se (quant >= 12) entao
      escreval ("O valor total a pagar é de R$", quant * 1.10)
   senao
        escreva ("O valor total a pagar é de R$", quant * 1.30)
   fimse

Fimalgoritmo