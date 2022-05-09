#include <stdio.h>

//program para saber qual o maior entre dois numeros.

int main () {
    int n1, n2;
    
    printf("Digite o primeiro numero: ");
    scanf("%d", &n1);
    printf("Digite o segundo numero: ");
    scanf("%d", &n2);
    if (n1 > n2) {
        printf("%d eh maior que %d\n", n1, n2);
    }
    else if (n1 < n2) {
        printf("%d eh menor que %d\n", n1, n2);
    } else {
        printf("Os numeros sao iguais: \n");
    }

    system("pause"); //evita do terminal fechar ao executar o exe gerado.

    return 0;
}