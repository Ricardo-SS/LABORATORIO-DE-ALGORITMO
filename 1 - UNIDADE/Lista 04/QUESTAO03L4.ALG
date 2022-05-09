Algoritmo "Questao03L4"
// Disciplina   : LABORATÓRIO DE ALGORITMO
// Professor   : LAYSA MABEL 
// Descrição   : Aqui você descreve o que o programa faz! (função)
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 18/03/2022
Var
// Seção de Declarações das variáveis 
   n: inteiro

Inicio
// Seção de Comandos, procedimento, funções, operadores, etc... 
   escreva("Digite um valor inteiro: ")
   leia(n)
   se (n > 0) entao
      escreva(n, " é positivo")
   senao
        se (n<0) entao
           escreva(n, " é negativo")
        senao
           escreva(n, " é nulo")
        fimse
   fimse

Fimalgoritmo