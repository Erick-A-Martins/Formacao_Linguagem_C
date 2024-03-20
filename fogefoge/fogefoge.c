#include <stdio.h>
#include <stdlib.h>
#include "fogefoge.h"
#include "mapa.h"

//mapa
MAPA m;
POSICAO heroi;

int acabou() {
    return 0;
}

void move(char direcao) {
    // remove o personagem da posicao anterior
    m.matrizmapa[heroi.x][heroi.y] = '.';

    // faz o heroi andar e atualiza a posicao dele com base na inicial 
    switch(direcao) {
        case 'a':
            m.matrizmapa[heroi.x][heroi.y-1] = '@';
            heroi.y--;
            break;
        case 'w':
            m.matrizmapa[heroi.x-1][heroi.y] = '@';
            heroi.x--;
            break;
        case 's':
            m.matrizmapa[heroi.x+1][heroi.y] = '@';
            heroi.x++;
            break;
        case 'd':
            m.matrizmapa[heroi.x][heroi.y+1] = '@';
            heroi.y++;
            break;
    }

}

int main () {

    lemapa(&m);
    encontramapa(&m, &heroi, '@');

    do {
        imprimirmapa(&m);

        char comando;
        scanf(" %c", &comando);
        move(comando);

    } while (!acabou());

    liberamapa(&m);
}