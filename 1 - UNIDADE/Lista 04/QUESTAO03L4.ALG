Algoritmo "Questao03L4"
// Disciplina   : LABORAT�RIO DE ALGORITMO
// Professor   : LAYSA MABEL 
// Descri��o   : Aqui voc� descreve o que o programa faz! (fun��o)
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 18/03/2022
Var
// Se��o de Declara��es das vari�veis 
   n: inteiro

Inicio
// Se��o de Comandos, procedimento, fun��es, operadores, etc... 
   escreva("Digite um valor inteiro: ")
   leia(n)
   se (n > 0) entao
      escreva(n, " � positivo")
   senao
        se (n<0) entao
           escreva(n, " � negativo")
        senao
           escreva(n, " � nulo")
        fimse
   fimse

Fimalgoritmo