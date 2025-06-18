#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas

int main() {
    //Declaração de variáveis

    //Nome dos estados
    char estado1[3], estado2[3];

    //Código das cartas (Letra+número)
    char cod1[4], cod2[4];

    //Nome das cidades
    char cidade1[25], cidade2[25];

    //População das cidades
    int populacao1, populacao2;

    //Área das cidades (em km²)
    float area1, area2;

    //PIB das cidades
    float pib1, pib2;

    //Número de pontos turísticos
    int turistico1, turistico2;

    // Cadastro das Cartas:
    // Carta 1:
    printf("Digite os dados da primeira carta \n");

    printf("Digite o nome do estado (sigla): \n");
    scanf("%s", &estado1);

    printf("Digite o código da carta (Letra de A a H + número de 01 a 04): \n");
    scanf("%s", &cod1);

    printf("Digite o nome da cidade: \n");
    scanf("%s", &cidade1);

    printf("Informe a população da cidade: \n");
    scanf("%d", &populacao1);

    printf("Informe a área da cidade em km²: \n");
    scanf("%f", &area1);

    printf("Informe o PIB da cidade: \n");
    scanf("%f", &pib1);
    
    printf("Digite o número de pontos turísticos da cidade: \n");
    scanf("%d", &turistico1);

    // Carta 2:
    printf("Digite os dados da segunda carta \n");

    printf("Digite o nome do estado (sigla): \n");
    scanf("%s", &estado2);

    printf("Digite o código da carta (Letra de A a H + número de 01 a 04): \n");
    scanf("%s", &cod2);

    printf("Digite o nome da cidade: \n");
    scanf("%s", &cidade2);

    printf("Informe a população da cidade: \n");
    scanf("%d", &populacao2);

    printf("Informe a área da cidade em km²: \n");
    scanf("%f", &area2);

    printf("Informe o PIB da cidade: \n");
    scanf("%f", &pib2);
    
    printf("Digite o número de pontos turísticos da cidade: \n");
    scanf("%d", &turistico2);

    //Impressão da carta
    // Carta 1
    printf("Carta 1:\n");
    printf("Estado: %s \n", estado1);
    printf("Código: %s \n", cod1);
    printf("Cidade: %s \n", cidade1);
    printf("População: %d \n", populacao1);
    printf("Área: %f \n", area1);
    printf("PIB: %f \n", pib1);
    printf("Pontos turísticos: %d \n", turistico1);
    // Carta 2
    printf("Carta 2:\n");
    printf("Estado: %s \n", estado2);
    printf("Código: %s \n", cod2);
    printf("Cidade: %s \n", cidade2);
    printf("População: %d \n", populacao2);
    printf("Área: %f \n", area2);
    printf("PIB: %f \n", pib2);
    printf("Pontos turísticos: %d \n", turistico2);

    //aaaaaaa

    return 0;
}
