#include <stdio.h>

     int main() {

         printf("Desafio CartasSuperTrunfo!\n");
        
         printf("\nCarta1:\n");
         char estado1[50] = "Riodejaneiro";
         char nome1[50] = "Campogrande";
         char codigo1[50] = "A01";
         int numero1 = 2000000;
         int pontoturistico1 = 40;
         float area1 = 500000;
         float pib1 = 20000000;

         printf("Digite o nome da cidade:");
         scanf("%s", nome1);
        
         printf("Digite o código:");
         scanf("%s", codigo1);

         printf("Digite seu estado:");
         scanf("%s", estado1);

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

         
         printf("\nCarta2:\n");
         char estado2[50] = "SaoPaulo";
         char nome2[50] = "Campinas";
         char codigo2[50] = "B02";
         int numero2 = 1500000;
         int pontoturistico2 = 23;
         float area2 = 200000;
         float pib2 = 18000000;

         printf("Digite o nome da cidade:");
         scanf("%s", nome2);
             
         printf("Digite o código:");
         scanf("%s", codigo2);
     
         printf("Digite seu estado:");
         scanf("%s", estado2);
     
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

         return 0;
         
     }
