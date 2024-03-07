// tudo que começa com # em C se chama diretiva
// recomendavel nome de variaveis todas com letras minusculas
// constantes todas com letras MAIUSCULAS
// separacao de letras com _
// variaveis existem dentro dos escopos em que são declaradas
// pode ser acessada qualquer lugar dentro das "chaves" que ela está, e nas "chaves" de dentro
// variveis short (2 bytes) e long (8 bytes) para numeros pequenos e grandes
// float - (4 bytes) - guarda numeros menors / double - (8 bytes) - guarda numeros maiores

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main () {

    // cabeçalho do jogo
    printf("\n\n");
    printf("   ______________________________       \n");
    printf(" / \\                             \\.   \n");
    printf("|   |                            |.     \n");
    printf(" \\_ |        BEM VINDO(A)!       |.    \n");
    printf("    |                            |.     \n");
    printf("    |                            |.     \n");
    printf("    |                            |.     \n");
    printf("    |     JOGO DE ADIVINHACAO    |.     \n");
    printf("    |                            |.     \n");
    printf("    |                            |.     \n");
    printf("    |                            |.     \n");
    printf("    |       TENTE DESCOBRIR      |.     \n");
    printf("    |    QUAL O NUMERO CORRETO!  |.     \n");
    printf("    |                            |.     \n");
    printf("    |   _________________________|___   \n");
    printf("    |  /                            /.  \n");
    printf("    \\_/____________________________/.  \n");
    printf("\n\n");

    // variaveis usadas no escopo inteiro

    int chute;
    int acertou;
    int tentativas = 1;
    double pontos = 1000;
    int numerodetentativas;
    int nivel;

    srand(time(0)); // numero de segundos do momento atual para gerar um numero para a seed
    int numerosecreto = rand() % 100;  // rand() = função que gera numeros randomicos e resto da divisao do numero grande por 100 para ter o numero entre 0 e 99

    printf("Qual o nivel de dificuldade? \n");
    printf("(1) Facil - (2) Medio - (3) Dificil \n\n"); 
    printf("Escolha: ");
    scanf("%d", &nivel); 

    switch (nivel) {
        case 1:
            numerodetentativas = 20;
            break;

        case 2:
            numerodetentativas = 15;
            break;

        default:
            numerodetentativas = 6;
            break;
    }

    // laço de repetição para o numero de tentativas do jogo
    for (int i = 1; i <= numerodetentativas; i++) {
        
        printf("\nTENTATIVA %d\n", tentativas);
        printf("Qual e o seu chute? ");
        scanf("%d", &chute);

        printf("\n");
        printf("Seu chute foi %d\n", chute);

        // verificação se o usuário digita um numero negativo que não é permitido
        if (chute < 0) {
            printf("Voce nao pode chutar numeros negativos!\n");

            continue; // para a execução do código e vai pra próxima execução do loop
        }

        // verifica se acertou e se foi maior ou menor
        acertou = (chute == numerosecreto);
        int maior = chute > numerosecreto;

        if (acertou) { // expressao do IF avaliada entre 0 para falso e 1 para verdadeiro
            break; // quebra o loop
        } 

        else if (maior){
            printf("Seu chute foi MAIOR que o numero secreto!\n");
        } 
        else {
            printf ("Seu chute foi MENOR que o numero secreto!\n");
        }

        tentativas++;  

        // função abs devolve o valor absoluto do numero
        double pontosperdidos = abs(chute - numerosecreto) / (double)2; // casting de int para double
        pontos = pontos - pontosperdidos;

    }
    
    printf("Fim de jogo!\n");

    if (acertou) {
        printf("\n\n");
        printf("              ,---------------------------,                \n");
        printf("              |  /---------------------\\  |               \n");
        printf("              | |                       | |                \n");
        printf("              | |       PARABENS!       | |                \n");
        printf("              | |      VOCE GANHOU!     | |                \n");
        printf("              | |                       | |                \n");
        printf("              | |                       | |                \n");
        printf("              |  \\_____________________/  |               \n");
        printf("              |___________________________|                \n");
        printf("            ,---\\_____     []     _______/------,         \n");
        printf("          /         /______________\\           /|         \n");
        printf("        /___________________________________ /  | ___      \n");
        printf("        |                                   |   |    )     \n");
        printf("        |  _ _ _                 [-------]  |   |   (      \n");
        printf("        |  o o o                 [-------]  |  /    _)_    \n");
        printf("        |__________________________________ |/     /  /    \n");
        printf("    /-------------------------------------/|      ( )/     \n");
        printf("  /-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/ /                \n");
        printf("/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/ /                  \n");
        printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~                    \n");
        printf("\n\n");
        printf("Voce acertou em %d tentativas!\n", tentativas);
        printf("Total de pontos: %.1f\n", pontos);
    } 
    else {
        printf("\n\n");
        printf("                           ,--.    \n");         
        printf("                          {    }   \n");        
        printf("                          K,   }   \n");    
        printf("                         /  `Y`    \n");    
        printf("                    _   /   /      \n");    
        printf("                   {_'-K.__/       \n");    
        printf("                     `/-.__L._     \n");    
        printf("                     /  ' /`\\_}   \n");    
        printf("                    /  ' /         \n");
        printf("            ____   /  ' /          \n");    
        printf("     ,-'~~~~    ~~/  ' /_          \n");    
        printf("   ,'             ``~~~%%%%',      \n");    
        printf("  (                     %%  Y      \n");    
        printf(" {                      %%%% I     \n");         
        printf("{      -                 %%  `.    \n");    
        printf("|       ',                %%  )    \n");    
        printf("|        |   ,..__      __. Y      \n");    
        printf("|    .,_./  Y ' / ^Y   J   )|      \n");    
        printf("\\           |' /   |   |   ||     \n");    
        printf(" \\          L_/    . _ (_,.'(     \n");    
        printf("  \\,   ,      ^^""' / |      )    \n");    
        printf("    \\_  \\          /,L]     /    \n");    
        printf("      '-_`-,       ` `   ./`       \n");    
        printf("         `-(_            )         \n");    
        printf("             ^^\\..___,.--`        \n");
        printf("\n\n");
        printf("Voce perdeu! Tente de novo!\n");
    }

    
    

    return 0;
}
