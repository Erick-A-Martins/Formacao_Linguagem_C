#include <stdio.h>
#include <stdlib.h>
#include "mapa.h"

void encontramapa(MAPA* m, POSICAO* p, char c) {
    // Descobre a direção do herói e armazena nas variaveis X e Y
    for(int i = 0; i < m->linhas; i++) {
        for(int j = 0; j < m->colunas; j++) {
            if(m->matrizmapa[i][j] == c) {
                p->x = i;
                p->y = j;
                break;
            }
        }
    }
}

void liberamapa(MAPA* m) { // Ponteiro de struct
    for(int i = 0; i < m->linhas; i++) {
        free(m->matrizmapa[i]);
    }
    free(m->matrizmapa);    
}

void alocamapa(MAPA* m) {
    m->matrizmapa = malloc(sizeof(char*) * m->linhas);
    for(int i = 0; i < m->linhas; i++) {
        m->matrizmapa[i] = malloc(sizeof(char) * (m->colunas+1)); 
    }
}

void lemapa(MAPA* m) {

    FILE* f;

    f = fopen("mapa.txt", "r");
    if (f == 0) {
        printf("Erro na leitura do mapa\n");
        exit(1);
    }

    fscanf(f, "%d %d", &(m->linhas), &(m->colunas));

    // Alocação Dinâmica
    alocamapa(m);
    // Fim alocação dinâmica

    for(int i = 0; i < 5; i++) {
        fscanf(f, "%s", m->matrizmapa[i]);
    }
    fclose(f);

}

void imprimirmapa(MAPA* m) {
    for(int i = 0; i < 5; i++) {
        printf("%s\n", m->matrizmapa[i]);
    }
}