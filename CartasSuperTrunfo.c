#include <stdio.h>

int main() {

    int populacao1, Numerodepontosturisticos1;
    float area1, PIB1;
    char estado1;
    char Codigodacarta1[50];
    char Nomedacidade1[50];

    printf("Digite o Estado: \n");
    scanf("%s", &estado1);

    printf("Digite o Codigo: \n");
    scanf("%s", &Codigodacarta1);

    printf("Digite o Nome da Cidade: \n");
    scanf("%s", &Nomedacidade1);

    printf("Digite a população: \n");
    scanf("%d", &populacao1);

    printf("Digite a Área: \n");
    scanf("%f", &area1);

    printf("Digite o PIB: \n");
    scanf("%f", &PIB1);

    printf("Digite o Número de pontos Turísticos: \n");
    scanf("%d", &Numerodepontosturisticos1);
    
    return 0;
}
