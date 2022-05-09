Algoritmo "QUESTAO05L4"
// Disciplina   : LABORATÓRIO DE ALGORITMO
// Professor   : LAYSA MABEL 
// Descrição   : Aqui você descreve o que o programa faz! (função)
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 18/03/2022
Var
// Seção de Declarações das variáveis 
   diarias: inteiro

Inicio

// Seção de Comandos, procedimento, funções, operadores, etc... 
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