#include <stdio.h>
#include <string.h>
#include <locale.h>

#define TAM_CODIGO 10
#define TAM_NOME 100

int main() {
    setlocale(LC_ALL, "pt_BR.UTF-8");

    char buffer[100];

    // ---------------- Carta 1 ----------------
    char estado1;
    char codigo1[TAM_CODIGO];
    char nomeCidade1[TAM_NOME];
    unsigned long int populacao1;
    float area1, pib1;
    int pontosTuristicos1;
    float densidade1, pibPerCapita1, superPoder1;

    printf("Cadastro da Carta 1\n");

    printf("Digite o estado (letra de A a H): ");
    fgets(buffer, sizeof(buffer), stdin);
    sscanf(buffer, " %c", &estado1);

    printf("Digite o código da carta (ex: A01): ");
    fgets(codigo1, TAM_CODIGO, stdin);
    codigo1[strcspn(codigo1, "\n")] = '\0';

    printf("Digite o nome da cidade: ");
    fgets(nomeCidade1, TAM_NOME, stdin);
    nomeCidade1[strcspn(nomeCidade1, "\n")] = '\0';

    printf("Digite a população: ");
    fgets(buffer, sizeof(buffer), stdin);
    sscanf(buffer, "%lu", &populacao1);

    printf("Digite a área em km²: ");
    fgets(buffer, sizeof(buffer), stdin);
    sscanf(buffer, "%f", &area1);

    printf("Digite o PIB (em bilhões de reais): ");
    fgets(buffer, sizeof(buffer), stdin);
    sscanf(buffer, "%f", &pib1);

    printf("Digite a quantidade de pontos turísticos: ");
    fgets(buffer, sizeof(buffer), stdin);
    sscanf(buffer, "%d", &pontosTuristicos1);

    densidade1 = populacao1 / area1;
    pibPerCapita1 = (pib1 * 1000000000.0f) / populacao1;
    superPoder1 = (float)populacao1 + area1 + (pib1 * 1000000000.0f) + 
                  (float)pontosTuristicos1 + pibPerCapita1 + (1.0f / densidade1);

    // ---------------- Carta 2 ----------------
    char estado2;
    char codigo2[TAM_CODIGO];
    char nomeCidade2[TAM_NOME];
    unsigned long int populacao2;
    float area2, pib2;
    int pontosTuristicos2;
    float densidade2, pibPerCapita2, superPoder2;

    printf("\nCadastro da Carta 2\n");

    printf("Digite o estado (letra de A a H): ");
    fgets(buffer, sizeof(buffer), stdin);
    sscanf(buffer, " %c", &estado2);

    printf("Digite o código da carta (ex: A02): ");
    fgets(codigo2, TAM_CODIGO, stdin);
    codigo2[strcspn(codigo2, "\n")] = '\0';

    printf("Digite o nome da cidade: ");
    fgets(nomeCidade2, TAM_NOME, stdin);
    nomeCidade2[strcspn(nomeCidade2, "\n")] = '\0';

    printf("Digite a população: ");
    fgets(buffer, sizeof(buffer), stdin);
    sscanf(buffer, "%lu", &populacao2);

    printf("Digite a área em km²: ");
    fgets(buffer, sizeof(buffer), stdin);
    sscanf(buffer, "%f", &area2);

    printf("Digite o PIB (em bilhões de reais): ");
    fgets(buffer, sizeof(buffer), stdin);
    sscanf(buffer, "%f", &pib2);

    printf("Digite a quantidade de pontos turísticos: ");
    fgets(buffer, sizeof(buffer), stdin);
    sscanf(buffer, "%d", &pontosTuristicos2);

    densidade2 = populacao2 / area2;
    pibPerCapita2 = (pib2 * 1000000000.0f) / populacao2;
    superPoder2 = (float)populacao2 + area2 + (pib2 * 1000000000.0f) + 
                  (float)pontosTuristicos2 + pibPerCapita2 + (1.0f / densidade2);

    // ---------------- Exibição das Cartas ----------------
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("População: %lu\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Pontos Turísticos: %d\n", pontosTuristicos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita1);
    printf("Super Poder: %.2f\n", superPoder1);

    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("População: %lu\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Pontos Turísticos: %d\n", pontosTuristicos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita2);
    printf("Super Poder: %.2f\n", superPoder2);

    // ---------------- Comparações ----------------
    printf("\nComparação de Cartas:\n");

    int resultado;

    resultado = populacao1 > populacao2;
    printf("População: Carta %d venceu (%d)\n", resultado ? 1 : 2, resultado);

    resultado = area1 > area2;
    printf("Área: Carta %d venceu (%d)\n", resultado ? 1 : 2, resultado);

    resultado = pib1 > pib2;
    printf("PIB: Carta %d venceu (%d)\n", resultado ? 1 : 2, resultado);

    resultado = pontosTuristicos1 > pontosTuristicos2;
    printf("Pontos Turísticos: Carta %d venceu (%d)\n", resultado ? 1 : 2, resultado);

    resultado = densidade1 < densidade2;
    printf("Densidade Populacional: Carta %d venceu (%d)\n", resultado ? 1 : 2, resultado);

    resultado = pibPerCapita1 > pibPerCapita2;
    printf("PIB per Capita: Carta %d venceu (%d)\n", resultado ? 1 : 2, resultado);

    resultado = superPoder1 > superPoder2;
    printf("Super Poder: Carta %d venceu (%d)\n", resultado ? 1 : 2, resultado);

    return 0;
}
