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

    printf("Digite seu estado:");
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

    printf("\nNome da cidade: %s\n", nome1);
    printf("Codigo é: %s\n", codigo1);
    printf("Estado é: %s\n", estado1);
    printf("População são: %d\n", numero1);
    printf("Pontos turísticos são: %d\n", pontoturistico1);
    printf("Área é: %.0f\n", area1);
    printf("PIB é: %.0f\n", pib1);
    printf("Densidade populacional é: %f\n",numero1 / area1);
    printf("PIB per Capita da cidade é: %f\n", pib1 / numero1);
    
    printf("\nCarta2:\n");
    char estado2[50];
    char nome2[50];
    char codigo2[50];
    int numero2;
    int pontoturistico2;
    float area2;
    float pib2;

    printf("Digite seu estado:");
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

    printf("\nNome da cidade: %s\n", nome2);
    printf("Codigo é: %s\n", codigo2);
    printf("Estado é: %s\n", estado2);
    printf("População são: %d\n", numero2);
    printf("Pontos turísticos são: %d\n", pontoturistico2);
    printf("Área é: %.0f\n", area2);
    printf("PIB é: %.0f\n", pib2);
    printf("Densidade populacional é: %f\n",numero2 / area2);
    printf("PIB per Capita da cidade é: %f\n", pib2 / numero2);

    return 0;
    
}