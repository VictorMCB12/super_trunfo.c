#include <stdio.h>

int main(){
    // Variaveis Primeira Carta
    int populacao1, pontos1;
    float area1, pib1;
    char estado1;
    char cidade1 [50];
    char codigo1 [4];
    float densidadepop1, pibpercapita1;

    // Variaveis Segunda Carta
    int populacao2, pontos2;
    float area2, pib2;
    char estado2;
    char cidade2 [50];
    char codigo2 [4];
    float densidadepop2, pibpercapita2;

    //Entrada de dados da primeira carta

    printf("Carta N1 \n");
    printf("Digite o estado: \n");
    scanf("%c", &estado1);

    printf("Digite o codigo: \n");
    scanf("%s", &codigo1);

    printf("Digite o nome da cidade: \n");
    scanf("%s", &cidade1);

    printf("Digite o numero de habitantes: \n");
    scanf("%d", &populacao1);

    printf("Digite a Area: \n");
    scanf("%f", &area1);

    printf("Digite o pib (Em bilhoes): \n");
    scanf("%f", &pib1);

    printf ("Digite o numero de pontos turisticos: \n");
    scanf("%d", &pontos1);
    printf("Carta 1 cadastrada! \n\n");

    //Calculo de densidade e pibpercapita primeira carta
    densidadepop1 = populacao1 / area1;
    pibpercapita1 = (pib1 * 1000000000) / populacao1;
    
    //Entrada de dados da segunda carta

     printf("Carta N2 \n");
     printf("Digite o estado: \n");
     scanf(" %c", &estado2);
 
     printf("Digite o codigo: \n");
     scanf("%s", &codigo2);
 
     printf("Digite o nome da cidade: \n");
     scanf("%s", &cidade2);
 
     printf("Digite o numero de habitantes: \n");
     scanf("%d", &populacao2);
 
     printf("Digite a Area: \n");
     scanf("%f", &area2);
 
     printf("Digite o pib (Em bilhoes): \n");
     scanf("%f", &pib2);
 
     printf ("Digite o numero de pontos turisticos: \n");
     scanf("%d", &pontos2);
     printf("Carta 2 cadastrada! \n\n");

    //Calculo de densidade e pibpercapita segunda carta
    densidadepop2 = populacao2 / area2;
    pibpercapita2 = (pib2 * 1000000000) / populacao2;

    //Exibicao das cartas

    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Area: %.2f km²\n", area1);
    printf("Pib: %.2f\n", pib1);
    printf("Numero de Pontos Turisticos: %d\n", pontos1);
    printf("Densidade Populacional: %.2f hab/km²\n" , densidadepop1);
    printf("Pib per Capita: %.2f reais\n", pibpercapita1);

    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Area: %.2f km²\n", area2);
    printf("Pib: %.2f\n", pib2);
    printf("Numero de Pontos Turisticos: %d\n", pontos2);
    printf("Densidade Populacional: %.2f hab/km²\n" , densidadepop2);
    printf("Pib per Capita: %.2f reais\n", pibpercapita2);

    return 0;

}