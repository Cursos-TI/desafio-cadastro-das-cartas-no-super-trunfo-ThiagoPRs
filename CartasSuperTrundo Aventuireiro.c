#include <stdio.h>

int main() {
    // Declaração das variáveis para armazenar as informações de cada carta
    char estado[50], cidade[50];
    int codigo_carta, populacao, pontos_turisticos;
    float area, pib, densidade_populacional, pib_per_capita;

    // Leitura das informações para a primeira carta
    printf("Informe as informações para a primeira cidade:\n");

    printf("Estado: ");
    scanf("%s", estado);
    
    printf("Código da carta: ");
    scanf("%d", &codigo_carta);
    
    printf("Nome da cidade: ");
    scanf("%s", cidade);
    
    printf("População: ");
    scanf("%d", &populacao);
    
    printf("Área (em km²): ");
    scanf("%f", &area);
    
    printf("PIB (em milhões): ");
    scanf("%f", &pib);
    
    printf("Número de pontos turísticos: ");
    scanf("%d", &pontos_turisticos);
    
    // Cálculos para a densidade populacional e PIB per capita
    densidade_populacional = populacao / area;
    pib_per_capita = pib * 1000000 / populacao; // Multiplica PIB por 1 milhão para ajustar à unidade correta

    // Exibindo os resultados
    printf("\nResultados da primeira cidade:\n");
    printf("Estado: %s\n", estado);
    printf("Código da carta: %d\n", codigo_carta);
    printf("Nome da cidade: %s\n", cidade);
    printf("População: %d\n", populacao);
    printf("Área: %.2f km²\n", area);
    printf("PIB: R$ %.2f milhões\n", pib);
    printf("Número de pontos turísticos: %d\n", pontos_turisticos);
    printf("Densidade Populacional: %.2f habitantes por km²\n", densidade_populacional);
    printf("PIB per Capita: R$ %.2f\n", pib_per_capita);

    // Repetindo o processo para a segunda cidade
    printf("\nInforme as informações para a segunda cidade:\n");

    printf("Estado: ");
    scanf("%s", estado);
    
    printf("Código da carta: ");
    scanf("%d", &codigo_carta);
    
    printf("Nome da cidade: ");
    scanf("%s", cidade);
    
    printf("População: ");
    scanf("%d", &populacao);
    
    printf("Área (em km²): ");
    scanf("%f", &area);
    
    printf("PIB (em milhões): ");
    scanf("%f", &pib);
    
    printf("Número de pontos turísticos: ");
    scanf("%d", &pontos_turisticos);
    
    // Cálculos para a densidade populacional e PIB per capita
    densidade_populacional = populacao / area;
    pib_per_capita = pib * 1000000 / populacao; // Multiplica PIB por 1 milhão para ajustar à unidade correta

    // Exibindo os resultados
    printf("\nResultados da segunda cidade:\n");
    printf("Estado: %s\n", estado);
    printf("Código da carta: %d\n", codigo_carta);
    printf("Nome da cidade: %s\n", cidade);
    printf("População: %d\n", populacao);
    printf("Área: %.2f km²\n", area);
    printf("PIB: R$ %.2f milhões\n", pib);
    printf("Número de pontos turísticos: %d\n", pontos_turisticos);
    printf("Densidade Populacional: %.2f habitantes por km²\n", densidade_populacional);
    printf("PIB per Capita: R$ %.2f\n", pib_per_capita);

    return 0;
}
