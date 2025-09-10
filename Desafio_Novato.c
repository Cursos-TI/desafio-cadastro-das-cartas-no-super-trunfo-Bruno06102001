#include <stdio.h>

int main()
{
    // Variaveis da Carta 1
    char Estado;
    char CodigoDaCarta [4];
    char NomeDaCidade[30];
    int Populacao, PontosTuristicos;
    float Area, PIB;

     // Variaveis da Carta 2
    char Estado2;
    char CodigoDaCarta2 [4];
    char NomeDaCidade2[30];
    int Populacao2, PontosTuristicos2;
    float Area2, PIB2;
    
    // --- Entrada de dados da Carta 1 ---
    printf("--- CARTA 1 ---\n");

    printf("Digite uma letra de A a H para apresentar o estado:");
    scanf(" %c", &Estado);

    printf("Digite a letra do estado seguida de um número de 01 a 04 (ex:A01,B03):");
    scanf("%s", &CodigoDaCarta);

    printf("Digite o nome da cidade:");
    scanf(" %[^\n]", &NomeDaCidade);

    printf("Digite o número de habitantes da cidade:");
    scanf("%d", &Populacao);

    printf("Digite a área da cidade em (km²) quilômetros quadrados:");
    scanf("%f", &Area);

    printf("Digite valor do produto interno bruto da cidade:");
    scanf("%f", &PIB);

    printf("Digite a quantidade de pontos turísticos na cidade:");
    scanf("%d", &PontosTuristicos);
    printf("\n\n");

// --- Entrada de dados da Carta 2 ---
    printf("--- CARTA 2 ---\n");

    printf("Digite uma letra de A a H para apresentar o estado:");
    scanf(" %c", &Estado2);

    printf("Digite a letra do estado seguida de um número de 01 a 04 (ex:A01,B03):");
    scanf("%s", &CodigoDaCarta2);

    printf("Digite o nome da cidade:");
    scanf(" %[^\n]", &NomeDaCidade2);

    printf("Digite o número de habitantes da cidade:");
    scanf("%d", &Populacao2);

    printf("Digite a área da cidade em (km²) quilômetros quadrados:");
    scanf("%f", &Area2);

    printf("Digite valor do produto interno bruto da cidade:");
    scanf("%f", &PIB2);

    printf("Digite a quantidade de pontos turísticos na cidade:");
    scanf("%d", &PontosTuristicos2);
    printf("\n\n\n");


    // --- Saída formatada da Carta 1---
    printf ("Carta 1: \n");
    printf ("Estado: %c\n", Estado);
    printf ("Código: %s\n", CodigoDaCarta);
    printf ("Nome da Cidade: %s\n", NomeDaCidade);
    printf ("População: %d\n", Populacao);
    printf ("Área: %.2f Km²\n", Area);
    printf ("PIB: %.2f bilhões de reais\n", PIB);
    printf ("Número de Pontos Turísticos: %d\n\n", PontosTuristicos);


     // --- Saída formatada da Carta 2---
    printf ("Carta 2: \n");
    printf ("Estado: %c\n", Estado2);
    printf ("Código: %s\n", CodigoDaCarta2);
    printf ("Nome da Cidade: %s\n", NomeDaCidade2);
    printf ("População: %d\n", Populacao2);
    printf ("Área: %.2f Km²\n", Area2);
    printf ("PIB: %.2f bilhões de reais\n", PIB2);
    printf ("Número de Pontos Turísticos: %d\n", PontosTuristicos2);

    return 0;
}
