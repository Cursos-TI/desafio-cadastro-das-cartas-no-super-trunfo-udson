#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa
struct CartasSuperTrunfo
{
    char codigo_cidade[3];
    int populacao;
    float area;
    float pib;
    int pontos_turisticos;
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
    printf("Digite o código da cidade: ");
    scanf("%s", carta1.codigo_cidade);
    printf("Digite o tamanho da populacao: ");
    scanf("%d", &carta1.populacao);
    printf("Digite a área (km²): ");
    scanf("%f", &carta1.area);
    printf("Digite o PIB (R$): ");
    scanf("%f", &carta1.pib);
    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &carta1.pontos_turisticos);

    printf("\n---------- Cadastro da carta 2 ----------\n");
    printf("Digite o código da cidade: ");
    scanf("%s", carta2.codigo_cidade);
    printf("Digite o tamanho da populacao: ");
    scanf("%d", &carta2.populacao);
    printf("Digite a área (km²): ");
    scanf("%f", &carta2.area);
    printf("Digite o PIB (R$): ");
    scanf("%f", &carta2.pib);
    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &carta2.pontos_turisticos);

    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.
    printf("\n\n======= Carta 1 =======");
    printf("\nCódigo da cidade: %s", carta1.codigo_cidade);
    printf("\nPopulação: %d habitantes", carta1.populacao);
    printf("\nÁrea: %.2fkm²", carta1.area);
    printf("\nPIB: R$%.2f", carta1.pib);
    printf("\nNúmero de pontos turísticos: %d", carta1.pontos_turisticos);

    printf("\n\n======= Carta 2 =======");
    printf("\nCódigo da cidade: %s", carta1.codigo_cidade);
    printf("\nPopulação: %d habitantes", carta2.populacao);
    printf("\nÁrea: %.2fkm²", carta2.area);
    printf("\nPIB: R$%.2f", carta2.pib);
    printf("\nNúmero de pontos turísticos: %d", carta2.pontos_turisticos);

    return 0;
}
