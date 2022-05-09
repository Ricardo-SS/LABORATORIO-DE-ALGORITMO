Algoritmo "QUESTAO07L5"
// Disciplina   : LABORATÓRIO DE ALGORITMO
// Professor   : LAYSA MABEL 
// Descrição   : Aqui você descreve o que o programa faz! (função)
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 18/03/2022
Var
// Seção de Declarações das variáveis 
   ano, ingresso, idade, serv: inteiro

Inicio
// Seção de Comandos, procedimento, funções, operadores, etc... 
   escreva("Digite adata de nacimento: ")
   leia(ano)
   escreva("Digite a data de admição: ")
   leia(ingresso)
   idade := 2022 - ano
   serv := 2022 - ingresso
   se (idade >= 65) entao
      escreva("Qualificado à aposentadoria")
   senao
        se(serv >= 30) entao
           escreva("Qualificado à aposentadoria")
        senao
           se (idade >= 60) e (serv >= 25) entao
              escreva("Qualificado à aposentadoria")
           senao
              escreva("Não qualificado à aposentadoria")
           fimse
        fimse
   fimse

Fimalgoritmo