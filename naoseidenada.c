#include <stdio.h>


int main(){
// definindo as variavel

char produtoA [20] = "wheyPro";
char produtoB [20] = "creatina";

unsigned int estoqueA = 1000;
unsigned int estoqueB = 2000;

float valorA = 59.90;
float valorB = 39.90;

unsigned int minimoA = 500;
unsigned int minimoB = 2500;

double valortotalA;
double valortotalB;

int resultadoA, resultadoB;

// exibir as informações dos produtos

printf("produto A é: %s\n valor é: %.2f\n estoque minimo é: %u\n", produtoA, valorA, minimoA);
printf("produto B é: %s\n valor é: %.2f\n estoque minimo é: %u\n", produtoB, valorB, minimoB);

//comparação com estowue minimo
resultadoA = estoqueA > minimoA;
resultadoB = estoqueB > minimoB;

printf ("o produto: %s\n tem estoque minimo? %d\n", produtoA, resultadoA);
printf ("o produto: %s\n tem estoque minimo? %d\n", produtoB, resultadoB);

// comparação de valores 
printf(" o valor total de A (R$ %.2f) é maior que o valor total de B(R$ %.2f)? %d\n ",
                                        estoqueA * valorA, 
                                        estoqueB * valorB,
                                        (estoqueA * valorA) > (estoqueB * valorB));



}