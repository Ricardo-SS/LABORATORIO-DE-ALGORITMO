Algoritmo "QUESTAO07L5"
// Disciplina   : LABORAT�RIO DE ALGORITMO
// Professor   : LAYSA MABEL 
// Descri��o   : Aqui voc� descreve o que o programa faz! (fun��o)
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 18/03/2022
Var
// Se��o de Declara��es das vari�veis 
   ano, ingresso, idade, serv: inteiro

Inicio
// Se��o de Comandos, procedimento, fun��es, operadores, etc... 
   escreva("Digite adata de nacimento: ")
   leia(ano)
   escreva("Digite a data de admi��o: ")
   leia(ingresso)
   idade := 2022 - ano
   serv := 2022 - ingresso
   se (idade >= 65) entao
      escreva("Qualificado � aposentadoria")
   senao
        se(serv >= 30) entao
           escreva("Qualificado � aposentadoria")
        senao
           se (idade >= 60) e (serv >= 25) entao
              escreva("Qualificado � aposentadoria")
           senao
              escreva("N�o qualificado � aposentadoria")
           fimse
        fimse
   fimse

Fimalgoritmo