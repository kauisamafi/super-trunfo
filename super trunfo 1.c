#include <stdio.h>

int main()
{

    char estado;
    char cidade[50];
    char codigoDaCarta[3];
    char nome_da_cidade[50];
    int populacao;
    float area;
    float PIB;
    int numero_de_pontos_turisticos;

    printf("Estado: \n");
    scanf("%c", &estado);

    printf("Cidade: \n");
    scanf("%s", cidade);

    printf("Codigo da carta: \n");
    scanf("%s", &codigoDaCarta);

    printf("População: \n");
    scanf("%d", &populacao);

    printf("area: \n");
    scanf("%f", &area);

    printf("PIB: \n");
    scanf("%f", &PIB);

    printf("Número de pontos turisticos: \n");
    scanf("%d", &numero_de_pontos_turisticos);

    printf("Estado: %c\n", estado);
    printf("Codigo: %s\n", codigoDaCarta);
    printf("Nome da Cidade: %s\n", cidade);
    printf("Populacao: %d \n", populacao);
    printf("area: %f km²\n", area);
    printf("PIB: %f bilhões de reais\n", PIB);
    printf("Número de Pontos Turísticos: %d\n", numero_de_pontos_turisticos);

    char estado2;
    char cidade2[50];
    char codigoDaCarta2[3];
    char nome_da_cidade2[50];
    int populacao2;
    float area2;
    float PIB2;
    int numero_de_pontos_turisticos2;

    printf("Estado: \n");
    scanf("%c", &estado2);

    printf("Cidade: \n");
    scanf("%s", cidade2);

    printf("Codigo da carta: \n");
    scanf("%s", &codigoDaCarta2);

    printf("Populacao: \n");
    scanf("%d", &populacao2);

    printf("area: \n");
    scanf("%f", &area2);

    printf("PIB: \n");
    scanf("%f", &PIB2);

    printf("Número de pontos turisticos: \n");
    scanf("%d", &numero_de_pontos_turisticos2);

    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigoDaCarta2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("Populacao: %d \n", populacao2);
    printf("area: %f km²\n", area2);
    printf("PIB: %f bilhões de reais\n", PIB2);
    printf("Número de Pontos Turísticos: %d\n", numero_de_pontos_turisticos2);
    return 0;
}
