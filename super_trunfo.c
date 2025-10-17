#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
    char estado = 'A'; 
    char codigo[10] = "A01";
    char cidade[20] = "Fortaleza";
    int populaçao = 2578483;
    float area = 313.8;
    float pib = 73.4;
    int pontos_turisticos = 66;

  // Área para entrada de dados
  printf("Qual o estado? \n");
  printf("Qual o código?\n");
  printf("Nome da cidade?\n");
  printf("População?\n");
  printf("Area?\n");
  printf("PIB?\n");
  printf("Quantos pontos turísticos?\n");
  // Área para exibição dos dados da cidade
    scanf("%c", &estado);
    scanf("%c", &codigo);
    scanf("%s", &cidade);
    scanf("%d", &populaçao);
    scanf("%f", &area);
    scanf("%i", &pontos_turisticos);
return 0;
} 
