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
    
    printf("Bem-vindo ao Super Trunfo! Para começar, digite os dados de sua carta!\n|----Primeira Carta----|");

    printf("\nQual o estado da carta?\n");
    scanf("%c", &estado1);

    printf("Qual o codigo da carta?\n");
    scanf("%s", &codigoDaCarta1);

    printf("Qual o nome da cidade?\n");
    scanf("%s", &nomeDaCidade1);

    printf("Qual o tamanho população?\n");
    scanf("%d", &populacao1);

    printf("Qual a área?\n");
    scanf("%f", &area1);

    printf("Qual o pib?\n");
    scanf("%f", &pib1);

    printf("Qual o numero de pontos turisticos?\n");
    scanf("%d", &pontosTuristicos1);


    printf("Carta 1:\nEstado: %c\nCodigo: %s\nCidade: %s\nPopulação:%d\nArea: %f\nPib: %f\nNumero de ponto turisticos: %d", estado1, codigoDaCarta1, codigoDaCarta1, populacao1, area1, pib1, pontosTuristicos1);

    return 0;
}