#include <stdio.h>

int main() {  

    int Numerodepontosturisticos1, Numerodepontosturisticos2;
    float area1, PIB1, area2, PIB2, populacao1, populacao2, SuperPoder1, SuperPoder2;
    float  Densidadepopulacional1, Densidadepopulacional2, PIBPerCarpita1, PIBPerCarpita2;
    char estado1[20], estado2[20]; 
    char Codigodacarta1[50];
    char Codigodacarta2[20];
    char Nomedacidade1[50];
    char Nomedacidade2[20];

    printf("Digite o Estado: \n");
    scanf("%s", &estado1);

    printf("Digite o Codigo: \n");
    scanf("%s", Codigodacarta1);

    printf("Digite o Nome da Cidade: \n");
    scanf("%s", Nomedacidade1);

    printf("Digite a População: \n");
    scanf("%f", &populacao1);

    printf("Digite a Área: \n");
    scanf("%f", &area1);

    printf("Digite o PIB: \n");
    scanf("%f", &PIB1);

    printf("Digite o Número de pontos Turisticos: \n");
    scanf("%d", &Numerodepontosturisticos1);

    Densidadepopulacional1 = populacao1 / area1;
    PIBPerCarpita1 = PIB1 / populacao1;
    SuperPoder1 = populacao1 + area1 + PIB1 + PIBPerCarpita1 + Densidadepopulacional1/1 + Numerodepontosturisticos1;   

    printf("Digite o Estado: \n");
    scanf("%s", &estado2);

    printf("Digite o Codigo: \n");
    scanf("%s", Codigodacarta2);

    printf("Digite o Nome da Cidade: \n");
    scanf("%s", Nomedacidade2);

    printf("Digite a População: \n");
    scanf("%f", &populacao2);

    printf("Digite a Área: \n");
    scanf("%f", &area2);

    printf("Digite o PIB: \n");
    scanf("%f", &PIB2);

    printf("Digite o Número de pontos Turisticos: \n");
    scanf("%d", &Numerodepontosturisticos2);

    Densidadepopulacional2 = populacao2 / area2;
    PIBPerCarpita2 = PIB2 / populacao2;
    SuperPoder2 = populacao2 + area2 + PIB2 + PIBPerCarpita2 + Densidadepopulacional2/1 + Numerodepontosturisticos2;   

    printf("Carta 1: \n");
    printf("Estado: %s\n", estado1);
    printf("Código: %s\n", Codigodacarta1);
    printf("Nome da Cidade: %s\n", Nomedacidade1);
    printf("População: %.2f\n", populacao1);
    printf("Área: %.2f M² \n", area1);
    printf("PIB: %.2f\n", PIB1);
    printf("Número de Pontos Turísticos: %d\n", Numerodepontosturisticos1);
    printf("Densidade Populacional: %.2f\n", Densidadepopulacional1);
    printf("PIB per Capita: %.2f\n", PIBPerCarpita1);
    printf("Super Poder: %.2f\n", SuperPoder1);

    printf("Carta 2: \n");
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", Codigodacarta2);
    printf("Nome da Cidade: %s\n", Nomedacidade2);
    printf("População: %.2f\n", populacao2);
    printf("Área: %.2f M²\n", area2);
    printf("PIB: %.2f\n", PIB2);
    printf("Número de Pontos Turísticos: %d\n", Numerodepontosturisticos2);
    printf("Densidade Populacional: %.2f\n", Densidadepopulacional2);
    printf("PIB per Capita: %.2f\n", PIBPerCarpita2);
    printf("Super Poder: %.2f\n", SuperPoder2);

    printf("\n ***Comparação de cartas*** \n");

    printf("\npopulação: %d\n", populacao1 > populacao2);
    printf("Área: %d\n", area1 > area2);
    printf("PIB: %d\n", PIB1 > PIB2);
    printf("Pontos Turísticos: %d\n", Numerodepontosturisticos1 > Numerodepontosturisticos2);
    printf("Densidade Populacional: %d\n", Densidadepopulacional1 > Densidadepopulacional2);
    printf("PIB oer Capita: %d\n", PIBPerCarpita1 > PIBPerCarpita2);
    printf("Super Poder: %d\n", SuperPoder1 > SuperPoder2);


    return 0;

}