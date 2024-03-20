struct mapa {
    char** matrizmapa;
    int linhas;
    int colunas;
};
// definindo um apelido para a struct mapa para ser usado no código
typedef struct mapa MAPA; 

// scruct para definir posicao pela primeira (e única) vez do heroi e apartir dela seguir com o código sem precisar percorrer dois for´s() para sempre achar a posicao atual dele e fazer ele andar
struct posicao {
    int x;
    int y;
};

typedef struct posicao POSICAO;

void liberamapa(MAPA* m);
void lemapa(MAPA* m);
void alocamapa(MAPA* m);
void imprimirmapa(MAPA* m);
void encontramapa(MAPA* m, POSICAO* p, char c);
