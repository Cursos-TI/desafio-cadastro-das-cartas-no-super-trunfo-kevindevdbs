#include <stdio.h>

int main (){

    // Declaração das variáveis para cartas 1 e 2
    char estado , estado1;
    char codigodacarta [50], codigodacarta1 [50];
    char nomedacidade [50], nomedacidade1 [50];
    int populacao, populacao1;
    float areaemkm , areaemkm1;
    float pib , pib1;
    float pibpercapita , pibpercapita1,  densidadepopulacional , densidadepopulacional1;
    int pontosturisticos , pontosturisticos1;
    float superpoder , superpoder1;

    // Mensagem inicial
    printf("Bem Vindo ao Jogo SuperTrufo , Você precisa Cadastrar duas cartas Carta 1 e Carta 2 , Vamos começar pela Carta 1 , insira os dados solicitados a seguir.\n\n");

    // Entrada da primeira letra do estado para carta 1
    printf("Digite a Primeira letra de Um Estado de 'A' a 'H' :\n");
    scanf(" %c", &estado);

    // Entrada do número de pontos turísticos da cidade para carta 1
    printf("Digite o numero de pontos turisticos da cidade : \n");
    scanf("%d", &pontosturisticos);

    // Entrada do código da carta para carta 1
    printf("Digite o Codigo da Carta (Que é a letra do estado seguida de um numero de 01 a 04) :\n");
    scanf("%s", codigodacarta);

    // Entrada do nome da cidade para carta 1
    printf("Digite o nome da Cidade que deseja daquele estado: \n");
    scanf("%s", nomedacidade);

    // Entrada do número de habitantes da cidade (sem pontos) para carta 1
    printf("Digite o numero de habitantes da cidade (Não utilize pontos para separação) : \n");
    scanf("%d", &populacao);

    // Entrada da área em km² (sem pontos) para carta 1
    printf("Digite a area em km² da cidade (Não utilize pontos para separação) :  \n");
    scanf("%f", &areaemkm);

    // Entrada do PIB em bilhões para carta 1
    printf("O PIB da cidade é de Quantos Bilhões : \n");
    scanf("%f", &pib);

    printf("\n\n");
    
    
    // Exibe os dados cadastrados da carta 1

    pibpercapita = (pib * 1000000000) / populacao;
    densidadepopulacional = populacao / areaemkm;
    superpoder = (float)populacao + areaemkm + pib + (float)pontosturisticos + pibpercapita + (1 - densidadepopulacional);

    printf("Parabéns Você Cadastrou a Carta 1 com as seguintes Informações: \n\n");
    printf("Carta 1:\n");
    printf("Estado: %c\n", estado);
    printf("Código: %s\n" , codigodacarta);
    printf("Nome da Cidade: %s\n", nomedacidade);
    printf("Populção: %d\n", populacao);
    printf("Área: %.2f km²\n", areaemkm);
    printf("PIB: %.2f Bilhões de Reais\n", pib);
    printf("Numero de Pontos Turisticos: %d\n", pontosturisticos);
    printf("Pib Per Capita : %.2f reais \n" , pibpercapita);
    printf("Densidade Populacional : %.2f hab/km²\n" , densidadepopulacional);
    printf("Superpoder : %.2f\n\n" , superpoder);

    // Entrada para carta 2 (mesmos passos)

    printf("Agora Vamos Cadastrar a Carta 2 , Vamos Começar!\n\n");

    printf("Digite a Primeira letra de Um Estado de 'A' a 'H' :\n");
    scanf(" %c", &estado1);

    printf("Digite o numero de pontos turisticos da cidade : \n");
    scanf("%d", &pontosturisticos1);

    printf("Digite o Codigo da Carta (Que é a letra do estado seguida de um numero de 01 a 04) :\n");
    scanf("%s", codigodacarta1);

    printf("Digite o nome da Cidade que deseja daquele estado: \n");
    scanf("%s", nomedacidade1);

    printf("Digite o numero de habitantes da cidade (Não utilize pontos para separação) : \n");
    scanf("%d", &populacao1);

    printf("Digite a area em km² da cidade (Não utilize pontos para separação) : \n");
    scanf("%f", &areaemkm1);

    printf("O PIB da cidade é de Quantos Bilhões : \n\n");
    scanf("%f", &pib1);


    // Exibe os dados cadastrados da carta 2

    pibpercapita1 = (pib1 * 1000000000) / populacao1;
    densidadepopulacional1 = populacao1 / areaemkm1;
    superpoder1 = (float)populacao1 + areaemkm1 + pib1 + (float)pontosturisticos1 + pibpercapita1 + (1 - densidadepopulacional1);

    printf("Parabéns Você Cadastrou a Carta 2 com as seguintes Informações: \n\n");

    printf("Carta 2:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n" , codigodacarta1);
    printf("Nome da Cidade: %s\n", nomedacidade1);
    printf("Populção: %d\n", populacao1);
    printf("Área: %.2f km²\n", areaemkm1);
    printf("PIB: %.2f Bilhões de Reais\n", pib1);
    printf("Numero de Pontos Turisticos: %d\n", pontosturisticos1);
    printf("Pib Per Capita : %.2f reais \n" , pibpercapita1);
    printf("Densidade Populacional : %.2f hab/km²\n" , densidadepopulacional1);
    printf("Superpoder : %.2f\n\n" , superpoder1);

    // Mensagem final de sucesso

    printf("Cartas cadastradas com sucesso ! \n\n");

    // Mostra os dados finais das duas cartas

    printf("Carta 1\n");
    printf("Estado: %c\n", estado);
    printf("Código: %s\n" , codigodacarta);
    printf("Nome da Cidade: %s\n", nomedacidade);
    printf("Populção: %d\n", populacao);
    printf("Área: %.2f km²\n", areaemkm);
    printf("PIB: %.2f Bilhões de Reais\n", pib);
    printf("Numero de Pontos Turisticos: %d\n", pontosturisticos);
    printf("Pib Per Capita : %.2f reais \n" , pibpercapita);
    printf("Densidade Populacional : %.2f hab/km²\n" , densidadepopulacional);
    printf("Superpoder : %.2f\n\n" , superpoder);

    printf("Carta 2\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n" , codigodacarta1);
    printf("Nome da Cidade: %s\n", nomedacidade1);
    printf("Populção: %d\n", populacao1);
    printf("Área: %.2f km²\n", areaemkm1);
    printf("PIB: %.2f Bilhões de Reais\n", pib1);
    printf("Numero de Pontos Turisticos: %d\n", pontosturisticos1);
    printf("Pib Per Capita : %.2f reais \n" , pibpercapita1);
    printf("Densidade Populacional : %.2f hab/km²\n" , densidadepopulacional1);
    printf("Superpoder : %.2f\n\n" , superpoder1);

    int resultadopopulacao , resultadoarea , resultadopib , resultadopontotu , resultadopibper , resultadodensidade , resultadosuperpoder;

    resultadopopulacao = populacao > populacao1;
    resultadoarea = areaemkm > areaemkm1;
    resultadodensidade = densidadepopulacional > densidadepopulacional1;
    resultadopib = pib > pib1;
    resultadopontotu = pontosturisticos > pontosturisticos1;
    resultadopibper = pibpercapita > pibpercapita1;
    resultadosuperpoder = superpoder > superpoder1;

    printf("Comparação das Cartas (1 = Carta 1 Venceu | 0 = Carta 2 Venceu) :\n\n");

    printf("População : %d\n" , resultadopopulacao);
    printf("Área em km² : %d\n" , resultadoarea);
    printf("Densidade Populacional : %d\n" , resultadodensidade);
    printf("PIB : %d \n" , resultadopib);
    printf("Pontos Turisticos : %d\n" , resultadopontotu);
    printf("Pib Per Capita : %d\n" , resultadopibper);
    printf("Super Poder : %d" , resultadosuperpoder);
    
    

    return 0;
}
