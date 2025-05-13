#include <stdio.h>

int main(){
    
    //variaveis das cartas
    char estado1, estado2;
    char codigoDaCarta1[3], codigoDaCarta2[3];
    char nomeDaCidade1[20], nomeDaCidade2[20];
    int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int pontosTuristicos1, pontosTuristicos2;
    float densidadePopulacional1, densidadePopulacional2; 
    float pibPerCapita1, pibPerCapita2; 
    
    //Salvando os dados da primeira carta
    printf("Bem-vindo ao Super Trunfo! Para começar, digite os dados de sua carta!\n|----Primeira Carta----|");

    printf("\nQual o estado da carta? ");
    scanf(" %c", &estado1);

    printf("Qual o codigo da carta? ");
    scanf("%s", &codigoDaCarta1);

    printf("Qual o nome da cidade? ");
    scanf("%s", &nomeDaCidade1);

    printf("Qual o tamanho população? ");
    scanf("%d", &populacao1);

    printf("Qual a área? ");
    scanf("%f", &area1);

    printf("Qual o pib? ");
    scanf("%f", &pib1);

    printf("Qual o numero de pontos turisticos? ");
    scanf("%d", &pontosTuristicos1);

    //Salvando os dados da segunda carta
    printf("\n|----Segunda Carta----|");

    printf("\nQual o estado da carta? ");
    scanf(" %c", &estado2);

    printf("Qual o codigo da carta? ");
    scanf("%s", &codigoDaCarta2);

    printf("Qual o nome da cidade? ");
    scanf("%s", &nomeDaCidade2);

    printf("Qual o tamanho população? ");
    scanf("%d", &populacao2);

    printf("Qual a área? ");
    scanf("%f", &area2);

    printf("Qual o pib? ");
    scanf("%f", &pib2);

    printf("Qual o numero de pontos turisticos? ");
    scanf("%d", &pontosTuristicos2);

    //calculos
    densidadePopulacional1 = populacao1/area1; 
    densidadePopulacional2 = populacao2/area2;
    pibPerCapita1 = pib1/populacao1;
    pibPerCapita2 = pib2/populacao2;

    //monstrando os dados da primeira carta no terminal
    printf("Carta 1:\nEstado: %c\nCodigo: %s\nCidade: %s\nPopulação:%d\nArea: %.2f\nPib: %.2f\nNumero de ponto turisticos: %d\nDensidade populacional: %.2f hab/km²\nPib per capita: %.2f", estado1, codigoDaCarta1, codigoDaCarta1, populacao1, area1, pib1, pontosTuristicos1, densidadePopulacional1, pibPerCapita1);

    //monstrando os dados da segunda carta no terminal
    printf("Carta 2:\nEstado: %c\nCodigo: %s\nCidade: %s\nPopulação:%d\nArea: %.2f\nPib: %.2f\nNumero de ponto turisticos: %d\nDensidade populacional: %.2f hab/km²\nPib per capita: %.2f", estado2, codigoDaCarta2, codigoDaCarta2, populacao2, area2, pib2, pontosTuristicos2, densidadePopulacional2, pibPerCapita2);


    return 0;
}