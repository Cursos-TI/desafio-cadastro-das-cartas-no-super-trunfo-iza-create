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
    printf("Digite os dados da primeira carta \n");

    printf("Digite o estado (Letra de A a H): \n");
    scanf("%s", &estado1);

    printf("Digite o código da carta (Letra do estado + número de 01 a 04): \n");
    scanf("%s", &cod1);

    //Impressão da carta
    printf("Carta 1:\n");
    printf("Estado: %s \n", estado1);
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    return 0;
}
