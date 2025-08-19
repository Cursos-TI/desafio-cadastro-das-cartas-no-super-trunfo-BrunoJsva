#include <stdio.h>
#include <string.h> 

int main() {
    // --- Declaração de Variáveis ---
    char estado1;
    char codigoCarta1[4];
    char nomeDaCidade1[11];
    int populacao1;
    float area1, pib1;
    int NumPontosTuristicos1;
    float densidadePopulacional1;
    float PIBPerCapita1;

    char estado2;
    char codigoCarta2[4];
    char nomeDaCidade2[11];
    int populacao2;
    float area2, pib2;
    int NumPontosTuristicos2;
    float densidadePopulacional2;
    float PIBPerCapita2;

    // --- Início do Programa e Cadastro da Carta 1 ---

    printf("\nBem-vindo ao jogo Super Trunfo de Cidades Brasileiras! \n");
    printf("Vamos começar cadastrando a primeira carta. \n\n");

    printf("Digite uma letra de 'A' a 'H' (representando um dos oito estados): ");
    scanf(" %c", &estado1);

    printf("Escolha um número de 01 a 04 e coloque a letra escolhida anteriormente na frente (ex: A01, B03): ");
    scanf("%3s", codigoCarta1);

    getchar(); // Limpa o \n que ficou no buffer
    printf("Nome da cidade (máximo de 10 caracteres): ");
    fgets(nomeDaCidade1, sizeof(nomeDaCidade1), stdin);
    nomeDaCidade1[strcspn(nomeDaCidade1, "\n")] = 0;

    printf("O numero de habitantes (número inteiro): ");
    scanf("%d", &populacao1);

    printf("A área em km² (número real): ");
    scanf("%f", &area1);

    printf("O PIB em bilhões (número real): ");
    scanf("%f", &pib1);

    printf("O número de pontos turísticos (número inteiro): ");
    scanf("%d", &NumPontosTuristicos1);

    // --- Cadastro da Carta 2 ---
    printf("\nAgora vamos cadastrar a segunda carta. \n\n");

    printf("Digite uma letra de 'A' a 'H' (representando um dos oito estados): ");
    scanf(" %c", &estado2);

    printf("Escolha um número de 01 a 04 e coloque a letra escolhida anteriormente na frente (ex: A01, B03): ");
    scanf("%3s", codigoCarta2);

    getchar(); // Limpa o \n que ficou no buffer
    printf("Nome da cidade (máximo de 10 caracteres): ");
    fgets(nomeDaCidade2, sizeof(nomeDaCidade2), stdin);
    nomeDaCidade2[strcspn(nomeDaCidade2, "\n")] = 0;

    printf("O numero de habitantes (número inteiro): ");
    scanf("%d", &populacao2);

    printf("A área em km² (número real): ");
    scanf("%f", &area2);

    printf("O PIB em bilhões (número real): ");
    scanf("%f", &pib2);

    printf("O número de pontos turísticos (número inteiro): ");
    scanf("%d", &NumPontosTuristicos2);

    // Cálculos para a Carta 1
    densidadePopulacional1 = (float)populacao1 / area1;
    PIBPerCapita1 = (pib1 * 1000000000) / (float)populacao1;

    // Cálculos para a Carta 2
    densidadePopulacional2 = (float)populacao2 / area2;
    PIBPerCapita2 = (pib2 * 1000000000) / (float)populacao2;

    // --- Exibição dos Dados Cadastrados ---
    printf("\n\nAs cartas cadastradas foram:");

    printf("\n\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigoCarta1);
    printf("Nome da Cidade: %s\n", nomeDaCidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", NumPontosTuristicos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadePopulacional1);
    printf("PIB per Capita: %.2f reais\n", PIBPerCapita1);

    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigoCarta2);
    printf("Nome da Cidade: %s\n", nomeDaCidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", NumPontosTuristicos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadePopulacional2);
    printf("PIB per Capita: %.2f reais\n", PIBPerCapita2);

    return 0;
}
