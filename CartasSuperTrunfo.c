#include <stdio.h>

int main() {

    // Declaração das variáveis sem valores iniciais, cada uma com seu tipo de dados solicitado no desafio. 
    
    char carta1, estado1, codigo1[20], cidade1[20];
    int ponto_turistico1;
    float area1, pib1;
    // Ajustado o tipo de dados da população de int para unsigned long int
    int populacao1;

    char carta2, estado2, codigo2[20], cidade2[20];
    int ponto_turistico2;
    float area2, pib2;
    // Ajustado o tipo de dados da população de int para unsigned long int
    int populacao2;

    // Crieu um mini banner para apresentação do projeto. 
    printf("======================================================\n");
    printf("--- SISTEMA DE CADASTRO DE CARTAS DO SUPER TRUNFO --- \n");
    printf("======================================================\n");

    /*
    Nesse ponto o printf solicita a interação do usuário com o sistema para abribuir os dados nas variáveis. 
    O scanf armazena os valores que o usuário atribui. 
    Após coletado os dados nas variáveis de referência carta1, estado1.. Vamos repetir o processo para as variáveis carta2, estado2 e etc..
    */
    printf("Número da Carta: ");
    scanf(" %c", &carta1);
    
    printf("Referência do Estado: ");
    scanf(" %c", &estado1);
    
    printf("Digite o Código da Carta: ");
    scanf("%s", codigo1);
    
    printf("Digite nome da Cidade: ");
    scanf("%s", cidade1);

    printf("População da Cidade: ");
    scanf("%d", &populacao1);

    printf("Digite Área(em km²): ");
    scanf("%f", &area1);

    printf("Digite o PIB: ");
    scanf("%f", &pib1);

    printf("Digite o número de pontos Turísticos: ");
    scanf("%d", &ponto_turistico1);
    
    printf("\n\n");  // Quebro duas linhas para repetir o processo nas variáveis 2.
    
    printf("Número da Carta: ");
    scanf(" %c", &carta2);
    
    printf("Referência do Estado: ");
    scanf(" %c", &estado2);
    
    printf("Digite o Código da Carta: ");
    scanf("%s", codigo2);
    
    printf("Digite o nome da Cidade: ");
    scanf("%s", cidade2);

    printf("População da Cidade: ");
    scanf("%d", &populacao2);

    printf("Digite Área(em km²): ");
    scanf("%f", &area2);

    printf("Digite o PIB: ");
    scanf("%f", &pib2);

    printf("Digite o número de pontos Turísticos: ");
    scanf("%d", &ponto_turistico2);

    // Carta 1
    // Realiza o calculo da divisão por habitantes em mêtros quadrados, na variável desidade_populacional_carta1.
    // Faz a operação de divisão do pib com a população e armazena o resultado da riquesa média por pessoa na cidade na variável resultado_pibC1.
    // Realizado a conversão implicita das variável populacao1 que é do tipo int para float.
    float desidade_populacional_carta1 = populacao1 / area1;
    float resultado_pibC1 = pib1 / populacao1;
    
    // Carta 2 
    // Realiza o calculo da divisão por habitantes em mêtros quadrados, na variável desidade_populacional_carta2.
    // Faz a operação de divisão do pib com a população e armazena o resultado da riquesa média por pessoa na cidade na variável resultado_pibC2.
    // Realizado a conversão implicita das variável populacao2 que é do tipo int para float.
    float desidade_populacional_carta2 = populacao2 / area2;
    float resultado_pibC2 = pib2 / populacao2;
    
    // Quebro duas linhas para mostrar os resultados formatados de acordo com a solicitação do desafio.
    printf("\n\n");   
    
    // Resultado da primeira Carta.
    printf("Carta: %c\nEstado: %c\nCódigo: %s\n", carta1, estado1, codigo1);
    printf("Nome da Cidade: %s\nPopulação: %d\nÁrea: %.2f km²\n", cidade1, populacao1, area1);
    printf("PIB: %.2f bilhões de reais\nNúmero de Pontos Turísticos: %d\n", pib1, ponto_turistico1);
    printf("Densidade Populacional: %.2f hab/km²\nPIB per Capita: %.2f reais\n", desidade_populacional_carta1, resultado_pibC1);

    printf("\n"); //Quebra de linha.
    
    // Resultado da segunda Carta.
    printf("Carta: %c\nEstado: %c\nCódigo: %s\n", carta2, estado2, codigo2);
    printf("Nome da Cidade: %s\nPopulação: %d\nÁrea: %.2f km²\n", cidade2, populacao2, area2);
    printf("PIB: %.2f bilhões de reais\nNúmero de Pontos Turísticos: %d\n", pib2, ponto_turistico2);
    // Exibindo as informações das variáveis com valores com duas casa decimal. 
    printf("Densidade Populacional: %.2f hab/km²\nPIB per Capita: %.2f reais\n", desidade_populacional_carta2, resultado_pibC2);
    printf("\n");
    
    // Comparação das cartas com exemplo da População.
    printf("Comparação de cartas (Atributo: População):\n");
    printf("Carta 1 - Macapá(AP): %d\n", populacao1);
    printf("Carta 1 - Belém(PA): %d\n", populacao2);
    if(populacao1 > populacao2) {
        printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
    } else {
        printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
    }

    printf("\n");

    // Um mini banner de finalização do processo. 
    printf("===============================\n");
    printf("CADASTRO REALIZADO COM SUCESSO!\n");
    printf("===============================\n");
    return 0;
}