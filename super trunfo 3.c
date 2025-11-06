#include <stdio.h>
int main()
{

    char estado1[10];
    char cidade1[50];
    char codigoDaCarta1;
    char nome_da_cidade1[50];
    unsigned int populacao1;
    float area1;
    float PIB1;
    unsigned int numero_de_pontos_turisticos1;
    float densidadepopulacional1;
    float PIBpercapita1;
    float superpoder1;

    printf("Estado: \n");
    scanf("%s", &estado1);

    printf("Cidade: \n");
    scanf("%s", &cidade1);

    printf("Codigo da carta: \n");
    scanf(" %c", &codigoDaCarta1);

    printf("Populacao: \n");
    scanf("%u", &populacao1);

    printf("area: \n");
    scanf("%f", &area1);

    printf("PIB: \n");
    scanf("%f", &PIB1);

    printf("Número de pontos turisticos: \n");
    scanf("%u", &numero_de_pontos_turisticos1);

    densidadepopulacional1 = populacao1 / area1;
    PIBpercapita1 = (PIBpercapita1 * 1000000000) / populacao1;
    superpoder1 = populacao1 + area1 + PIB1 + densidadepopulacional1 + numero_de_pontos_turisticos1 + PIBpercapita1;

    printf("Estado: %s\n", estado1);
    printf("Codigo: %c\n", codigoDaCarta1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("Populacao: %u \n", populacao1);
    printf("area: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", PIB1);
    printf("Número de Pontos Turísticos: %u\n", numero_de_pontos_turisticos1);
    printf("Densidade Populacional: %.2f \n", densidadepopulacional1);
    printf("PIB per capita: %.2f \n", PIBpercapita1);
    printf("SUPER PODER: %f\n", superpoder1);

    char estado2[10];
    char cidade2[50];
    char codigoDaCarta2;
    char nome_da_cidade2[50];
    unsigned int populacao2;
    float area2;
    float PIB2;
    unsigned int numero_de_pontos_turisticos2;
    float densidadepopulacional2;
    float PIBpercapita2;
    float superpoder2;

    printf("Estado: \n");
    scanf("%s", &estado2);

    printf("Cidade: \n");
    scanf("%s", &cidade2);

    printf("Codigo da carta: \n");
    scanf(" %c", &codigoDaCarta2);

    printf("Populacao: \n");
    scanf("%u", &populacao2);

    printf("area: \n");
    scanf("%f", &area2);

    printf("PIB: \n");
    scanf("%f", &PIB2);

    printf("Número de pontos turisticos: \n");
    scanf("%u", &numero_de_pontos_turisticos2);

    densidadepopulacional2 = populacao2 / area2;
    PIBpercapita2 = (PIB2 * 1000000000) / populacao2;
    superpoder2 = populacao2 + area2 + PIB2 + densidadepopulacional2 + numero_de_pontos_turisticos2 + PIBpercapita2;

    printf("Estado: %s\n", estado2);
    printf("Codigo: %c\n", codigoDaCarta2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("Populacao: %u \n", populacao2);
    printf("area: %f km²\n", area2);
    printf("PIB: %f bilhões de reais\n", PIB2);
    printf("Número de Pontos Turísticos: %u\n", numero_de_pontos_turisticos2);
    printf("Densidade Populacional: %.2f \n", densidadepopulacional2);
    printf("PIB per capita: %.2f \n", PIBpercapita2);
    printf("SUPER PODER: %f\n", superpoder2);

    unsigned int resultadoestado, resultadopopulacao, resultadoarea, resultadopontosturisticos;
    float resultadodensidadepopulacional, resultadopib, resultadosuperpoder;

    resultadoestado = estado1 > estado2;
    resultadopopulacao = populacao1 > populacao2;
    resultadoarea = area1 > area2;
    resultadopontosturisticos = numero_de_pontos_turisticos1 > numero_de_pontos_turisticos2;
    resultadopib = PIB1 > PIB2;
    resultadodensidadepopulacional = densidadepopulacional1 > densidadepopulacional1;
    resultadosuperpoder = superpoder1 > superpoder2;

    printf("Populacao |CARTA %d venceu: (%d)\n", (populacao1 > populacao2) ? 1 : 2, populacao1 > populacao2);
    printf("area |CARTA %d venceu: (%d)\n", (area1 > area2) ? 1 : 2, (area1 > area2));
    printf("PIB |CARTA %d venceu: (%d)\n", (PIB1 > PIB2) ? 1 : 2, (PIB1 > PIB2));
    printf("Número de pontos turísticos |CARTA %d venceu: (%d)\n", (numero_de_pontos_turisticos1 > numero_de_pontos_turisticos2) ? 1 : 2, (numero_de_pontos_turisticos1 > numero_de_pontos_turisticos2));
    printf("Densidade populacional |CARTA %d venceu: (%d)\n", (densidadepopulacional1 < densidadepopulacional2) ? 1 : 2, (densidadepopulacional1 < densidadepopulacional2));
    printf("SUPER PODER |CARTA %d venceu: (%d)\n", (superpoder1 > superpoder2) ? 1 : 2, (superpoder1 > superpoder2));

    return 0;
}
