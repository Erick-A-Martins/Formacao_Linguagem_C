#include <stdio.h>

int main () {

    int numeros[20][10];
    int contador = 0;

    for(int linha = 0; linha < 20; linha++) {
        for(int coluna = 0; coluna < 10; coluna++){
            numeros[linha][coluna] = contador++;
        };
    }

    for(int i = 0; i < 20; i++) {
        for(int j = 0; j < 10; j++){
            printf("%d ", numeros[i][j]);
        }
        printf("\n");
    }
}