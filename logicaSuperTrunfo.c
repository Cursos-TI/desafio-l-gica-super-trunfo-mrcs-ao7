#include <stdio.h>

//Você pode usar as cartas que já foram cadastradas no desafio anterior, 
//não é necessário implementar o cadastro novamente neste nível.
//Foque na criação do menu com switch e na lógica de comparação com if-else 
//(incluindo comparações aninhadas onde fizer sentido).

int main(){

    int start, menu;
    int populacao1 = 7000000, populacao2 = 11000000;
    float area1 = 1200, area2 = 1521;
    float dpopulacional1, dpopulacional2;
    float pib1 = 359.6, pib2 = 700;
    int pontost1 = 50, pontost2 = 30;

    dpopulacional1 = (float) populacao1 / area1;
    dpopulacional2 = (float) populacao2 / area2;



    printf("### < SUPER TRUNFO > ###\n");
    printf("\n");
    printf("Aperte 1 para Começar> ");
    scanf("%d", &start);
    printf("\n");

    switch (start)
    {
    case 1:
        printf("|  MENU  | Digite o Número Determinado Para Comparar os Atributos>\n");
        printf("1. População>\n");
        printf("2. Área>\n");
        printf("3. PIB>\n");
        printf("4. Densidade Demográfica>\n");
        printf("5. Número de Pontos Turísticos>\n");
        printf("Outro Número. Fechar o jogo> ");
        scanf("%d", &menu);
        printf("\n");

        if(menu <= 0 || menu > 5){
            printf("Você fechou o Jogo.\n  Até a próxima!\n \n");
        } else 
            if(menu == 1){
                printf("<Carta 1> Brasil (Rio de Janeiro): %d habitantes\n", populacao1);
                printf("<Carta 2> Brasil (São Paulo): %d habitantes\n", populacao2);
                 if(populacao1 > populacao2) printf("\n< A Carta 1 é a Vencedora!! >\n \n");
                 else if (populacao1 < populacao2) printf("\n< A Carta 2 é a Vencedora!! >\n \n");
                 else if (populacao1 == populacao2) printf("\n< Deu Empate!! >\n \n");       
        } else
            if(menu == 2){
                printf("<Carta 1> Brasil (Rio de Janeiro): %.0f km²\n", area1);
                printf("<Carta 2> Brasil (São Paulo): %.0f km²\n", area2);
                 if(area1 > area2) printf("\n< A Carta 1 é a Vencedora!! >\n \n");
                 else if (area1 < area2) printf("\n< A Carta 2 é a Vencedora!! >\n \n");
                 else if (area1 == area2) printf("\n< Deu Empate!! >\n \n");
        } else
            if(menu == 3){
                printf("<Carta 1> Brasil (Rio de Janeiro): R$ %.2f bilhões\n", pib1);
                printf("<Carta 2> Brasil (São Paulo): R$ %.2f bilhões\n", pib2);
                 if(pib1 > pib2) printf("\n< A Carta 1 é a Vencedora!! >\n \n");
                 else if (pib1 < pib2) printf("\n< A Carta 2 é a Vencedora!! >\n \n");
                 else if (pib1 == pib2) printf("\n< Deu Empate!! >\n \n");
        } else
            if(menu == 4){
                printf("<Carta 1> Brasil (Rio de Janeiro): %.3f hab/km²\n", dpopulacional1);
                printf("<Carta 2> Brasil (São Paulo): %.3f hab/km²\n", dpopulacional2);
                 if(dpopulacional1 < dpopulacional2) printf("\n< A Carta 1 é a Vencedora!! >\n \n");
                 else if (dpopulacional1 > dpopulacional2) printf("\n< A Carta 2 é a Vencedora!! >\n \n");
                 else if (dpopulacional1 == dpopulacional2) printf("\n< Deu Empate!! >\n \n");
        } else
            if(menu == 5){
                printf("<Carta 1> Brasil (Rio de Janeiro): %d\n", pontost1);
                printf("<Carta 2> Brasil (São Paulo):  %d\n", pontost2);
                 if(pontost1 > pontost2) printf("\n< A Carta 1 é a Vencedora!! >\n \n");
                 else if (pontost1 < pontost2) printf("\n< A Carta 2 é a Vencedora!! >\n \n");
                 else if (pontost1 == pontost2) printf("\n< Deu Empate!! >\n \n");
        }
        break;
    
    default:
        printf("Você fechou o Jogo.\n  Até a próxima!\n \n");
        break;
    }

    return 0;
}
