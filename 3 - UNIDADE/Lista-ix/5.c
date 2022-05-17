#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*
Nome: FRANCISCO RICARDO DOS SANTOS SILVA
Matrícula:

5.  Elabore  uma  função,  com  retorno,  que  calcula  a  área  de  uma  circunferência.  Para 
    isto, utilize a seguinte fórmula: 
                                    𝐴=𝜋𝑟2 
Obs.:  o  valor  do  raio  deve  ser  fornecido  pelo  usuário  e  deve  ser  passado  como 
argumento  para  a  função.  A  função  main  deve  receber  e  exibir  o  resultado  do 
cálculo
*/

//função que vai receber o valor por parametro e verificar qual deles é maior.
//aqui usamos uma função float pois funções void nao retornam valores e int nao será suficiente.
float verifica (float a){
    return (a * pow(3.1416, 2));
}

//programa principal que recebe o valor digitado pelo usuários.
int main(){
    float raio, area;
    printf("Digite o raio da circunferencia em cm: ");
    scanf("%f", &raio);

    //A variavel area vai receber o valor retornado pela função.
    area = verifica(raio);

    printf("Area: %.2f cm^2", area);

    return 0;   //finaliza o programa
}