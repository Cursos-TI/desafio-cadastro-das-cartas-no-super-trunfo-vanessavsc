#include <stdio.h>

int main (){
    printf("Desafio Super Trunfo - Países!\n");  //titulo do jogo 
    // declaro as variáveis da carta 1 
    char Codigo1;
    char cidade1[50];
    int populacao1;
    float area1;
    float PIB1;
    int turisticos1;
// Entrada dos dados no jogo 
    printf("Qual o código da cidade?\n");
    scanf("%s", &Codigo1);
getchar();
    printf("Qual o nome da cidade?\n");
    scanf("%s", cidade1);
getchar(); 
    printf("Qual a população da cidade?\n");
    scanf("%d", &populacao1);
getchar(); 
    printf("Qual a área da cidade?\n");
    scanf(" %[^\n]", cidade1);;
getchar(); 
    printf("Qual o PIB da cidade?\n");
    scanf("%f", &PIB1);
getchar(); 
    printf("Qual o número de pontos turísticos da cidade?\n");
    scanf("%d", &turisticos1);

     printf("Desafio Super Trunfo - Países!\n");  //titulo do jogo 
    
    
     // cadastro da carta 2
    char Codigo2;
    char cidade2[50];
    int populacao2;
    float area2;
    float PIB2;
    int turisticos2;
// Entrada dos dados no jogo 
    printf("Qual o código da cidade?\n");
    scanf("%s", &Codigo2);
getchar(); //
    printf("Qual o nome da cidade?\n");
    scanf("%s", cidade2);

    printf("Qual a população da cidade?\n");
    scanf("%d", &populacao2);

    printf("Qual a área da cidade?\n");
    scanf("%f", &area2);
getchar(); 
    printf("Qual o PIB da cidade?\n");
    scanf("%f", &PIB2);
getchar(); //
    printf("Qual o número de pontos turísticos da cidade?\n");
    scanf("%d", &turisticos2);

    // exibição dos dados carta 1
    printf("\n---Dados da 1ª carta  ---\n");
    printf("Codigo da cidade: %d\n", Codigo1);
    printf("Nome da cidade: %s\n", cidade1);
    printf("Populacao da cidade: %d\n", populacao1);
    printf("area da cidade: %.2f\n", area1);
    printf("PIB da cidade: %.2f\n", PIB1);
    printf("Numero de pontos turisticos: %d\n", turisticos1);

    // exibição dos dados carta 2
        printf("\n---Dados da 2ª carta  ---\n");
    printf("Codigo da cidade: %d\n", Codigo2);
    printf("Nome da cidade: %s\n", cidade2);
    printf("Populacao da cidade: %d\n", populacao2);
    printf("area da cidade: %.2f\n", area2);
    printf("PIB da cidade: %.2f\n", PIB2);
    printf("Numero de pontos turisticos: %d\n", turisticos2);
    return 0;
}