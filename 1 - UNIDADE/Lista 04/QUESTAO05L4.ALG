Algoritmo "QUESTAO05L4"
// Disciplina   : LABORAT�RIO DE ALGORITMO
// Professor   : LAYSA MABEL 
// Descri��o   : Aqui voc� descreve o que o programa faz! (fun��o)
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 18/03/2022
Var
// Se��o de Declara��es das vari�veis 
   diarias: inteiro

Inicio

// Se��o de Comandos, procedimento, fun��es, operadores, etc... 
   escreva("Digite a quantidade de diarias: ")
   leia(diarias)
   se (diarias < 7) entao
      escreva("Total a pagar = ", 154 * diarias)
      senao
           se(diarias = 7) entao
                      escreva("Total a pagar = ", 153.6  * diarias)
           senao
                escreva("O valor total a pagar = ", 153 * diarias)
           fimse
   fimse

Fimalgoritmo