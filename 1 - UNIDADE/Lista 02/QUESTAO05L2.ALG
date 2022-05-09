Algoritmo "Questao05L2"
// Disciplina  : Lboratório de Algoritmos 
// Professor   : Laysa Mabel de Oliveira Fontes 
// Descrição   : Aqui você descreve o que o programa faz! (função)
// Autor(a)    : Fancisco ricardo dos santos silva
// Data atual  : 11/03/2022
Var
// Seção de Declarações das variáveis 
   peso, altura, imc: real

Inicio
// Seção de Comandos, procedimento, funções, operadores, etc... 
   escreva("Digite o peso, ex 70: ")
   leia (peso)
   escreva("Digite a altura, ex 1.70: ")
   leia (altura)
   imc := peso / (altura ^2)
   escreva ("O IMC é de ", imc)

Fimalgoritmo