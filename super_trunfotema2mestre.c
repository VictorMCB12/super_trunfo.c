#include <stdio.h>

int main(){
    // Variaveis Primeira Carta
    int populacao1, pontos1, resultado1;
    float area1, pib1;
    char pais1 [50];
    float densidadeDemo1;

    // Variaveis Segunda Carta
    int populacao2, pontos2, resultado2;
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
   printf("Nome do País: %s\n", pais1);
   printf("População: %d\n", populacao1);
   printf("Area: %.2f km²\n", area1);
   printf("Pib: %.2f\n", pib1);
   printf("Numero de Pontos Turisticos: %d\n", pontos1);
   printf("Densidade demografica: %.2f hab/km²\n", densidadeDemo1);

   printf("\nCarta 2:\n");
   printf("Nome do País: %s\n", pais2);
   printf("População: %d\n", populacao2);
   printf("Area: %.2f km²\n", area2);
   printf("Pib: %.2f\n", pib2);
   printf("Numero de Pontos Turisticos: %d\n", pontos2);
   printf("Densidade demografica: %.2f hab/km²\n", densidadeDemo2);
  

  //Menu 
  int opcao;
  printf("Escolha o primeiro atributo para comparar: \n");
  printf("1. Populacao\n");
  printf("2. Area\n");
  printf("3. Pib\n");
  printf("4. Pontos Turisticos\n");
  printf("5. Densidade Demografica\n");
  printf("Opcao: \n");
  scanf("%d", &opcao);

  switch (opcao) {
  case 1:
    printf("Atributo Comparado: Populacao\n");
    printf("%s: %d habitantes\n", pais1, populacao1);
    printf("%s: %d habitantes\n", pais2, populacao2);
    resultado1 = populacao1 > populacao2 ? 1 : 0;  
    break;
   
    case 2:
    printf("Atributo Comparado: Area\n");
    printf("%s: %.2f km²\n", pais1, area1);
    printf("%s: %.2f km²\n", pais2, area2);
    resultado1 = area1 > area2 ? 1 : 0; 
    break;
    
    case 3:
    printf("Atributo Comparado: Pib\n");   
    printf("%s: %.2f\n", pais1, pib1);
    printf("%s: %.2f\n", pais2, pib2);
    resultado1 = pib1 > pib2 ? 1 : 0;  

    break;
    
    case 4:
    printf("Atributo Comparado: Pontos Turisticos\n");
    printf("%s: %d pontos turisticos\n", pais1, pontos1);
    printf("%s: %d pontos turisticos\n", pais2, pontos2);
    resultado1 = pontos1 > pontos2 ? 1 : 0;  
    break;
    
    case 5:
    printf("Atributo Comparado: Densidade Demográfica\n");
    printf("%s: %.2f hab/km²\n", pais1, densidadeDemo1);
    printf("%s: %.2f hab/km²\n", pais2, densidadeDemo2);
    resultado1 = densidadeDemo1 < densidadeDemo2 ? 1 : 0;  
    break;

    default:
    printf("Opcao Invalida \n");
    break; 
  }

  //Menu 2
  int opcao2;
  printf("Escolha o segundo atributo para comparar: \n");
  printf("Atencao: O atributo escolhido deve ser diferente do primeiro.\n");
  printf("1. Populacao\n");
  printf("2. Area\n");
  printf("3. Pib\n");
  printf("4. Pontos Turisticos\n");
  printf("5. Densidade Demografica\n");
  printf("Opcao: \n");
  scanf("%d", &opcao2);

  if(opcao == opcao2)
  {
    printf("Voce escolheu o mesmo atributo!");
  } else {
    switch (opcao2) {
        case 1:
        printf("Atributo Comparado: Populacao\n");
        printf("%s: %d habitantes\n", pais1, populacao1);
        printf("%s: %d habitantes\n", pais2, populacao2);
        resultado2 = populacao1 > populacao2 ? 1 : 0;  
        break;
         
        case 2:
        printf("Atributo Comparado: Area\n");
        printf("%s: %.2f km²\n", pais1, area1);
        printf("%s: %.2f km²\n", pais2, area2);
        resultado2 = area1 > area2 ? 1 : 0; 
        break;
          
        case 3:
        printf("Atributo Comparado: Pib\n");    
        printf("%s: %.2f\n", pais1, pib1);
        printf("%s: %.2f\n", pais2, pib2);
        resultado2 = pib1 > pib2 ? 1 : 0;  
        break;
          
        case 4:
        printf("Atributo Comparado: Pontos Turisticos\n");
        printf("%s: %d pontos turisticos\n", pais1, pontos1);
        printf("%s: %d pontos turisticos\n", pais2, pontos2);
        resultado2 = pontos1 > pontos2 ? 1 : 0;  
        break;
          
        case 5:
        printf("Atributo Comparado: Densidade Demográfica\n");
        printf("%s: %.2f hab/km²\n", pais1, densidadeDemo1);
        printf("%s: %.2f hab/km²\n", pais2, densidadeDemo2);
        resultado2 = densidadeDemo1 < densidadeDemo2 ? 1 : 0;  
        break;
      
        default:
        printf("Opcao Invalida \n");
        break;
    }
    //Soma dos atributos
    float soma1 = 0, soma2 = 0;
    
    switch (opcao)
    {
    case 1: soma1+= populacao1; soma2 += populacao2;
        break;
    case 2: soma1+= area1; soma2 += area2;
        break;
    case 3: soma1+= pib1; soma2 += pib2;
        break;
    case 4: soma1+= pontos1; soma2 += pontos2;
        break;
    case 5: soma1+= densidadeDemo1; soma2 += densidadeDemo2;
    }

    switch (opcao2)
    {
    case 1: soma1+= populacao1; soma2 += populacao2;
        break;
    case 2: soma1+= area1; soma2 += area2;
        break;
    case 3: soma1+= pib1; soma2 += pib2;
        break;
    case 4: soma1+= pontos1; soma2 += pontos2;
        break;
    case 5: soma1+= densidadeDemo1; soma2 += densidadeDemo2;
    }

    printf("\nSoma dos atributos escolhidos:\n");
    printf("%s: %.2f\n", pais1, soma1);
    printf("%s: %.2f\n", pais2, soma2);

    
    // Vencedor
      if (resultado1 && resultado2)
      {
        printf("Parabens, %s  venceu, e infelizmente %s perdeu!\n", pais1, pais2);
      } else if (resultado1 == 0 && resultado2 == 0){
        printf("Parabens, %s  venceu, e infelizmente %s perdeu!\n", pais2, pais1);
      } else {
        printf("Houve empate entre %s e %s!\n", pais1, pais2);
      }
    }
  

 return 0;
}
