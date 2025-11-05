#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.
// Organizando o código
int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
    char estadoA = 'A'; 
    char codigoA[3] = "A01";
    char cidadeA[20] = "Fortaleza";
    unsigned long int populaçaoA = 2578483;
    float areaA = 313.8;
    float pibA = 73.4;
    int pontos_turisticosA = 66;
    float dens_popuA = 0.82;
    float per_capitaA = 28.4;
    float dens_Pop_inverA = 121.6;
    float super_poder = 2.579;

    char estadoB = 'B'; 
    char codigoB[5] = "B01";
    char cidadeB[20] = "Salvador";
    unsigned long int populaçaoB =  2568928;
    float areaB = 693.442;
    float pibB = 69.9;
    int pontos_turisticosB = 11;
    float dens_popuB = 27.3;
    float per_capitaB = 3692;
    float dens_Pop_inverB = 269.9;
    float super_poderB = 2.573;

  //DETALHE: super poder é a soma de: populaçao, area, pib, pontos turis, per cap e dens inversa.

    //Área para entrada de dados
    
  printf("***SUPER TRUNFO RODANDO***\n");

  printf(" A população A: (%u), é maior que a população B? (%u) %d\n",
                                                   populaçaoA, populaçaoB,
                                                   (populaçaoA) > (populaçaoB));

  printf(" area A (%.2f) é maior que area B? (%.2f) %d \n", areaA, areaB,
                                                    (areaA) > (areaB) );
                                               
  printf(" PIB A (%.2f) é maior que PIB B? (%.2f) %d \n", pibA, pibB,
                                                    (pibA) > (pibB) );

  printf(" pontos turisticos A (%d) é maior que pontos tur B? (%d) %d \n", pontos_turisticosA , pontos_turisticosB,
                                                    (pontos_turisticosA) > (pontos_turisticosB) );

  printf(" A densidade populacional A (%.2f) é maior que densi popu B? (%.2f )%d \n", dens_popuA, dens_popuB,
                                                    (dens_popuA) > (dens_popuB) );

  printf(" Per capita A (%.2f) é maior que per capita B? (%.2f) %d \n", per_capitaA, per_capitaB,
                                                    (per_capitaA) > (per_capitaB) );

   printf(" Super poder A (%.2f) é maior que Super poder B? (%.2f) %d \n", super_poder, super_poderB,
                                                    (super_poder) > (super_poderB) );

  // resutado final do embate
printf("            ----\n");
printf("** RESULTADO FINAL **\n");

printf("População: carta A venceu \n");
printf("Área: carta B venceu \n");
printf("PIB: carta A venceu.\n");
printf("Pontos turísticos: carta A venceu.\n");
printf("Densidade populacional: carta A venceu.\n");
printf("Renda per capita: carta B venceu\n");
printf("Super poder: carta A venceu\n"); 

//vencedor do duelo.
printf("__________\n");
printf("VENCEDORA: CARTA A (5) a ()2 CARTA B");


      
return 0;
} 