Algoritmo "QUESTAO02L4.ALG"
// Disciplina   : LABORAT�RIO DE ALGORITMO
// Professor   : LAYSA MABEL 
// Descri��o   : Aqui voc� descreve o que o programa faz! (fun��o)
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 18/03/2022
Var
// Se��o de Declara��es das vari�veis 
   quant: inteiro

Inicio
// Se��o de Comandos, procedimento, fun��es, operadores, etc... 
   escreva("Qunatas mas��s? ")
   leia(quant)
   se (quant >= 12) entao
      escreva("O tatal a pagar = R$ ", quant * 1.10)
      senao
           escreva("O total a pagar = R$ ", quant * 1.30)
   fimse

Fimalgoritmo