#include <stdio.h>

int main() {
    // Estruturas das cartas
    char estado1[3], estado2[3];
    char codigo1[10], codigo2[10];
    char cidade1[30], cidade2[30];
    int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int pontosTuristicos1, pontosTuristicos2;

    // Cadastro da primeira carta
    printf("Cadastro da Carta 1\n");
    printf("Digite o estado (sigla): ");
    scanf("%s", estado1);

    printf("Digite o código da carta: ");
    scanf("%s", codigo1);

    printf("Digite o nome da cidade: ");
    scanf("%s", cidade1);

    printf("Digite a população: ");
    scanf("%d", &populacao1);

    printf("Digite a área (em km²): ");
    scanf("%f", &area1);

    printf("Digite o PIB (em bilhões): ");
    scanf("%f", &pib1);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontosTuristicos1);

    printf("\n");

    // Cadastro da segunda carta
    printf("Cadastro da Carta 2\n");
    printf("Digite o estado (sigla): ");
    scanf("%s", estado2);

    printf("Digite o código da carta: ");
    scanf("%s", codigo2);

    printf("Digite o nome da cidade: ");
    scanf("%s", cidade2);

    printf("Digite a população: ");
    scanf("%d", &populacao2);

    printf("Digite a área (em km²): ");
    scanf("%f", &area2);

    printf("Digite o PIB (em bilhões): ");
    scanf("%f", &pib2);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontosTuristicos2);

    printf("\n=== Cartas Cadastradas ===\n");
    printf("Carta 1: %s-%s | Cidade: %s | População: %d | Área: %.2f km² | PIB: %.2f | Pontos Turísticos: %d\n",
           estado1, codigo1, cidade1, populacao1, area1, pib1, pontosTuristicos1);
    printf("Carta 2: %s-%s | Cidade: %s | População: %d | Área: %.2f km² | PIB: %.2f | Pontos Turísticos: %d\n",
           estado2, codigo2, cidade2, populacao2, area2, pib2, pontosTuristicos2);

    // Comparação escolhida (exemplo: população)
    printf("\n=== Comparação de Cartas ===\n");

    // População
    if (populacao1 > populacao2) {
        printf("Cidade %s venceu em população.\n", cidade1);
    } else if (populacao2 > populacao1) {
        printf("Cidade %s venceu em população.\n", cidade2);
    } else {
        printf("Empate em população.\n");
    }

    // Área
    if (area1 > area2) {
        printf("Cidade %s venceu em área.\n", cidade1);
    } else if (area2 > area1) {
        printf("Cidade %s venceu em área.\n", cidade2);
    } else {
        printf("Empate em área.\n");
    }

    // PIB
    if (pib1 > pib2) {
        printf("Cidade %s venceu em PIB.\n", cidade1);
    } else if (pib2 > pib1) {
        printf("Cidade %s venceu em PIB.\n", cidade2);
    } else {
        printf("Empate em PIB.\n");
    }

    // Pontos turísticos
    if (pontosTuristicos1 > pontosTuristicos2) {
        printf("Cidade %s venceu em pontos turísticos.\n", cidade1);
    } else if (pontosTuristicos2 > pontosTuristicos1) {
        printf("Cidade %s venceu em pontos turísticos.\n", cidade2);
    } else {
        printf("Empate em pontos turísticos.\n");
    }

    // Densidade populacional (menor vence)
    float densidade1 = populacao1 / area1;
    float densidade2 = populacao2 / area2;

    if (densidade1 < densidade2) {
        printf("Cidade %s venceu em densidade populacional (menor valor).\n", cidade1);
    } else if (densidade2 < densidade1) {
        printf("Cidade %s venceu em densidade populacional (menor valor).\n", cidade2);
    } else {
        printf("Empate em densidade populacional.\n");
    }



    return 0;
}
