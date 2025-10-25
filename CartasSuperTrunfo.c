#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.
// Organizando o código
int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
    char estado = 'A'; 
    char codigo[3] = "A01";
    char cidade[20] = "Fortaleza";
    int populaçao = 2578483;
    float area = 313.8;
    float pib = 73.4;
    int pontos_turisticos = 66;

    //Área para entrada de dados
    printf("Qual o estado? \n");
    scanf("%c", &estado); 

    printf("Qual o código?\n");
    scanf("%s", codigo);

    printf("Nome da cidade?\n");
    scanf("%s", &cidade);

    printf("População?\n");
    scanf("%d", &populaçao);

    printf("Area?\n");
    scanf("%f", &area);

    printf("pib?\n");
    scanf("%f", &pib);

    printf("Quantos pontos turísticos?\n");
    scanf("%i", &pontos_turisticos);

    //Área para exibição dos dados da cidade
    printf("Estado: %c");
    printf("Cidade: %s");
    printf("Código: %s");
    printf("População: %d");
    printf("Area em km2: %f");
    printf("PIB: %f");
    printf("Pontos turísticos: %d");
return 0;
} 