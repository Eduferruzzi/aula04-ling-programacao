#include <stdio.h>

// TODO: Implemente esta função usando apenas ponteiros
int encontrar_maior(int *array, int tamanho) {
    // Dica: use um ponteiro para percorrer o array
    // e outro para guardar o endereço do maior elemento
    int *maior = array;
    for(int *ptr = array; ptr < (array + tamanho); ptr++){
        if(*ptr > *maior){
            maior = ptr;
        }
    }
    return *maior;
}

int main() {
    int numeros[] = {45, 23, 78, 12, 67, 34, 89, 56};
    int tamanho = sizeof(numeros) / sizeof(numeros[0]);
    int maior = encontrar_maior(numeros, tamanho);

    printf("Array: ");

    for(int i = 0; i < tamanho; i++) {
        printf("%d ", numeros[i]);
    }

    printf("\nMaior elemento: %d\n", maior);

    return 0;
}