#include <stdio.h>

int main() {
    // Variáveis da primeira carta
    char estado1;
    char codigo1[4];
    char cidade1[50];
    int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;
    
    // Variáveis da segunda carta
    char estado2;
    char codigo2[4];
    char cidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;
    
    // Entrada de dados da primeira carta
    printf("Carta N1 \n");
    printf("Estado: \n");
    scanf(" %c", &estado1);
    
    printf("Codigo da Cidade: \n");
    scanf("%s", codigo1);
    
    printf("Nome da cidade: \n");
    scanf("%s", cidade1);
    
    printf("Numero de habitantes: \n");
    scanf("%d", &populacao1);
    
    printf("Area da cidade (km²): \n");
    scanf("%f", &area1);
    
    printf("Pib da cidade (em bilhoes): \n");
    scanf("%f", &pib1);
    
    printf("Numero de pontos turisticos: \n");
    scanf("%d", &pontosTuristicos1 );
    printf("Carta 1 cadastrada! \n\n");
        
    //Entrada de dados da segunda carta
    printf("Carta N2 \n");
    printf("Estado: \n");
    scanf(" %c", &estado2);
    
    printf("Codigo da Cidade: \n");
    scanf("%s", codigo2);
    
    printf("Nome da cidade: \n");
    scanf("%s", cidade2);
    
    printf("Numero de habitantes: \n");
    scanf("%d", &populacao2);
    
    printf("Area da cidade (km²): \n");
    scanf("%f", &area2);
    
    printf("Pib da cidade (em bilhoes): \n");
    scanf("%f", &pib2);
    
    printf("Numero de pontos turisticos: \n");
    scanf("%d", &pontosTuristicos2);
    printf("Carta 2 cadastrada! \n\n");

    //Exibição das cartas 

    printf("\nCarta1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da cidade: %s\n", cidade1);
    printf("Numero de habitantes: %d\n", populacao1);
    printf("Area da cidade: %.2f\n", area1);
    printf("Pib da cidade (em bilhoes): %.2f\n", pib1);
    printf("Pontos turisticos %d\n", pontosTuristicos1);

    printf("\nCarta2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da cidade: %s\n", cidade2);
    printf("Numero de habitantes: %d\n", populacao2);
    printf("Area da cidade: %.2f\n", area2);
    printf("Pib da cidade (em bilhoes): %.2f\n", pib2);
    printf("Pontos turisticos %d\n", pontosTuristicos2);
    
    return 0;
}
