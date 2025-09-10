#include <stdio.h>

int main (){
    printf("Desafio Super Trunfo - Países!\n");  //titulo do jogo 
    // declaro as variáveis 
    int Codigo;
    char cidade[50];
    int populacao;
    float area;
    float PIB;
    int turisticos;
// Entrada dos dados no jogo 
    printf("Qual o código da cidade?\n");
    scanf("%d", &Codigo);

    printf("Qual o nome da cidade?\n");
    scanf("%s", cidade);

    printf("Qual a população da cidade?\n");
    scanf("%d", &populacao);

    printf("Qual a área da cidade?\n");
    scanf("%f", &area);

    printf("Qual o PIB da cidade?\n");
    scanf("%f", &PIB);

    printf("Qual o número de pontos turísticos da cidade?\n");
    scanf("%d", &turisticos);

    printf("\n--- Dados da Cidade ---\n");
    printf("Codigo da cidade: %d\n", Codigo);
    printf("Nome da cidade: %s\n", cidade);
    printf("Populacao da cidade: %d\n", populacao);
    printf("area da cidade: %.2f\n", area);
    printf("PIB da cidade: %.2f\n", PIB);
    printf("Numero de pontos turisticos: %d\n", turisticos);

    return 0;
}