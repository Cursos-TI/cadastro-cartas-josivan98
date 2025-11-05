#include <stdio.h>

int main (){
// Área para definição das variáveis para armazenar as propriedades das cidades
    char estadoA = 'A'; 
    char codigoA[3] = "A01";
    char cidadeA[20] = "Fortaleza";
    unsigned int populaçaoA = 2578483;
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
    unsigned int populaçaoB =  2568928;
    float areaB = 693.442;
    float pibB = 69.9;
    int pontos_turisticosB = 11;
    float dens_popuB = 27.3;
    float per_capitaB = 3692;
    float dens_Pop_inverB = 269.9;
    float super_poderB = 2.573;

        printf(" area A %.2f é maior que area B %.2f %d \n", areaA, areaB,
                                                    (areaA) > (areaB) );

        return 0;
}