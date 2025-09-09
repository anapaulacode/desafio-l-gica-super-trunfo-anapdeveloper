#include <stdio.h>
#include <string.h> // Incluímos para usar a função de comparação de strings

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Implementação do Nível Novato com o tema "Países do Leste Europeu"

int main() {
    // --- 1. Definição das variáveis para armazenar as propriedades dos países ---
    
    // Carta 1 - País
    char nomePais1[50];
    int populacao1;
    double area1;
    double pib1;
    int pontosTuristicos1; // Pode ser interpretado como "Sítios UNESCO", por exemplo
    double densidade1;

    // Carta 2 - País
    char nomePais2[50];
    int populacao2;
    double area2;
    double pib2;
    int pontosTuristicos2;
    double densidade2;

    // --- 2. Cadastro das Cartas ---
    // Solicitamos ao usuário que insira os dados dos dois países.

    printf("--- CADASTRO DA CARTA 1 (PAÍS DO LESTE EUROPEU) ---\n");
    printf("Digite o nome do primeiro país (ex: Polonia): ");
    scanf("%s", nomePais1); // Para nomes compostos, use um underscore (_) no lugar do espaço.

    printf("Digite a população: ");
    scanf("%d", &populacao1);

    printf("Digite a área (em km²): ");
    scanf("%lf", &area1);

    printf("Digite o PIB (em bilhões de USD): ");
    scanf("%lf", &pib1);

    printf("Digite o número de pontos turísticos (ex: Sítios UNESCO): ");
    scanf("%d", &pontosTuristicos1);

    printf("\n--- CADASTRO DA CARTA 2 (PAÍS DO LESTE EUROPEU) ---\n");
    printf("Digite o nome do segundo país (ex: Romenia): ");
    scanf("%s", nomePais2);

    printf("Digite a população: ");
    scanf("%d", &populacao2);

    printf("Digite a área (em km²): ");
    scanf("%lf", &area2);

    printf("Digite o PIB (em bilhões de USD): ");
    scanf("%lf", &pib2);

    printf("Digite o número de pontos turísticos (ex: Sítios UNESCO): ");
    scanf("%d", &pontosTuristicos2);

    // --- 3. Cálculos Adicionais ---
    // Calculamos a densidade populacional para cada país.
    if (area1 > 0) {
        densidade1 = (double)populacao1 / area1;
    } else {
        densidade1 = 0;
    }

    if (area2 > 0) {
        densidade2 = (double)populacao2 / area2;
    } else {
        densidade2 = 0;
    }

    // --- 4. Exibição dos Dados Cadastrados ---
    printf("\n\n=============== CARTAS CADASTRADAS ===============\n");
    printf("Carta 1: %s\n", nomePais1);
    printf(" > População: %d\n", populacao1);
    printf(" > Área: %.2f km²\n", area1);
    printf(" > PIB: US$ %.2f Bilhões\n", pib1);
    printf(" > Pontos Turísticos: %d\n", pontosTuristicos1);
    printf(" > Densidade: %.2f hab/km²\n\n", densidade1);

    printf("Carta 2: %s\n", nomePais2);
    printf(" > População: %d\n", populacao2);
    printf(" > Área: %.2f km²\n", area2);
    printf(" > PIB: US$ %.2f Bilhões\n", pib2);
    printf(" > Pontos Turísticos: %d\n", pontosTuristicos2);
    printf(" > Densidade: %.2f hab/km²\n", densidade2);
    printf("====================================================\n\n");

    // --- 5. Comparação de Cartas e Exibição dos Resultados ---
    printf("=============== RESULTADO DA COMPARAÇÃO ===============\n");

    // Comparando População (maior vence)
    if (populacao1 > populacao2) {
        printf("-> POPULAÇÃO: %s vence! (%d vs %d)\n", nomePais1, populacao1, populacao2);
    } else if (populacao2 > populacao1) {
        printf("-> POPULAÇÃO: %s vence! (%d vs %d)\n", nomePais2, populacao2, populacao1);
    } else {
        printf("-> POPULAÇÃO: Empate! (%d vs %d)\n", populacao1, populacao2);
    }

    // Comparando PIB (maior vence)
    if (pib1 > pib2) {
        printf("-> PIB: %s vence! (US$ %.2f Bi vs US$ %.2f Bi)\n", nomePais1, pib1, pib2);
    } else if (pib2 > pib1) {
        printf("-> PIB: %s vence! (US$ %.2f Bi vs US$ %.2f Bi)\n", nomePais2, pib2, pib1);
    } else {
        printf("-> PIB: Empate! (US$ %.2f Bi vs US$ %.2f Bi)\n", pib1, pib2);
    }
    
    // Comparando Área (maior vence)
    if (area1 > area2) {
        printf("-> ÁREA: %s vence! (%.2f km² vs %.2f km²)\n", nomePais1, area1, area2);
    } else if (area2 > area1) {
        printf("-> ÁREA: %s vence! (%.2f km² vs %.2f km²)\n", nomePais2, area2, area1);
    } else {
        printf("-> ÁREA: Empate! (%.2f km² vs %.2f km²)\n", area1, area2);
    }

    // Comparando Pontos Turísticos (maior vence)
    if (pontosTuristicos1 > pontosTuristicos2) {
        printf("-> PONTOS TURÍSTICOS: %s vence! (%d vs %d)\n", nomePais1, pontosTuristicos1, pontosTuristicos2);
    } else if (pontosTuristicos2 > pontosTuristicos1) {
        printf("-> PONTOS TURÍSTICOS: %s vence! (%d vs %d)\n", nomePais2, pontosTuristicos2, pontosTuristicos1);
    } else {
        printf("-> PONTOS TURÍSTICOS: Empate! (%d vs %d)\n", pontosTuristicos1, pontosTuristicos2);
    }

    // Comparando Densidade Populacional (REGRA ESPECIAL: menor vence)
    if (densidade1 < densidade2) {
        printf("-> DENSIDADE (menor vence): %s vence! (%.2f vs %.2f)\n", nomePais1, densidade1, densidade2);
    } else if (densidade2 < densidade1) {
        printf("-> DENSIDADE (menor vence): %s vence! (%.2f vs %.2f)\n", nomePais2, densidade2, densidade1);
    } else {
        printf("-> DENSIDADE: Empate! (%.2f vs %.2f)\n", densidade1, densidade2);
    }
    
    printf("=======================================================\n");

    return 0;
}

