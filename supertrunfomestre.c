#include <stdio.h>

int main(){
    // Variaveis Primeira Carta
    int pontos1;
    unsigned long int populacao1;
    float area1, pib1;
    char estado1;
    char cidade1 [50];
    char codigo1 [4];
    float superpoder1, densidadepop1, pibpercapita1;

    // Variaveis Segunda Carta
    int pontos2;
    unsigned long int populacao2;
    float area2, pib2;
    char estado2;
    char cidade2 [50];
    char codigo2 [4];
    float superpoder2, densidadepop2, pibpercapita2;

    //Entrada de dados da primeira carta

    printf("Carta N1 \n");
    printf("Digite o estado: \n");
    scanf(" %c", &estado1);

    printf("Digite o codigo: \n");
    scanf(" %s", &codigo1);

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
    superpoder1 = populacao1 + area1 + pib1 + pontos1 + pibpercapita1 + (1 / densidadepop1);

    
    //Entrada de dados da segunda carta

     printf("Carta N2 \n");
     printf("Digite o estado: \n");
     scanf(" %c", &estado2);
 
     printf("Digite o codigo: \n");
     scanf(" %s", &codigo2);
 
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
    superpoder2 = populacao2 + area2 + pib2 + pontos2 + pibpercapita2 + (1 / densidadepop2);
    //Exibicao da comparacao
    printf("\nComparacao das Cartas:\n");
    printf("Populacao: Carta %d venceu\n", (populacao1 > populacao2) ? 1 : 2);
    printf("Pib: Carta %d venceu\n", (pib1 > pib2) ? 1 : 2);
    printf("Pontos Turisticos: Carta %d venceu\n", (pontos1 > pontos2) ? 1 : 2);
    printf("Densidade Populacional: Carta %d venceu\n", (densidadepop1 < densidadepop2) ? 1 : 2);
    printf("Pib per Capita: Carta %d venceu\n", (pibpercapita1 > pibpercapita2) ? 1 : 2);
    printf("Super Poder: Carta %d venceu\n", (superpoder1 > superpoder2) ? 1 : 2);

    return 0;
}