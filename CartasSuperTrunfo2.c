#include <stdio.h>

int main() {  

    int populacao1, populacao2, Numerodepontosturisticos1, Numerodepontosturisticos2;
    float area1, PIB1, area2, PIB2;
    char estado1, estado2;
    char Codigodacarta1[20];
    char Codigodacarta2[20];
    char Nomedacidade1[20];
    char Nomedacidade2[20];

    printf("Digite o Estado: \n");
    scanf("%c", &estado1);

    printf("Digite o Codigo: \n");
    scanf("%s", Codigodacarta1);

    printf("Digite o Nome da Cidade: \n");
    scanf("%s", Nomedacidade1);

    printf("Digite a População: \n");
    scanf("%d", &populacao1);

    printf("Digite a Área: \n");
    scanf("%f", &area1);

    printf("Digite o PIB: \n");
    scanf("%f", &PIB1);

    printf("Digite o Número de pontos Turisticos: \n");
    scanf("%d", &Numerodepontosturisticos1);

    printf("Carta 1: \n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", Codigodacarta1);
    printf("Nome da Cidade: %s\n", Nomedacidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %f\n", area1);
    printf("PIB: %f\n", PIB1);
    printf("Número de Pontos Turísticos: %d\n", Numerodepontosturisticos1);

    printf("Digite o Estado: \n");
    scanf("%c", &estado2);

    printf("Digite o Codigo: \n");
    scanf("%s", Codigodacarta2);

    printf("Digite o Nome da Cidade: \n");
    scanf("%s", Nomedacidade2);

    printf("Digite a População: \n");
    scanf("%d", &populacao2);

    printf("Digite a Área: \n");
    scanf("%f", &area2);

    printf("Digite o PIB: \n");
    scanf("%f", &PIB2);

    printf("Digite o Número de pontos Turisticos: \n");
    scanf("%d", &Numerodepontosturisticos2);


    printf("Carta 2: \n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", Codigodacarta2);
    printf("Nome da Cidade: %s\n", Nomedacidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %f\n", area2);
    printf("PIB: %f\n", PIB2);
    printf("Número de Pontos Turísticos: %d\n", Numerodepontosturisticos2);
    return 0;

}