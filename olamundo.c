#include <stdio.h>
#include <string.h>

// Define a estrutura da carta
typedef struct {
    char estado; // Letra de 'A' a 'H'
    char codigo[5]; // Código da carta (ex: A01)
    char nomeCidade[50];
    int populacao;
} Carta;

// Função para cadastrar uma carta
void cadastrarCarta(Carta *carta) {
    printf("Digite o estado da carta (A-H): ");
    scanf(" %c", &carta->estado); // O espaço antes de %c remove o caractere newline pendente

    printf("Digite o código da carta (ex: A01): ");
    scanf("%s", carta->codigo);

    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]s", carta->nomeCidade); // Lê até a quebra de linha

    printf("Digite a população da cidade: ");
    scanf("%d", &carta->populacao);
}

// Função para exibir os dados de uma carta
void exibirCarta(Carta carta) {
    printf("\nEstado: %c\n", carta.estado);
    printf("Código: %s\n", carta.codigo);
    printf("Nome da cidade: %s\n", carta.nomeCidade);
    printf("População: %d\n", carta.populacao);
}

int main() {
    Carta carta1, carta2;

    printf("Cadastro da primeira carta:\n");
    cadastrarCarta(&carta1);

    printf("\nCadastro da segunda carta:\n");
    cadastrarCarta(&carta2);

    printf("\nDados da primeira carta:\n");
    exibirCarta(carta1);

    printf("\nDados da segunda carta:\n");
    exibirCarta(carta2);

    return 0;
}
