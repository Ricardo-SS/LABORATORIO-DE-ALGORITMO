Algoritmo "QUESTAO02L4.ALG"
// Disciplina   : LABORATÓRIO DE ALGORITMO
// Professor   : LAYSA MABEL 
// Descrição   : Aqui você descreve o que o programa faz! (função)
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 18/03/2022
Var
// Seção de Declarações das variáveis 
   quant: inteiro

Inicio
// Seção de Comandos, procedimento, funções, operadores, etc... 
   escreva("Qunatas masçãs? ")
   leia(quant)
   se (quant >= 12) entao
      escreva("O tatal a pagar = R$ ", quant * 1.10)
      senao
           escreva("O total a pagar = R$ ", quant * 1.30)
   fimse

Fimalgoritmo