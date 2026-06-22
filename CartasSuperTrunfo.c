#include <stdio.h>
    int main(){
    
    char estado;
    char codigo[50];
    char cidade[50];
    float populacao;
    float area;
    float pib;
    int turistico; 

    printf("Coloque a letra que representa o estado da sua carta: ");
    scanf(" %c", &estado);
    
    printf("Coloque o codigo do seu estado da sua carta: ");
    scanf(" %s", codigo);
    
    printf("Coloque a sua cidade da sua carta: ");
    scanf(" %s", cidade);
    
    printf("Coloque a populacao da sua carta: ");
    scanf(" %f", &populacao);
    
    printf("Coloque a area da sua carta: ");
    scanf(" %f", &area);
    
    printf("Coloque o pib da sua carta: ");
    scanf(" %f", &pib);
    
    printf("Coloque quantos pontos turisticos existem na sua carta: ");
    scanf(" %d", &turistico);
    
    printf("Carta 1: \n");
    printf("Estado da carta: %c\n", estado);
    printf("Codigo do estado: %s\n", codigo);
    printf("Cidade: %s\n", cidade);
    printf("Populacao: %.3f habitantes\n", populacao);
    printf("Area: %.3f hectares\n", area);
    printf("Pib: %.2f bilhoes de reais\n", pib);
    printf("Pontos Turisticos: %d\n", turistico);

    printf("Coloque a letra que representa o estado da sua carta: ");
    scanf(" %c", &estado);

    printf("Coloque o codigo do seu estado da sua carta: ");
    scanf(" %s", codigo);

    printf("Coloque a cidade da sua carta: ");
    scanf(" %s", cidade);

    printf("Coloque a populacao da sua carta: ");
    scanf(" %f", &populacao);

    printf("Coloque a area da sua carta: ");
    scanf(" %f", &area);

    printf("Coloque o pib da sua carta: ");
    scanf(" %f", &pib);

    printf("Coloque quantos pontos turisticos existem na sua carta: ");
    scanf(" %d", &turistico);

    printf("Carta 2: \n");
    printf("Estado da carta: %c\n", estado);
    printf("Codigo do estado: %s\n", codigo);
    printf("Cidade: %s\n", cidade);
    printf("Populacao: %.3f habitantes\n", populacao);
    printf("Area: %.3f hectares\n", area);
    printf("Pib: %.2f bilhoes de reais.\n", pib);
    printf("Pontos turisticos: %d", turistico);


   return 0;

    }

