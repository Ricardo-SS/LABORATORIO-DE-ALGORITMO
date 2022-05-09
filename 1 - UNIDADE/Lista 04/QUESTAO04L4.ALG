Algoritmo "QUESTAO04L4"
// Disciplina   : LABORATÓRIO DE ALGORITMO
// Professor   : LAYSA MABEL 
// Descrição   : Aqui você descreve o que o programa faz! (função)
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 18/03/2022
Var
// Seção de Declarações das variáveis 
   numerador: inteiro
   denominador: inteiro

Inicio
// Seção de Comandos, procedimento, funções, operadores, etc... 
   escreva("Digite o numerador: ")
   leia(numerador)
   escreva("Digite o denominador: ")
   leia(denominador)

   se (denominador <> 0) entao
       se (numerador % denominador = 0) entao
          escreva("É divisivel")
       senao
            escreva("Não é divisivel")
       fimse
       
   senao
        escreva("Nao é possivel dividir por Zero")
   fimse

Fimalgoritmo