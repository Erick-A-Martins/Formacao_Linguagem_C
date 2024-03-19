#include <stdio.h>
#include <stdlib.h>

int main () {

    // alocar dicamicamente as dimensoes da matriz abaixo
    int linhas = 5;
    int colunas = 10;
    int matriz**;
    int contador = 0;

    for(int i = 0; i < linhas; i++) {
        for(int j = 0; j < colunas; j++){
            matriz[i][j] = contador++;
        }
    }

    matriz = malloc(sizeof(int*) * linhas);
    for(int i = 0; i < linhas; i++) {
        matriz[i] = malloc(sizeof(int) * colunas+1);
    }

    // imprimindo
    for(int i = 0; i < linhas; i++) {
        printf("%d\n", matriz[i][j]);
    }

    // liberando a memoria
    for(int i = 0; i < linhas; i++) {
        free(matriz[i]);
    }
    free(matriz);
}