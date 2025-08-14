#include <stdio.h>

int main(){
    int start, menu1, menu2, opcao1, opcao2;
    float resultado1, resultado2, resultadoAg, resultadoBr;

    int populacaoC1 = 212, populacaoC2 = 46;
    float areaC1 = 8.515, areaC2 = 2.780;
    float pibC1 = 2.18, pibC2 = 0.63;
    int pontosTC1 = 30, pontosTC2 = 120;
    float densidadeC1, densidadeC2;

    // Cálculo da Densidade Demográfica //
    densidadeC1 = (float) populacaoC1 / areaC1;
    densidadeC2 = (float) populacaoC2 / areaC2;


    // Menu de Inicialização do JOGO //
    printf("### < SUPER TRUNFO > ###\n");
    printf("\n");
    printf("Aperte 1 para Começar> ");
    scanf("%d", &start);
    printf("\n");

    // Decição do Jogador em começar ou fechar o JOGO //
    // Menu de decisão do Jogador //
    switch (start)
    {
    case 1:
        printf("| MENU | Digite o Número da Opção Desejável> \n \n");
        printf("1. Embate de Atributos>\n");
        printf("2. Regras>\n");
        printf("3. Sair do Jogo> ");
        scanf("%d", &menu1);

        // Opções escolhidas //
        switch (menu1)
        {
        case 1: // A Escolha dos Atributos //
            printf("\n| Embate entre as Cartas!! |\n");
            printf("Selecione dois Atributos para Obter o Resultado da Rodada>\n");
            printf("\n1. População>\n");
            printf("2. Área>\n");
            printf("3. Densidade Demográfica>\n");
            printf("4. PIB\n");
            printf("5. Pontos Turísticos> \n \n> ");
            scanf("%d", &opcao1);
            printf("> ");
            scanf("%d", &opcao2);

            // Garantia de não ter repetições ou opções inválidas //
            printf("\n");
            if(opcao1 < 1 || opcao1 > 5 || opcao2 < 1 || opcao2 > 5) {
                printf("Comparação com opções inexistentes são inválidas!\n \n");
            } else

            if(opcao1 == opcao2){printf("Comparações entre os mesmos Atributos são inválidas!\n \n");}
            else{
            // Comparação do Atributo 1 //
            if(opcao1 == 1){ 
                resultado1 = populacaoC1;
                resultado2 = populacaoC2;
                printf("Carta 1 (Brasil)> População: %d milhões de habitantes\n", populacaoC1);
            }
            else if(opcao1 == 2){ 
                resultado1 = areaC1;
                resultado2 = areaC2;
                printf("Carta 1 (Brasil)> Área: %.3f milhões de km²\n", areaC1);
            }
            else if(opcao1 == 3){ 
                resultado1 = densidadeC1;
                resultado2 = densidadeC2;
                printf("Carta 1 (Brasil)> Densidade Demográfica: %.2f hab/km²\n", densidadeC1);
            }
            else if(opcao1 == 4){ 
                resultado1 = pibC1;
                resultado2 = pibC2;
                printf("Carta 1 (Brasil)> PIB: US$ %.2f trilhões\n", pibC1);
            }
            else if(opcao1 == 5){
                resultado1 = pontosTC1;
                resultado2 = pontosTC2;
                printf("Carta 1 (Brasil)> Quantidade de Pontos Turísticos (Capital): %d\n", pontosTC1);
            }

            //==========================================================================================

            if(opcao1 == 1){
                printf("Carta 2 (Argentina)> População: %d milhões de habitantes\n", populacaoC2);
            }
            else if(opcao1 == 2){
                printf("Carta 2 (Argentina)> Área: %.3f milhões de km²\n", areaC2);
            }
            else if(opcao1 == 3){ 
                printf("Carta 2 (Argentina)> Densidade Demográfica: %.2f hab/km²\n", densidadeC2);
            }
            else if(opcao1 == 4){
                printf("Carta 2 (Argentina)> PIB: US$ %.2f trilhões\n", pibC2);
            }
            else if(opcao1 == 5){ 
                printf("Carta 2 (Argentina)> Quantidade de Pontos Turísticos (Capital): %d\n", pontosTC2);
            }
            if((resultado1 == resultado2)){ // Caso haja Empate //
                printf("< EMPATE NO EMBATE!! >\n");
            } else
            
            if(opcao1 == 3){ // Vencedor da Primeira Comparação (Densidade Demográfica) //
                (resultado1 < resultado2) ? printf("< A Carta 1 Venceu o Primeiro Embate >\n") :
                                            printf("< A Carta 2 Venceu o Primeiro Embate >\n");
            } else{ // Vencedor da Primeira Comparação (Geral) //
                (resultado1 > resultado2) ? printf("< A Carta 1 Venceu o Primeiro Embate >\n") :
                                            printf("< A Carta 2 Venceu o Primeiro Embate >\n");
            } printf("\n");
            
            //=======================================================================================

            // Comparação do Atributo 2
            if(opcao2 == 1){ 
                resultado1 += populacaoC1;
                resultado2 += populacaoC2;
                resultadoBr = populacaoC1;
                resultadoAg = populacaoC2;
                printf("Carta 1 (Brasil)> População: %d milhões de habitantes\n", populacaoC1);
            }
            else if(opcao2 == 2){ 
                resultado1 += areaC1;
                resultado2 += areaC2;
                resultadoBr = areaC1;
                resultadoAg = areaC2;
                printf("Carta 1 (Brasil)> Área: %.3f milhões de km²\n", areaC1);
            }
            else if(opcao2 == 3){ 
                resultado1 += densidadeC1;
                resultado2 += densidadeC2;
                resultadoBr = densidadeC1;
                resultadoAg = densidadeC2;
                printf("Carta 1 (Brasil)> Densidade Demográfica: %.2f hab/km²\n", densidadeC1);
            }
            else if(opcao2 == 4){ 
                resultado1 += pibC1;
                resultado2 += pibC2;
                resultadoBr = pibC1;
                resultadoAg = pibC2;
                printf("Carta 1 (Brasil)> PIB: US$ %.2f trilhões\n", pibC1);
            }
            else if(opcao2 == 5){ 
                resultado1 += pontosTC1;
                resultado2 += pontosTC2;
                resultadoBr = pontosTC1;
                resultadoAg = pontosTC2;
                printf("Carta 1 (Brasil)> Quantidade de Pontos Turísticos (Capital): %d\n", pontosTC1);
            }

            //===========================================================================================

            if(opcao2 == 1){
                printf("Carta 2 (Argentina)> População: %d milhões de habitantes\n", populacaoC2);
            }
            else if(opcao2 == 2){
                printf("Carta 2 (Argentina)> Área: %.3f milhões de km²\n", areaC2);
            }
            else if(opcao2 == 3){ 
                printf("Carta 2 (Argentina)> Densidade Demográfica: %.2f hab/km²\n", densidadeC2);
            }
            else if(opcao2 == 4){ 
                printf("Carta 2 (Argentina)> PIB: US$ %.2f trilhões\n", pibC2);
            }
            else if(opcao2 == 5){ 
                printf("Carta 2 (Argentina)> Quantidade de Pontos Turísticos (Capital): %d\n", pontosTC2);
            }

            if((resultadoBr == resultadoAg)){ // Caso haja Empate //
                printf("< EMPATE NO EMBATE!! >\n");
            } else

            if(opcao2 == 3){ // Vencedor da Primeira Comparação (Densidade Demográfica) //
                (resultadoBr < resultadoAg) ? printf("< A Carta 1 Venceu o Segundo Embate >\n") :
                                              printf("< A Carta 2 Venceu o Segundo Embate >\n");
            } else{ // Vencedor da Primeira Comparação (Geral) //
                (resultadoBr > resultadoAg) ? printf("< A Carta 1 Venceu o Segundo Embate >\n") :
                                              printf("< A Carta 2 Venceu o Segundo Embate >\n");
            } printf("\n");


            // Soma dos Atributos //
            printf("Soma dos Atributos Escolhidos: Carta 1: %.2f\n", resultado1);
            printf("Soma dos Atributos Escolhidos: Carta 2: %.2f\n", resultado2);

            // O Ganhador do Embate (Geral) //
            if((resultado1 == resultado2)){
                printf("< EMPATE NO EMBATE!! >\n");
            } else
            (resultado1 > resultado2) ? printf("< A CARTA 1 (Brasil) É A VENCEDORA!!!!! >\n") :
                                        printf("< A CARTA 2 (Argentina) É A VENCEDORA!!!!! >\n");

            printf("\n FIM DE JOGO.\nAté a próxima!\n \n");
            }
            break;

        case 2: // Regras do JOGO //
            printf("\n| REGRAS |\n");
            printf("\n* O jogador irá escolher dois atributo para a comparação individual.\n");
            printf("* Após a comparação, os valores do dois atributos serão somados.\n");
            printf("* A carta com a maior soma vence a rodada.\n \n");
            break;
        
        default:
            printf("\nVocê fechou o Jogo.\n  Até a próxima!\n \n");
            break;
        }
        break;
    
    default:
        printf("Você fechou o Jogo.\n  Até a próxima!\n \n");
        break;
    }
    return 0;
}