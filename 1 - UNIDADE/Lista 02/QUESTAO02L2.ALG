Algoritmo "questao02L2"
// Disciplina  : Lborat�rio de Algoritmos 
// Professor   : Laysa Mabel de Oliveira Fontes 
// Descri��o   : Aqui voc� descreve o que o programa faz! (fun��o)
// Autor(a)    : Fancisco ricardo dos santos silva
// Data atual  : 11/03/2022
Var
// Se��o de Declara��es das vari�veis 
   sb, ht, vh, td, pd, sl: real

Inicio
// Se��o de Comandos, procedimento, fun��es, operadores, etc... 
   escreva("Digite o valor da hora aula: ")
   leia (vh)
   escreva("Digite o n�mero de horas trabalhadas no m�s: ")
   leia (ht)
   escreva("Digite o percentual de desconto do INSS: ")
   leia (pd)
   sb := ht * vh
   td := (pd /100) * sb
   sl := sb - td
   
   limpatela
   
   escreval("O salario bruto � = ", sb)
   escreval("O valor de desconto foi = ", td)
   escreva("O salario liquido � = ", sl)
   
   

Fimalgoritmo
