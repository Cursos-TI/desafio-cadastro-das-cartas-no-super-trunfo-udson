#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.

//Define os dados a serem armazenados para cada carta.
struct CartasSuperTrunfo
{
    char estado;
    char codigo_carta[4];
    char nome_cidade[30];
    unsigned long int populacao;
    float area;
    float pib;
    float densidade_populacional;
    float pip_per_capita;
    int pontos_turisticos;
    float super_poder;
};

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    struct CartasSuperTrunfo carta1;
    struct CartasSuperTrunfo carta2;



    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    printf("---------- Cadastro da carta 1 ----------\n");
    printf("Digite o estado: ");
    scanf(" %c", &carta1.estado);
    printf("Digite o código da carta: ");
    scanf("%s", carta1.codigo_carta);
    printf("Digite o nome da cidade: ");
    scanf("%s", carta1.nome_cidade);
    printf("Digite o tamanho da populacao: ");
    scanf("%lu", &carta1.populacao);
    printf("Digite a área (km²): ");
    scanf("%f", &carta1.area);
    printf("Digite o PIB (R$): ");
    scanf("%f", &carta1.pib);
    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &carta1.pontos_turisticos);
    carta1.densidade_populacional = carta1.populacao/carta1.area; // Calcula a densidade populacional da carta1
    carta1.pip_per_capita = carta1.pib/carta1.populacao; // Calcula o PIB per capita da carta1
    carta1.super_poder = carta1.populacao + carta1.pib +
                         carta1.area +
                         carta1.pip_per_capita +
                         carta1.pontos_turisticos +
                         (1/carta1.densidade_populacional); // Calcula o super poder


    printf("\n---------- Cadastro da carta 2 ----------\n");
    printf("Digite o estado: ");
    scanf(" %c", &carta2.estado);
    printf("Digite o código da carta: ");
    scanf("%s", carta2.codigo_carta);
    printf("Digite o nome da cidade: ");
    scanf("%s", carta2.nome_cidade);
    printf("Digite o tamanho da populacao: ");
    scanf("%lu", &carta2.populacao);
    printf("Digite a área (km²): ");
    scanf("%f", &carta2.area);
    printf("Digite o PIB (R$): ");
    scanf("%f", &carta2.pib);
    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &carta2.pontos_turisticos);
    carta2.densidade_populacional = carta2.populacao/carta2.area; // Calcula a densidade populacional da carta2
    carta2.pip_per_capita = carta2.pib/carta2.populacao; // Calcula o PIB per capita da carta2
    carta2.super_poder = carta2.populacao + carta2.pib +
                         carta2.area +
                         carta2.pip_per_capita +
                         carta2.pontos_turisticos +
                         (1/carta2.densidade_populacional); // Calcula o super poder

    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.
    printf("\n\n======= Carta 1 =======");
    printf("\nEstado: %c", carta1.estado);
    printf("\nCódigo da carta: %s", carta1.codigo_carta);
    printf("\nNome da cidade: %s", carta1.nome_cidade);
    printf("\nPopulação: %lu habitantes", carta1.populacao);
    printf("\nÁrea: %.2fkm²", carta1.area);
    printf("\nPIB: R$%.2f", carta1.pib);
    printf("\nNúmero de pontos turísticos: %d", carta1.pontos_turisticos);
    printf("\nDensidade Populacional: %.2fhab/km²", carta1.densidade_populacional);
    printf("\nPIB per Capita: R$%.2f", carta1.pip_per_capita);
    printf("\nSuper poder: %.4f", carta1.super_poder);

    printf("\n\n======= Carta 2 =======");
    printf("\nEstado: %c", carta2.estado);
    printf("\nCódigo da carta: %s", carta2.codigo_carta);
    printf("\nNome da cidade: %s", carta2.nome_cidade);
    printf("\nPopulação: %lu habitantes", carta2.populacao);
    printf("\nÁrea: %.2fkm²", carta2.area);
    printf("\nPIB: R$%.2f", carta2.pib);
    printf("\nNúmero de pontos turísticos: %d", carta2.pontos_turisticos);
    printf("\nDensidade Populacional: %.2fhab/km²", carta2.densidade_populacional);
    printf("\nPIB per Capita: R$%.2f", carta2.pip_per_capita);
    printf("\nSuper poder: %.4f", carta2.super_poder);
    printf("\n");

    /*  **Comparação dos atributos das cartas**
        Para que não fosse necessário utilizar um bloco if foi utilizado aqui um artifício
        matemático para exibir o número da carta vencedora: printf("Carta %d venceu", !resultado + 1).
        Essa abordagem permitiu um código mais curto, mas incapaz de tratar os empates. :(
    */
    printf("\n\n======= Comparação das cartas =======");
    int resultado = carta1.populacao > carta2.populacao;
    printf("\nPopulação: Carta %d venceu (%d)", !resultado + 1, resultado);
    resultado = carta1.area > carta2.area;
    printf("\nÁrea: Carta %d venceu (%d)", !resultado + 1, resultado);
    resultado = carta1.pib > carta2.pib;
    printf("\nPIB: Carta %d venceu (%d)", !resultado + 1, resultado);
    resultado = carta1.pontos_turisticos > carta2.pontos_turisticos;
    printf("\nNúmero de pontos turísticos: Carta %d venceu (%d)", !resultado + 1, resultado);
    resultado = (1/carta1.densidade_populacional) > (1/carta2.densidade_populacional);
    printf("\nDensidade Populacional: Carta %d venceu (%d)", !resultado + 1, resultado);
    resultado = carta1.pip_per_capita > carta2.pip_per_capita;
    printf("\nPIB per Capita: Carta %d venceu (%d)", !resultado + 1, resultado);
    resultado = carta1.super_poder > carta2.super_poder;
    printf("\nSuper poder: Carta %d venceu (%d)", !resultado + 1, resultado);
    printf("\n");

    return 0;
}
