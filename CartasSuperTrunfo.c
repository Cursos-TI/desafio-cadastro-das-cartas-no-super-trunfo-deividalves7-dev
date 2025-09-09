#include <stdio.h>
    
    


typedef struct {
    char codigo[5];
    char estado[30];
    char cidade[30];
    int populacao;
    float area;
    float pib;
    int pontosTuristicos;
} Carta;

int main() {

    printf("Desafio Super Trunfo\n");

    Carta carta1 = {"A01", "Pernambuco", "Recife", 1653461, 218.0, 65.0, 10};
    Carta carta2 = {"B02", "Ceará", "Fortaleza", 2452185, 314.0, 80.0, 12};

    printf("=== Carta 1 ===\n");
    printf("Codigo: %s\n", carta1.codigo);
    printf("Estado: %s\n", carta1.estado);
    printf("Cidade: %s\n", carta1.cidade);
    printf("Populacao: %d\n", carta1.populacao);
    printf("Area: %.2f km²\n", carta1.area);
    printf("PIB: %.2f bilhoes R$\n", carta1.pib);
    printf("Pontos Turisticos: %d\n\n", carta1.pontosTuristicos);

    printf("=== Carta 2 ===\n");
    printf("Codigo: %s\n", carta2.codigo);
    printf("Estado: %s\n", carta2.estado);
    printf("Cidade: %s\n", carta2.cidade);
    printf("Populacao: %d\n", carta2.populacao);
    printf("Area: %.2f km²\n", carta2.area);
    printf("PIB: %.2f bilhoes R$\n", carta2.pib);
    printf("Pontos Turisticos: %d\n", carta2.pontosTuristicos);

    return 0;
    
}

