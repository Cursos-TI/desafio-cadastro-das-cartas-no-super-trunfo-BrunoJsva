// Inclui a biblioteca padrão de entrada e saída (Standard Input/Output),
// que é necessária para usar funções como printf e scanf.
#include <stdio.h>

// A função main é o ponto de entrada de qualquer programa em C.
// É aqui que a execução do código começa.
int main() {
    // --- Declaração de Variáveis ---
    // Variáveis para armazenar os dados da primeira carta.
    char estado1;
    char codigoCarta1;
    char nomeDaCidade1[10];
    int populacao1;
    float area1;
    float pib1;
    int NumPontosTuristicos1;

    // Variáveis para armazenar os dados da segunda carta.
    char estado2;
    char codigoCarta2;
    char nomeDaCidade2[10];
    int populacao2;
    float area2;
    float pib2;
    int NumPontosTuristicos2;

    // --- Início do Programa e Cadastro da Carta 1 ---

    // Imprime uma mensagem de boas-vindas ao usuário.
    printf("\nBem-vindo ao jogo Super Trunfo de Cidades Brasileiras! \n");
    printf("Vamos começar cadastrando a primeira carta. \n\n");

    // Pede e lê a letra que representa o estado.
    printf("Digite uma letra de 'A' a 'H' (representando um dos oito estados). \n");
    scanf(" %c", &estado1); // O espaço antes de %c ignora quebras de linha ou espaços anteriores.

    // Pede e lê o caractere do código da carta.
    printf("Escolha um número de 01 a 04 e coloque a letra escolhida anteriormente na frente (ex: A01, B03) \n");
    scanf(" %c", &codigoCarta1);

    // Bloco para limpar o buffer de entrada SEM USAR 'while' ou 'for'.
    // O asterisco (*) em "%*[^\n]" instrui o scanf a LER, mas DESCARTAR,
    // todos os caracteres até encontrar uma quebra de linha (\n).
    scanf("%*[^\n]");
    // Esta segunda chamada descarta o próprio caractere de quebra de linha (\n) que sobrou.
    scanf("%*c");
    // Com isso, o buffer fica limpo para a próxima leitura.

    // Pede e lê o nome da cidade.
    printf("Nome da cidade (máximo de 10 caracteres): \n");
    scanf(" %9s", nomeDaCidade1); // %9s limita a leitura para 9 caracteres para evitar estourar o array.

    // Pede e lê o número de habitantes.
    printf("O numero de habitantes (número inteiro): \n");
    scanf(" %d", &populacao1);

    // Pede e lê a área da cidade.
    printf("A área em km² (número real): \n");
    scanf(" %f", &area1);

    // Pede e lê o PIB da cidade.
    printf("O PIB em bilhões (número real): \n");
    scanf(" %f", &pib1);

    // Pede e lê o número de pontos turísticos.
    printf("O número de pontos turísticos (número inteiro): \n");
    scanf(" %d", &NumPontosTuristicos1);

    // --- Cadastro da Carta 2 ---

    // Inicia o processo de cadastro para a segunda carta.
    printf("\nAgora vamos cadastrar a segunda carta. \n\n");

    // Pede e lê os dados da segunda carta, seguindo a mesma lógica da primeira.
    printf("Digite uma letra de 'A' a 'H' (representando um dos oito estados). \n");
    scanf(" %c", &estado2);

    printf("Escolha um número de 01 a 04 e coloque a letra escolhida anteriormente na frente (ex: A01, B03) \n");
    scanf(" %c", &codigoCarta2);
    
    // Limpa o buffer de entrada novamente, usando a mesma técnica com scanf.
    scanf("%*[^\n]");
    scanf("%*c");

    printf("Nome da cidade (máximo de 10 caracteres): \n");
    scanf(" %9s", nomeDaCidade2);

    printf("O numero de habitantes (número inteiro): \n");
    scanf(" %d", &populacao2);

    printf("A área em km² (número real): \n");
    scanf(" %f", &area2);

    printf("O PIB em bilhões (número real): \n");
    scanf(" %f", &pib2);

    printf("O número de pontos turísticos (número inteiro): \n");
    scanf(" %d", &NumPontosTuristicos2);

    // --- Exibição dos Dados Cadastrados ---

    // Imprime um cabeçalho para a seção de resultados.
    printf("\n\nAs cartas cadastradas foram:");

    // Imprime os detalhes da Carta 1 de forma organizada, um por linha.
    printf("\n\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %c%c\n", estado1, codigoCarta1); // Combina o estado e o código para formar o código completo.
    printf("Nome da Cidade: %s\n", nomeDaCidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1); // %.2f formata o número para ter duas casas decimais.
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", NumPontosTuristicos1);

    // Imprime os detalhes da Carta 2 da mesma forma.
    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %c%c\n", estado2, codigoCarta2);
    printf("Nome da Cidade: %s\n", nomeDaCidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", NumPontosTuristicos2);

    // Retorna 0 para indicar que o programa foi executado com sucesso.
    return 0;
}
