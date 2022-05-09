Algoritmo "questao02L2"
// Disciplina  : Lboratório de Algoritmos 
// Professor   : Laysa Mabel de Oliveira Fontes 
// Descrição   : Aqui você descreve o que o programa faz! (função)
// Autor(a)    : Fancisco ricardo dos santos silva
// Data atual  : 11/03/2022
Var
// Seção de Declarações das variáveis 
   sb, ht, vh, td, pd, sl: real

Inicio
// Seção de Comandos, procedimento, funções, operadores, etc... 
   escreva("Digite o valor da hora aula: ")
   leia (vh)
   escreva("Digite o número de horas trabalhadas no mês: ")
   leia (ht)
   escreva("Digite o percentual de desconto do INSS: ")
   leia (pd)
   sb := ht * vh
   td := (pd /100) * sb
   sl := sb - td
   
   limpatela
   
   escreval("O salario bruto é = ", sb)
   escreval("O valor de desconto foi = ", td)
   escreva("O salario liquido é = ", sl)
   
   

Fimalgoritmo
