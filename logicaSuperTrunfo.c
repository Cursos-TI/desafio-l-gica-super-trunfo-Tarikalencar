#include <stdio.h>

int main() {
    // Variáveis para armazenar os dados das duas cidades
    char codigo1[20], codigo2[20];
    int populacao1, populacao2;
    float pib1, pib2;
    int pontosTuristicos1, pontosTuristicos2;

    printf("=== SUPER TRUNFO - COMPARAÇÃO DE CIDADES ===\n");

    // Cadastro da primeira carta
    printf("Digite o código da primeira cidade: \n");
    scanf("%s", codigo1);

    printf("Digite a população da cidade %s: \n", codigo1);
    scanf("%d", &populacao1);

    printf("Digite o PIB da cidade %s: \n", codigo1);
    scanf("%f", &pib1);

    printf("Digite o número de pontos turísticos da cidade %s: \n", codigo1);
    scanf("%d", &pontosTuristicos1);

    printf("\n");

    // Cadastro da segunda carta
    printf("Digite o código da segunda cidade:\n");
    scanf("%s", codigo2);

    printf("Digite a população da cidade %s:\n", codigo2);
    scanf("%d", &populacao2);

    printf("Digite o PIB da cidade %s:\n", codigo2);
    scanf("%f", &pib2);

    printf("Digite o número de pontos turísticos da cidade %s:\n", codigo2);
    scanf("%d", &pontosTuristicos2);

    printf("\n=== RESULTADOS DAS COMPARAÇÕES ===\n");

    // Comparações
    if (populacao1 > populacao2) {
        printf("Cidade %s tem maior população.\n", codigo1);
    } else if (populacao2 > populacao1) {
        printf("Cidade %s tem maior população.\n", codigo2);
    } else {
        printf("As duas cidades têm a mesma população.\n");
    }

    if (pib1 > pib2) {
        printf("Cidade %s tem maior PIB.\n", codigo1);
    } else if (pib2 > pib1) {
        printf("Cidade %s tem maior PIB.\n", codigo2);
    } else {
        printf("As duas cidades têm o mesmo PIB.\n");
    }

    if (pontosTuristicos1 > pontosTuristicos2) {
        printf("Cidade %s tem mais pontos turísticos.\n", codigo1);
    } else if (pontosTuristicos2 > pontosTuristicos1) {
        printf("Cidade %s tem mais pontos turísticos.\n", codigo2);
    } else {
        printf("As duas cidades têm a mesma quantidade de pontos turísticos.\n");
    }



    return 0;
}
