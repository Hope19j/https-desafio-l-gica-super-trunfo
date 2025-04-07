#include <stdio.h>


int main() {
    char estado;
    char cod[4];
    char nomeCidade[50];
    int populacao;
    float area;
    int pontosTuristicos;

    // segunda carta
    char estado2;
    char cod2[4];
    char nomeCidade2[50];
    int populacao2;
    float area2;
    int pontosTuristicos2;


    // Cadastro da primeira carta
    printf("Cadastro da Carta 1:\n");
    printf("Estado de (A-H): \n");
    scanf(" %c", &estado); 
    printf("Código da carta (A01): \n");
    scanf("%s", cod);
    printf("Nome da Cidade: \n");
    scanf("%s", nomeCidade);
    printf("População: \n");
    scanf("%d", &populacao);
    printf("Área (em km²): \n");
    scanf("%f", &area);
    printf("Número de Pontos Turísticos: \n");
    scanf("%d", &pontosTuristicos);

    // Cadastro da segunda carta
    printf("Cadastro da Carta 2:\n");
    printf("Estado de (A-H): \n");
    scanf(" %c", &estado2); 
    printf("Código da carta (A01): \n");
    scanf("%s", cod2);
    printf("Nome da Cidade:");
    scanf("%s", nomeCidade2); 
    scanf("%d", &populacao2);
    printf("Área (em km²):");
    scanf("%f", &area2);
    printf("Número de Pontos Turísticos:");
    scanf("%d", &pontosTuristicos2);
    return 0;

}
    
