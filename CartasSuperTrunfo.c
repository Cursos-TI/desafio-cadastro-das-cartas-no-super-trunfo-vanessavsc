#include <stdio.h>

int main (){
    printf("Desafio Super trunfo - Países!\n");
    
    int Codigo;
    char Nome;
    int população;
    float area;
    float PIB;
    int pontos, turisticos;

    printf("Qual o codigo da cidade/n");
    scanf("%d", &codigo);

    printf ("Qual o nome da cidade?\n");
    scanf("%s", &cidade);

    printf ("Qual a população da cidade?\n");
    scanf("%d", &população);

    printf("Qual a área da cidade?\n");
    scanf("%f", &área);

    printf(" Qual o PIB da cidade?\n");
    scanf("%f", &PIB)

    printf(" Qual o número de pontos turísticos da cidade?\n");
    scanf("%d", &pontos,turísticos);

    printf("código da cidade: %d\n", código);
    printf("Nome da cidade: %s\n", Nome);
    printf("População da cidade: %d\n", população);
    printf("Area da cidade: %2f\n", área);
    printf("PIB da cidade: %2f\n", PIB);
    printf("Número de pontos turísticos da cidade: %d\n", pontos,turísticos);
return 0;    


}