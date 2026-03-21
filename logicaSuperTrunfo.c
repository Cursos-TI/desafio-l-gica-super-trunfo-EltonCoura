#include <stdio.h>

int main(){

    //Projeto Super Trunfo
	int escolhaJogador;
		
    // Declaração das variáveis Carta 1
    char estado_c1;
    char codigo_carta_c1[4];
    char nome_cidade_c1[40];
    int população_c1;
    float area_c1;
    float pib_c1;
    int n_pontos_tur_c1;

    // Declaração das variáveis Carta 2
    char estado_c2;
    char codigo_carta_c2[4];
    char nome_cidade_c2[40];
    int população_c2;
    float area_c2;
    float pib_c2;
    int n_pontos_tur_c2;

    // Variáveis para realização dos cálculos
    float densidade_populacional_c1, densidade_populacional_c2;
    float pib_per_capita_c1, pib_per_capita_c2;

    // Variáveis para o Calcular o Super Poder
    float super_poder_c1, super_poder_c2;
    float inv_densidade_populacional_c1, inv_densidade_populacional_c2;

    //Solicitar dados da carta 1
    printf("\n######### Carta 1 ###########\n");
    printf("\nDigite o estado da carta 1, Ex.: 'S' de São Paulo:");
    scanf(" %c", &estado_c1);
    printf("\nDigite o codigo da carta 1, Ex.: A1 ou S1:");
    scanf(" %3s", &codigo_carta_c1);
    printf("\nDigite o nome da cidade da carta 1:");
    scanf(" %39[^\n]s", &nome_cidade_c1);
    printf("\nDigite a população da cidade da carta 1:");
    scanf("%d", &população_c1);
    printf("\nDigite a área da cidade da carta 1:");
    scanf("%f", &area_c1);
    printf("\nDigite o PIB da cidade da carta 1:");
    scanf("%f", &pib_c1);
    printf("\nDigite o número de pontos turísticos da cidade da carta 1:");
    scanf("%d", &n_pontos_tur_c1);

    //Solicitar dados da carta 2
    printf("\n######### Carta 2 ###########\n");
    printf("\nDigite o estado da carta 2, Ex.: 'E' de Espírito Santo:");
    scanf(" %c", &estado_c2);
    printf("\nDigite o codigo da carta 2, Ex.: A1 ou S1:");
    scanf(" %3s", &codigo_carta_c2);
    printf("\nDigite o nome da cidade da carta 2:");
    scanf(" %39[^\n]s", &nome_cidade_c2);
    printf("\nDigite a população da cidade da carta 2:");
    scanf("%d", &população_c2);
    printf("\nDigite a área da cidade da carta 2:");
    scanf("%f", &area_c2);
    printf("\nDigite o PIB da cidade da carta 2:");
    scanf("%f", &pib_c2);
    printf("\nDigite o número de pontos turísticos da cidade da carta 2:");
    scanf("%d", &n_pontos_tur_c2);

    // calcular a densidade populacional
    densidade_populacional_c1 = população_c1 / area_c1;
    densidade_populacional_c2 = população_c2 / area_c2;

    // calcular o PIB per capita
    pib_per_capita_c1 = pib_c1 / população_c1;
    pib_per_capita_c2 = pib_c2 / população_c2;

        // Imprimir os dados da carta 1
    printf("\n######### Carta 1 ###########\n");
    printf("\nEstado: %c\n", estado_c1);
    printf("Código da carta: %s\n", codigo_carta_c1);
    printf("Nome da cidade: %s\n", nome_cidade_c1);
    printf("População: %d\n", população_c1);
    printf("Área em km²: %.2f\n", area_c1);
    printf("PIB: R$ %.2f\n", pib_c1);
    printf("Número de pontos turísticos: %d\n", n_pontos_tur_c1);
    printf("Densidade populacional: %.2f habitantes/km²\n", densidade_populacional_c1);
    printf("PIB per capita: R$ %.2f\n", pib_per_capita_c1);
    printf("\n######### -------- ###########\n");

        // Imprimir os dados da carta 2
    printf("\n######### Carta 2 ###########\n");
    printf("\nEstado: %c\n", estado_c2);
    printf("Código da carta: %s\n", codigo_carta_c2);
    printf("Nome da cidade: %s\n", nome_cidade_c2);
    printf("População: %d\n", população_c2);
    printf("Área em km²: %.2f\n", area_c2);
    printf("PIB: R$ %.2f\n", pib_c2);
    printf("Número de pontos turísticos: %d\n", n_pontos_tur_c2);
    printf("Densidade populacional: %.2f habitantes/km²\n", densidade_populacional_c2);
    printf("PIB per capita: R$ %.2f\n", pib_per_capita_c2);
    printf("\n######### -------- ###########\n");

	
    // Calcular o Super Poder
    /*somando todos os atributos numéricos (população, área, PIB, número de 
    pontos turísticos, PIB per capita e o inverso da densidade 
    populacional – quanto menor a densidade, maior o "poder")*/
	/*
    inv_densidade_populacional_c1 = area_c1 / população_c1; // inverso da densidade populacional  
    inv_densidade_populacional_c2  = area_c2 / população_c2; // inverso da densidade populacional   
    super_poder_c1 = (float) população_c1 + area_c1 + pib_c1 + n_pontos_tur_c1 + pib_per_capita_c1 + inv_densidade_populacional_c1;
    super_poder_c2 = (float) população_c2 + area_c2 + pib_c2 + n_pontos_tur_c2 + pib_per_capita_c2 + inv_densidade_populacional_c2;
    */
    //printf("\nSuper Poder da Carta 1: %.2f\n", super_poder_c1);
    //printf("Super Poder da Carta 2: %.2f\n", super_poder_c2);
	
	
		//Menu principal do Jogo
	printf("Agora escolha uma Atributo para avaliar quem ganha");
	printf(" \n ________________________________\n");
	printf("| ### Menu do Jogo ###           |\n");
	printf("| 1. População                   |\n");
	printf("| 2. Área                        |\n");
	printf("| 3. PIB                         |\n");
	printf("| 4. Número de Pontos Turisticos |\n");
	printf("| 5. Densidade Demografica       |\n");
	printf("|________________________________|\n");
	printf("Escolha uma a opção: ");
	scanf("%d",&escolhaJogador);
	
	switch (escolhaJogador){
		case 1:
			if (população_c1 > população_c2){
				printf("Carta 1 venceu!! População: %d\n", população_c1);
				
				        // Imprimir os dados da carta 1
				printf("\n######### Carta 1 ###########\n");
				printf("\nEstado: %c\n", estado_c1);
				printf("Código da carta: %s\n", codigo_carta_c1);
				printf("Nome da cidade: %s\n", nome_cidade_c1);
				printf("População: %d\n", população_c1);
				printf("Área em km²: %.2f\n", area_c1);
				printf("PIB: R$ %.2f\n", pib_c1);
				printf("Número de pontos turísticos: %d\n", n_pontos_tur_c1);
				printf("Densidade populacional: %.2f habitantes/km²\n", densidade_populacional_c1);
				printf("PIB per capita: R$ %.2f\n", pib_per_capita_c1);
				printf("\n######### -------- ###########\n");
				
			}else{
				printf("Carta 2 venceu!! População: %d\n", população_c2);
					// Imprimir os dados da carta 2
				printf("\n######### Carta 2 ###########\n");
				printf("\nEstado: %c\n", estado_c2);
				printf("Código da carta: %s\n", codigo_carta_c2);
				printf("Nome da cidade: %s\n", nome_cidade_c2);
				printf("População: %d\n", população_c2);
				printf("Área em km²: %.2f\n", area_c2);
				printf("PIB: R$ %.2f\n", pib_c2);
				printf("Número de pontos turísticos: %d\n", n_pontos_tur_c2);
				printf("Densidade populacional: %.2f habitantes/km²\n", densidade_populacional_c2);
				printf("PIB per capita: R$ %.2f\n", pib_per_capita_c2);
				printf("\n######### -------- ###########\n");
			}
		break;
		case 2:
			if (area_c1 > area_c2){
				printf("Carta 1 venceu!!! Área: %.2f\n", area_c1);
				        // Imprimir os dados da carta 1
				printf("\n######### Carta 1 ###########\n");
				printf("\nEstado: %c\n", estado_c1);
				printf("Código da carta: %s\n", codigo_carta_c1);
				printf("Nome da cidade: %s\n", nome_cidade_c1);
				printf("População: %d\n", população_c1);
				printf("Área em km²: %.2f\n", area_c1);
				printf("PIB: R$ %.2f\n", pib_c1);
				printf("Número de pontos turísticos: %d\n", n_pontos_tur_c1);
				printf("Densidade populacional: %.2f habitantes/km²\n", densidade_populacional_c1);
				printf("PIB per capita: R$ %.2f\n", pib_per_capita_c1);
				printf("\n######### -------- ###########\n");
			}else{
				printf("Carta 2 venceu!!! Área: %.2f\n", area_c2);
					// Imprimir os dados da carta 2
				printf("\n######### Carta 2 ###########\n");
				printf("\nEstado: %c\n", estado_c2);
				printf("Código da carta: %s\n", codigo_carta_c2);
				printf("Nome da cidade: %s\n", nome_cidade_c2);
				printf("População: %d\n", população_c2);
				printf("Área em km²: %.2f\n", area_c2);
				printf("PIB: R$ %.2f\n", pib_c2);
				printf("Número de pontos turísticos: %d\n", n_pontos_tur_c2);
				printf("Densidade populacional: %.2f habitantes/km²\n", densidade_populacional_c2);
				printf("PIB per capita: R$ %.2f\n", pib_per_capita_c2);
				printf("\n######### -------- ###########\n");
			}		
		break;
		case 3:
			if (pib_c1 > pib_c2){
				printf("Carta 1 venceu!!! PIB: R$ %.2f\n", pib_c1);
				        // Imprimir os dados da carta 1
				printf("\n######### Carta 1 ###########\n");
				printf("\nEstado: %c\n", estado_c1);
				printf("Código da carta: %s\n", codigo_carta_c1);
				printf("Nome da cidade: %s\n", nome_cidade_c1);
				printf("População: %d\n", população_c1);
				printf("Área em km²: %.2f\n", area_c1);
				printf("PIB: R$ %.2f\n", pib_c1);
				printf("Número de pontos turísticos: %d\n", n_pontos_tur_c1);
				printf("Densidade populacional: %.2f habitantes/km²\n", densidade_populacional_c1);
				printf("PIB per capita: R$ %.2f\n", pib_per_capita_c1);
				printf("\n######### -------- ###########\n");
			}else{
				printf("Carta 2 venceu!!! PIB: R$ %.2f\n", pib_c2);
					// Imprimir os dados da carta 2
				printf("\n######### Carta 2 ###########\n");
				printf("\nEstado: %c\n", estado_c2);
				printf("Código da carta: %s\n", codigo_carta_c2);
				printf("Nome da cidade: %s\n", nome_cidade_c2);
				printf("População: %d\n", população_c2);
				printf("Área em km²: %.2f\n", area_c2);
				printf("PIB: R$ %.2f\n", pib_c2);
				printf("Número de pontos turísticos: %d\n", n_pontos_tur_c2);
				printf("Densidade populacional: %.2f habitantes/km²\n", densidade_populacional_c2);
				printf("PIB per capita: R$ %.2f\n", pib_per_capita_c2);
				printf("\n######### -------- ###########\n");
			}		
		break;
		case 4:
			if (n_pontos_tur_c1 > n_pontos_tur_c2){
				printf("Carta 1 venceu!!! Número de Pontos Turisticos: %d\n", n_pontos_tur_c1);
				        // Imprimir os dados da carta 1
				printf("\n######### Carta 1 ###########\n");
				printf("\nEstado: %c\n", estado_c1);
				printf("Código da carta: %s\n", codigo_carta_c1);
				printf("Nome da cidade: %s\n", nome_cidade_c1);
				printf("População: %d\n", população_c1);
				printf("Área em km²: %.2f\n", area_c1);
				printf("PIB: R$ %.2f\n", pib_c1);
				printf("Número de pontos turísticos: %d\n", n_pontos_tur_c1);
				printf("Densidade populacional: %.2f habitantes/km²\n", densidade_populacional_c1);
				printf("PIB per capita: R$ %.2f\n", pib_per_capita_c1);
				printf("\n######### -------- ###########\n");
			}else{
				printf("Carta 2 venceu!!! Número de Pontos Turisticos: %d\n", n_pontos_tur_c2);
					// Imprimir os dados da carta 2
				printf("\n######### Carta 2 ###########\n");
				printf("\nEstado: %c\n", estado_c2);
				printf("Código da carta: %s\n", codigo_carta_c2);
				printf("Nome da cidade: %s\n", nome_cidade_c2);
				printf("População: %d\n", população_c2);
				printf("Área em km²: %.2f\n", area_c2);
				printf("PIB: R$ %.2f\n", pib_c2);
				printf("Número de pontos turísticos: %d\n", n_pontos_tur_c2);
				printf("Densidade populacional: %.2f habitantes/km²\n", densidade_populacional_c2);
				printf("PIB per capita: R$ %.2f\n", pib_per_capita_c2);
				printf("\n######### -------- ###########\n");
			}		
		break;
		case 5:
			if (densidade_populacional_c1 > densidade_populacional_c2){
				printf("Carta 1 venceu!!! Densidade Demografica: %d\n", densidade_populacional_c1);
				        // Imprimir os dados da carta 1
				printf("\n######### Carta 1 ###########\n");
				printf("\nEstado: %c\n", estado_c1);
				printf("Código da carta: %s\n", codigo_carta_c1);
				printf("Nome da cidade: %s\n", nome_cidade_c1);
				printf("População: %d\n", população_c1);
				printf("Área em km²: %.2f\n", area_c1);
				printf("PIB: R$ %.2f\n", pib_c1);
				printf("Número de pontos turísticos: %d\n", n_pontos_tur_c1);
				printf("Densidade populacional: %.2f habitantes/km²\n", densidade_populacional_c1);
				printf("PIB per capita: R$ %.2f\n", pib_per_capita_c1);
				printf("\n######### -------- ###########\n");
			}else{
				printf("Carta 2 venceu!!! Densidade Demografica: %d\n", densidade_populacional_c2);
					// Imprimir os dados da carta 2
				printf("\n######### Carta 2 ###########\n");
				printf("\nEstado: %c\n", estado_c2);
				printf("Código da carta: %s\n", codigo_carta_c2);
				printf("Nome da cidade: %s\n", nome_cidade_c2);
				printf("População: %d\n", população_c2);
				printf("Área em km²: %.2f\n", area_c2);
				printf("PIB: R$ %.2f\n", pib_c2);
				printf("Número de pontos turísticos: %d\n", n_pontos_tur_c2);
				printf("Densidade populacional: %.2f habitantes/km²\n", densidade_populacional_c2);
				printf("PIB per capita: R$ %.2f\n", pib_per_capita_c2);
				printf("\n######### -------- ###########\n");
			}		
		break;

		default:
			printf("Opção Invalida");
		break;
	}

    return 0;
}       