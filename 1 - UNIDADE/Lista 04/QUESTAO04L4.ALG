Algoritmo "QUESTAO04L4"
// Disciplina   : LABORAT�RIO DE ALGORITMO
// Professor   : LAYSA MABEL 
// Descri��o   : Aqui voc� descreve o que o programa faz! (fun��o)
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 18/03/2022
Var
// Se��o de Declara��es das vari�veis 
   numerador: inteiro
   denominador: inteiro

Inicio
// Se��o de Comandos, procedimento, fun��es, operadores, etc... 
   escreva("Digite o numerador: ")
   leia(numerador)
   escreva("Digite o denominador: ")
   leia(denominador)

   se (denominador <> 0) entao
       se (numerador % denominador = 0) entao
          escreva("� divisivel")
       senao
            escreva("N�o � divisivel")
       fimse
       
   senao
        escreva("Nao � possivel dividir por Zero")
   fimse

Fimalgoritmo