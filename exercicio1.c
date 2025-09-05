#include <stdio.h>


int main() {

float salario = 2500.50;

float *ponteiro_salario;


// TODO: Faça o ponteiro apontar para salario
ponteiro_salario = &salario;

// TODO: Imprima o valor usando o ponteiro
printf("Salario: %.2f\n", *ponteiro_salario);

// TODO: Modifique o salario através do ponteiro para 3000.00
*ponteiro_salario = 3000.00;

// TODO: Imprima o novo valor
printf("Novo Salario: %.2f\n", *ponteiro_salario);

return 0;

}