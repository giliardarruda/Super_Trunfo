#include <stdio.h>
#include <string.h>
#include <locale.h>

#define TAM_CODIGO 10
#define TAM_NOME 100

int main() {
    setlocale(LC_ALL, "Portuguese_Brazil");

    char buffer[100];

    // ---------------- Carta 1 ----------------
    char estado1;
    char codigo1[TAM_CODIGO];
    char nomeCidade1[TAM_NOME];
    int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;

    printf("Cadastro da Carta 1\n");

    printf("Digite o estado (letra de A a H): ");
    fflush(stdout);
    fgets(buffer, sizeof(buffer), stdin);
    sscanf(buffer, " %c", &estado1);

    printf("Digite o código da carta (ex: A01): ");
    fflush(stdout);
    fgets(codigo1, TAM_CODIGO, stdin);
    codigo1[strcspn(codigo1, "\n")] = '\0';

    printf("Digite o nome da cidade: ");
    fflush(stdout);
    fgets(nomeCidade1, TAM_NOME, stdin);
    nomeCidade1[strcspn(nomeCidade1, "\n")] = '\0';

    printf("Digite a população (somente números inteiros, sem ponto ou vírgula): ");
    fflush(stdout);
    fgets(buffer, sizeof(buffer), stdin);
    sscanf(buffer, "%d", &populacao1);

    printf("Digite a área em km² (use ponto para decimais): ");
    fflush(stdout);
    fgets(buffer, sizeof(buffer), stdin);
    sscanf(buffer, "%f", &area1);

    printf("Digite o PIB (em bilhões de reais, use ponto para decimais): ");
    fflush(stdout);
    fgets(buffer, sizeof(buffer), stdin);
    sscanf(buffer, "%f", &pib1);

    printf("Digite a quantidade de pontos turísticos (somente números inteiros): ");
    fflush(stdout);
    fgets(buffer, sizeof(buffer), stdin);
    sscanf(buffer, "%d", &pontosTuristicos1);

    // ---------------- Carta 2 ----------------
    char estado2;
    char codigo2[TAM_CODIGO];
    char nomeCidade2[TAM_NOME];
    int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;

    printf("\nCadastro da Carta 2\n");

    printf("Digite o estado (letra de A a H): ");
    fflush(stdout);
    fgets(buffer, sizeof(buffer), stdin);
    sscanf(buffer, " %c", &estado2);

    printf("Digite o código da carta (ex: A01): ");
    fflush(stdout);
    fgets(codigo2, TAM_CODIGO, stdin);
    codigo2[strcspn(codigo2, "\n")] = '\0';

    printf("Digite o nome da cidade: ");
    fflush(stdout);
    fgets(nomeCidade2, TAM_NOME, stdin);
    nomeCidade2[strcspn(nomeCidade2, "\n")] = '\0';

    printf("Digite a população (somente números inteiros, sem ponto ou vírgula): ");
    fflush(stdout);
    fgets(buffer, sizeof(buffer), stdin);
    sscanf(buffer, "%d", &populacao2);

    printf("Digite a área em km² (use ponto para decimais): ");
    fflush(stdout);
    fgets(buffer, sizeof(buffer), stdin);
    sscanf(buffer, "%f", &area2);

    printf("Digite o PIB (em bilhões de reais, use ponto para decimais): ");
    fflush(stdout);
    fgets(buffer, sizeof(buffer), stdin);
    sscanf(buffer, "%f", &pib2);

    printf("Digite a quantidade de pontos turísticos (somente números inteiros): ");
    fflush(stdout);
    fgets(buffer, sizeof(buffer), stdin);
    sscanf(buffer, "%d", &pontosTuristicos2);

    // ---------------- Exibição ----------------
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1);

    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);

    return 0;
}
