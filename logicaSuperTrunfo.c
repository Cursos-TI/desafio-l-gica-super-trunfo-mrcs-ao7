#include <stdio.h>

int main(){
    char estado1[50], estado2[50];
    char codigo1[5], codigo2[5], cidade1[50], cidade2[50];
    int pontost1, pontost2;
    unsigned long int populacao1, populacao2;
    float area1, area2, pib1, pib2;
    float dpopulacional1, dpopulacional2, pibc1, pibc2;
    float inversoDPOP1, inversoDPOP2, SuperPoder1, SuperPoder2;


    //O usuário vai adicionar as informações da Carta 1.

    printf("***** SUPER TRUNFO *****\n");
    printf("Entre com as informações da Carta 1: \n");

    printf("Estado: ");
    scanf(" %s", estado1);

    printf("Código: ");
    scanf(" %s", codigo1);

    printf("Cidade: ");
    scanf("%s", cidade1);

    printf("População: ");
    scanf("%lu", &populacao1);

    printf("Área em km2²: ");
    scanf("%f", &area1);

    printf("PIB: ");
    scanf("%f", &pib1);

    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontost1);


    //O calcúlo da densidade e o pib per capita da Carta 1.

    dpopulacional1 = (float) populacao1 / area1;
    pibc1 = (float) pib1 / populacao1;

    inversoDPOP1 = area1 / (float)populacao1;
    SuperPoder1 = (float)populacao1 + area1 + pib1 + (float)pontost1 + pibc1 + inversoDPOP1;

    printf("\n");

    
    //O usuário vai adicionar as informações da Carta 2.

    printf("Entre com as informações da Carta 2: \n");

    printf("Estado: ");
    scanf(" %s", estado2);

    printf("Código: ");
    scanf(" %s", codigo2);

    printf("Cidade: ");
    scanf("%s", cidade2);

    printf("População: ");
    scanf("%lu", &populacao2);

    printf("Área em km²: ");
    scanf("%f", &area2);

    printf("PIB: ");
    scanf("%f", &pib2);

    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontost2);


    //O calcúlo da densidade e o pib per capita da Carta 2.

    dpopulacional2 = (float) populacao2 / area2;
    pibc2 = (float) pib2 / populacao2;

    inversoDPOP2 = area2 / (float) populacao2;
    SuperPoder2 = (float)populacao2 + area2 + pib2 + (float)pontost2 + pibc2 + inversoDPOP2;


    //Informações adicionadas.

    printf("\n");
    printf("Informações das cartas concluídas!\n");
    printf("\n");

    //Mostrar as informações adicionadas pelo o usúario com a densidade e o pib per capita calculados.

    printf("Carta 1:\n");
    printf("Estado: %s\n", estado1);
    printf("Código da Carta: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %lu habitantes\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhõees\n", pib1);
    printf("Quantidade de Pontos Turísticos: %d\n", pontost1);
    printf("Densidade Populacional: %.2f hab/km²\n", dpopulacional1);
    printf("PIB per Capita: %.2f bilhões\n", pibc1);
    printf("Super Poder: %.2f\n", SuperPoder1);

    printf("\n");

    printf("Carta 2:\n");
    printf("Estado: %s\n", estado2);
    printf("Código da Carta: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %lu habitantes\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões\n", pib2);
    printf("Quantidade de Pontos Turísticos: %d\n", pontost2);
    printf("Densidade Populacional: %.2f hab/km²\n", dpopulacional2);
    printf("PIB per Capita: %.2f bilhões\n", pibc2);
    printf("Super Poder: %.2f\n", SuperPoder2);

    //
    printf("\n");
    printf("\n");
    //

    //Fazer a comparação com um dos atributos das cartas para informar o vencedor.

    printf("**Comparação entre as Cartas**\n");
    printf("(Atributo: Densidade Populacional!)\n");
    printf("Carta 1: %s (%s): %.2f hab/km²!\n", estado1, codigo1, dpopulacional1);
    printf("Carta 2: %s (%s): %.2f hab/km²!\n", estado2, codigo2, dpopulacional2);
    printf("\n");

    if(dpopulacional1 < dpopulacional2){
        printf("!!!A Carta 1 (%s) é a vencedora!!!\n", estado1);
    } else{
        printf("!!!A Carta 2 (%s) é a vencedora!!!\n", estado2);
    }

    //Fim fo código.

    printf("\n");
    printf("****FIM DE JOGO****");
    printf("\n");
    printf("\n");

    return 0; 
}
