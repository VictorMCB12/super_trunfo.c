#include <stdio.h>

int main(){
    // Variaveis Primeira Carta
    int populacao1, pontos1;
    float area1, pib1;
    char pais1 [50];
    float densidadeDemo1;

    // Variaveis Segunda Carta
    int populacao2, pontos2;
    float area2, pib2;
    char pais2 [50];
    float densidadeDemo2;


    //Entrada de dados da primeira carta

    printf("Carta N1 \n");

    printf("Digite o nome do pais: \n");
    scanf(" %s", pais1);

    printf("Digite o numero de habitantes: \n");
    scanf("%d", &populacao1);

    printf("Digite a Area: \n");
    scanf("%f", &area1);

    printf("Digite o pib: \n");
    scanf("%f", &pib1);

    printf ("Digite o numero de pontos turisticos: \n");
    scanf("%d", &pontos1);
    printf("Carta 1 cadastrada! \n\n");

    //Calculo de densidade primeira carta
    densidadeDemo1 = populacao1 / area1;
   
    
    //Entrada de dados da segunda carta

     printf("Carta N2 \n");
     printf("Digite o nome do pais: \n");
     scanf(" %s", pais2);
 
     printf("Digite o numero de habitantes: \n");
     scanf("%d", &populacao2);
 
     printf("Digite a Area: \n");
     scanf("%f", &area2);
 
     printf("Digite o pib: \n");
     scanf("%f", &pib2);
 
     printf ("Digite o numero de pontos turisticos: \n");
     scanf("%d", &pontos2);
     printf("Carta 2 cadastrada! \n\n");

    //Calculo de densidade segunda carta
    densidadeDemo2 = populacao2 / area2;
   

   //Exibicao das cartas

   printf("\nCarta 1:\n");
   printf("Nome da Cidade: %s\n", pais1);
   printf("População: %d\n", populacao1);
   printf("Area: %.2f km²\n", area1);
   printf("Pib: %.2f\n", pib1);
   printf("Numero de Pontos Turisticos: %d\n", pontos1);
   printf("Densidade demografica: %.2f hab/km²\n", densidadeDemo1);

   printf("\nCarta 2:\n");
   printf("Nome da Cidade: %s\n", pais2);
   printf("População: %d\n", populacao2);
   printf("Area: %.2f km²\n", area2);
   printf("Pib: %.2f\n", pib2);
   printf("Numero de Pontos Turisticos: %d\n", pontos2);
   printf("Densidade demografica: %.2f hab/km²\n", densidadeDemo2);
  

  //Menu 
  int opcao;
  printf("Escolha um atributo para comparar: \n");
  printf("1. Populacao\n");
  printf("2. Area\n");
  printf("3. Pib\n");
  printf("4. Pontos Turisticos\n");
  printf("5. Densidade Demografica\n");
  printf("Opcao: \n");
  scanf("%d", &opcao);

  switch (opcao) {
  case 1:
    printf("Atribudo Comparado: Populacao\n");
    printf("%s: %d habitantes\n", pais1, populacao1);
    printf("%s: %d habitantes\n", pais2, populacao2);
    if (populacao1 > populacao2)    
    printf("%s Venceu!\n", pais1);
    else if (populacao1 < populacao2)
    printf("%s Venceu!\n", pais2);
    else 
    printf ("Empate!!\n");
    break;
   
    case 2:
    printf("Atribudo Comparado: Area\n");
    printf("%s: %.2f km²\n", pais1, area1);
    printf("%s: %.2f km²\n", pais2, area2);
    if (area1 > area2)   
    printf("%s Venceu!\n", pais1);
    else if (area1 < area2)
    printf("%s Venceu!\n", pais2);
    else 
    printf ("Empate!!\n");
    break;
    
    case 3:
    printf("Atribudo Comparado: Pib\n");
    printf("%s: %.2f $\n", pais1, pib1);
    printf("%s: %.2f $\n", pais2, pib2);    
    if (pib1 > pib2)   
    printf("%s Venceu!\n", pais1);
    else if (pib1 < pib2)
    printf("%s Venceu!\n", pais2);
    else 
    printf ("Empate!!\n");
    break;
    
    case 4:
    printf("Atribudo Comparado: Pontos Turisticos\n");
    printf("%s: %d pontos turisticos\n", pais1, pontos1);
    printf("%s: %d pontos turisticos\n", pais2, pontos2);
    if (pontos1 > pontos2)   
    printf("%s Venceu!\n", pais1);
    else if (pontos1 < pontos2)
    printf("%s Venceu!\n", pais2);
    else 
    printf ("Empate!!\n");
    break;
    
    case 5:
    printf("Atributo Comparado: Densidade Demográfica\n");
    printf("%s: %.2f hab/km²\n", pais1, densidadeDemo1);
    printf("%s: %.2f hab/km²\n", pais2, densidadeDemo2);
    if (densidadeDemo1 < densidadeDemo2)   
    printf("%s Venceu!\n", pais1);
    else if (densidadeDemo1 > densidadeDemo2)
    printf("%s Venceu!\n", pais2);
    else 
    printf ("Empate!!\n");
    break;

    default:
    printf("Opcao Invalida \n");
    break;
  
}
 return 0;
}