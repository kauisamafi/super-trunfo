#include <stdio.h>

int main()
{

    char estado[10];
    char cidade[50];
    char codigoDaCarta;
    char nome_da_cidade[50];
    int populacao;
    float area;
    float PIB;
    int numero_de_pontos_turisticos;
    float densidadepopulacional;
    float PIBpercapita;

    printf("Estado: \n");
    scanf("%s", &estado);

    printf("Cidade: \n");
    scanf("%s", &cidade);

    printf("Codigo da carta: \n");
    scanf(" %c", &codigoDaCarta);

    printf("Populacao: \n");
    scanf("%d", &populacao);

    printf("area: \n");
    scanf("%f", &area);

    printf("PIB: \n");
    scanf("%f", &PIB);

    printf("Número de pontos turisticos: \n");
    scanf("%d", &numero_de_pontos_turisticos);

    densidadepopulacional = populacao / area;
    PIBpercapita = (PIB * 1000000000) / populacao;

    printf("Estado: %s\n", estado);
    printf("Codigo: %c\n", codigoDaCarta);
    printf("Nome da Cidade: %s\n", cidade);
    printf("Populacao: %d \n", populacao);
    printf("area: %.2f km²\n", area);
    printf("PIB: %.2f bilhões de reais\n", PIB);
    printf("Número de Pontos Turísticos: %d\n", numero_de_pontos_turisticos);
    printf("Densidade Populacional: %.2f \n", densidadepopulacional);
    printf("PIB per capita: %.2f \n", PIBpercapita);

    char estado2[10];
    char cidade2[50];
    char codigoDaCarta2;
    char nome_da_cidade2[50];
    int populacao2;
    float area2;
    float PIB2;
    int numero_de_pontos_turisticos2;
    float densidadepopulacional2;
    float PIBpercapita2;

    printf("Estado: \n");
    scanf("%s", &estado2);

    printf("Cidade: \n");
    scanf("%s", &cidade2);

    printf("Codigo da carta: \n");
    scanf(" %c", &codigoDaCarta2);

    printf("Populacao: \n");
    scanf("%d", &populacao2);

    printf("area: \n");
    scanf("%f", &area2);

    printf("PIB: \n");
    scanf("%f", &PIB2);

    printf("Número de pontos turisticos: \n");
    scanf("%d", &numero_de_pontos_turisticos2);

    densidadepopulacional2 = populacao2 / area2;
    PIBpercapita2 = (PIB2 * 1000000000) / populacao2;

    printf("Estado: %s\n", estado2);
    printf("Codigo: %c\n", codigoDaCarta2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("Populacao: %d \n", populacao2);
    printf("area: %f km²\n", area2);
    printf("PIB: %f bilhões de reais\n", PIB2);
    printf("Número de Pontos Turísticos: %d\n", numero_de_pontos_turisticos2);
    printf("Densidade Populacional: %.2f \n", densidadepopulacional2);
    printf("PIB per capita: %.2f \n", PIBpercapita2);
    return 0;
}
