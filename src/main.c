#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int numeroSecreto, palpite, tentativas = 0;
    char jogarNovamente = 's';
    
    // Inicializar gerador de números aleatórios
    srand(time(NULL));
    
    while (jogarNovamente == 's' || jogarNovamente == 'S') {
        // Gerar um número aleatório entre 1 e 100
        numeroSecreto = rand() % 100 + 1;
        tentativas = 0;

        printf("Bem-vindo ao jogo de adivinhação!\n");
        printf("Tente adivinhar o número entre 1 e 100.\n");

        // Loop até o jogador acertar o número
        do {
            printf("\nDigite o seu palpite: ");
            scanf("%d", &palpite);
            tentativas++;

            if (palpite < numeroSecreto) {
                printf("O número secreto é maior!\n");
            } else if (palpite > numeroSecreto) {
                printf("O número secreto é menor!\n");
            } else {
                printf("Parabéns! Você acertou o número %d em %d tentativas!\n", numeroSecreto, tentativas);
            }

        } while (palpite != numeroSecreto);

        // Perguntar ao jogador se ele quer jogar novamente
        printf("Você quer jogar novamente? (s/n): ");
        scanf(" %c", &jogarNovamente);
    }

    printf("Obrigado por jogar!\n");

    return 0;
}
