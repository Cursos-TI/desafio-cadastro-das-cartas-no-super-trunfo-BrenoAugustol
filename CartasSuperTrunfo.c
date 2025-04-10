#include <stdio.h>

int main(){
    
    printf("\nOlá, Mundo!\n");

    printf("\nDesafio CartasSuperTrunfo!\n");
        
    printf("\nCarta1:\n");
    char estado1[50];
    char nome1[50];
    char codigo1[50];
    int numero1;
    int pontoturistico1;
    float area1;
    float pib1;
    float densidade1;
    float PPC1;
    float Superpoder1;

    printf("\nDigite seu estado:");
    scanf("%s", estado1);

    printf("Digite o nome da cidade:");
    scanf("%s", nome1);
   
    printf("Digite o código:");
    scanf("%s", codigo1);

    printf("Qual número da população da cidade:");
    scanf("%d", &numero1);

    printf("Quantos pontos turísticcos têm a cidade:");
    scanf("%d", &pontoturistico1);

    printf("Qual a área da cidade:");
    scanf("%f", &area1);
   
    printf("Qual PIB da cidade:");
    scanf("%f", &pib1);

    densidade1 = (numero1 / area1);
    PPC1 = (pib1 / numero1);
    Superpoder1 = (numero1 + pontoturistico1 + area1 + pib1 + 1 / (numero1 / area1) + (pib1 / numero1));

    printf("\nNome da cidade: %s\n", nome1);
    printf("Codigo é: %s\n", codigo1);
    printf("Estado é: %s\n", estado1);
    printf("População são: %d milhões\n", numero1);
    printf("Pontos turísticos são: %d\n", pontoturistico1);
    printf("Área é: %.0f km2\n", area1);
    printf("PIB é: %.0f bilhões de reais\n", pib1);
    printf("Densidade populacional é: %.0f hab/km²\n", densidade1);
    printf("PIB per Capita da cidade é: %.0f reais\n", PPC1);
    printf("O Super poder 1 é: %.0f\n", Superpoder1);

    printf("\nCarta2:\n");
    char estado2[50];
    char nome2[50];
    char codigo2[50];
    int numero2;
    int pontoturistico2;
    float area2;
    float pib2;
    float densidade2;
    float PPC2;
    float Superpoder2;

    printf("\nDigite seu estado:");
    scanf("%s", estado2);

    printf("Digite o nome da cidade:");
    scanf("%s", nome2);
        
    printf("Digite o código:");
    scanf("%s", codigo2);

    printf("Qual número da população da cidade:");
    scanf("%d", &numero2);

    printf("Quantos pontos turísticcos têm a cidade:");
    scanf("%d", &pontoturistico2);

    printf("Qual a área da cidade:");
    scanf("%f", &area2);
        
    printf("Qual PIB da cidade:");
    scanf("%f", &pib2);

    densidade2 = (numero2 / area2);
    PPC2 = (pib2 / numero2);
    Superpoder2 = (numero2 + pontoturistico2 + area2 + pib2 + 1 / (numero2 / area2) + (pib2 / numero2));

    printf("\nNome da cidade: %s\n", nome2);
    printf("Codigo é: %s\n", codigo2);
    printf("Estado é: %s\n", estado2);
    printf("População são: %d milhões\n", numero2);
    printf("Pontos turísticos são: %d\n", pontoturistico2);
    printf("Área é: %.0f km2\n", area2);
    printf("PIB é: %.0f bilhões de reais\n", pib2);
    printf("Densidade populacional é: %.0f hab/km²\n", densidade2);
    printf("PIB per Capita da cidade é: %.0f reais\n", PPC2);
    printf("O Super poder 2 é: %.0f\n", Superpoder2);

    printf("\nComparação das cartas:\n");
    printf("\nSe a carta1 vencer resultado 1, se a carta2 vencer resultado 0\n");
    printf("Nas cartas *densidade populacional* ganha quem for o menor valor!\n");

    printf("\nA população da Carta1 é maior que a população da Carta2: %d\n", numero1 > numero2);
    printf("O ponto turístico da Carta1 é maior que o ponto turístico da Carta2: %d\n", pontoturistico1 > pontoturistico2);
    printf("A área da Carta1 é maior que a área da Carta2: %d\n", area1 > area2);
    printf("O PIB da Carta1 é maior que o PIB da Carta2: %d\n", pib1 > pib2);
    printf("A Densidade populacional da Carta1 é maior que a Densidade populacional da Carta2: %d se o resultado for 1, A Carta2 venceu\n", densidade1 > densidade2);
    printf("O PIB per capta da Carta1 é maior que o PIB per capta da Carta2: %d\n", PPC1 > PPC2);
    printf("A Super poder 1 é maior que o Super poder 2: %d\n", Superpoder1 > Superpoder2);


    return 0;
    
}