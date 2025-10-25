#include <stdio.h>

int main(){

    /*
    Atribição simples (=)
    Atribição com soma (=+)
    Atribição com subtração (-=)
    Atribição com multiplicação (*=)
    Atribição com divisão (/=)
    */

    int numero1 = 10, numero2, resultado;

    resultado = ++numero1;

    printf("resultado: %d\n", resultado);

    resultado -= 5;

    printf("resultado: %d\n", resultado);
}