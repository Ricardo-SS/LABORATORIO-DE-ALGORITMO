#include <stdio.h>
#include <stdlib.h>

/*
5. Faça um programa para calcular e exibir a média aritmética e o conceito de 10 alunos. 
Para cada um dos alunos, o programa deve solicitar e ler as notas das três provas, calcular 
a média aritmética e informar o conceito obtido, de acordo com a tabela a seguir:

|-------------|----------|
|    Média    |conceito  |
|-------------|----------|
| >= 9        |    A     |
| >= 7 e < 9  |    B     |
| >= 6 e < 7  |    C     |
| >= 4 e < 6  |    D     |
| <4          |    E     |
|-------------|----------|
*/

int main (){
    float media, n1, n2, n3;
    int i;
    
    for (i = 1; i<=2; i++){
        //recebe a primeira nota do aluno
        printf("Digite a Nota 1: ");
        scanf("%f", &n1);

        // recebe a segunda nota do aluno
        printf("Digite a Nota 2: ");
        scanf("%f", &n2);

        // recebe a terceira nota do aluno
        printf("Digite a Nota 3: ");
        scanf("%f", &n3);

        //soma as 3 notas e divide por 3.
        media = ((n1+n2+n3)/3);

        //condição para verificar em qual intervalo esta a nota do aluno
        if(media > 9){  
            printf("\nMedia obtida = %.1f\n", media);
            printf("Conceito obtido = A");
        } 
        else if((media >= 7) && (media < 9)){  
            printf("\nMedia obtida = %.1f\n", media);
            printf("Conceito obtido = B\n");
        }
        else if((media >= 6) && (media < 7)){  
            printf("\nMedia obtida = %.1f\n", media);
            printf("Conceito obtido = C\n");
        }
        else if((media >= 4) && (media < 6)){  
            printf("\nMedia obtida = %.1f\n", media);
            printf("Conceito obtido = D\n");
        }
        else if(media < 4){  
            printf("\nMedia obtida = %.1f\n", media);
            printf("Conceito obtido = E\n");
        }
    }
    return 0;
}