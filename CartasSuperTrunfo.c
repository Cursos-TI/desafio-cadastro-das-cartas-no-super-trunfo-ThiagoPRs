#include <stdio.h>
// Estrutura para representar uma carta
typedef struct {
    char estado;
    char codigo[4];
    char nome[30];
    int populacao;
    float area, pib;
    int pontos_turisticos;
} Carta;

int main() {
    Carta carta1, carta2;

    // Entrada de dados para a primeira carta
    printf("Digite os dados da primeira carta:\n");
    printf("Estado (A-H):\n");
    scanf(" %c", &carta1.estado);
    printf("Código:\n");
    scanf("%s", carta1.codigo);
    getchar(); // Limpa o buffer
    printf("Nome da Cidade:\n");
    fgets(carta1.nome, sizeof(carta1.nome), stdin);
    printf("População:\n");
    scanf("%d", &carta1.populacao);
    printf("Área (km²):\n");
    scanf("%f", &carta1.area);
    printf("PIB (bilhões de reais):\n");
    scanf("%f", &carta1.pib);
    printf("Número de Pontos Turísticos:\n");
    scanf("%d", &carta1.pontos_turisticos);

    getchar(); // Limpa o buffer

    // Entrada de dados para a segunda carta
    printf("\nDigite os dados da segunda carta:\n");
    printf("Estado (A-H):\n");
    scanf(" %c", &carta2.estado);
    printf("Código:\n");
    scanf("%s", carta2.codigo);
    getchar(); // Limpa o buffer
    printf("Nome da Cidade:\n");
    fgets(carta2.nome, sizeof(carta2.nome), stdin);
    printf("População:\n");
    scanf("%d", &carta2.populacao);
    printf("Área (km²):\n");
    scanf("%f", &carta2.area);
    printf("PIB (bilhões de reais):\n");
    scanf("%f", &carta2.pib);
    printf("Número de Pontos Turísticos:\n");
    scanf("%d", &carta2.pontos_turisticos);

    // Exibição dos dados das cartas
    printf("\nCarta 1:\n");
    printf("Estado: %c\nCódigo: %s\nNome da Cidade: %sPopulação: %d\nÁrea: %.2f km²\nPIB: %.2f bilhões de reais\nNúmero de Pontos Turísticos: %d\n", 
           carta1.estado, carta1.codigo, carta1.nome, carta1.populacao, carta1.area, carta1.pib, carta1.pontos_turisticos);
    
    printf("\nCarta 2:\n");
    printf("Estado: %c\nCódigo: %s\nNome da Cidade: %sPopulação: %d\nÁrea: %.2f km²\nPIB: %.2f bilhões de reais\nNúmero de Pontos Turísticos: %d\n", 
           carta2.estado, carta2.codigo, carta2.nome, carta2.populacao, carta2.area, carta2.pib, carta2.pontos_turisticos);

    return 0;
}
