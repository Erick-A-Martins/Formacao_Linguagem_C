#define ESQUERDA 'a'
#define DIREITA 'd'
#define CIMA 'w'
#define BAIXO 's'
#define BOMBA 'b'

void move(char direcao);
int acabou();
int ehdirecao(char direacao);
void fantasmas();
int movimentofantasmas(int xatual, int yatual, int* xdestino, int* ydestino);
void explodepilula();