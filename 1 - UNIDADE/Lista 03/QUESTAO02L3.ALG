Algoritmo "Questao02L3"
// Disciplina  : Lborat�rio de Algoritmos 
// Professor   : Laysa Mabel de Oliveira Fontes 
// Descri��o   : Aqui voc� descreve o que o programa faz! (fun��o)
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 11/03/2022
Var
// Se��o de Declara��es das vari�veis 
   quant: inteiro

Inicio
// Se��o de Comandos, procedimento, fun��es, operadores, etc... 
   escreva ("Digite a quantidade de ma��s: ")
   leia (quant)
   se (quant >= 12) entao
      escreval ("O valor total a pagar � de R$", quant * 1.10)
   senao
        escreva ("O valor total a pagar � de R$", quant * 1.30)
   fimse

Fimalgoritmo