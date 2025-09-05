#include <stdio.h>
#include <string.h>

// Função para inverter uma string usando ponteiros
void inverter_string(char *str) {
    // TODO: Implemente usando dois ponteiros
    // Um no início e outro no fim da string
    int tamanho = strlen(str);
    char *inicio = str;
    char *final = str + (tamanho - 1);
    char aux;
    for(int i = 0; i < tamanho/2; i++) {
        aux = *(inicio + i);
        *(inicio + i) = *(final - i);
        *(final - i) = aux;
    }
}

int main() {
    char texto[] = "PONTEIROS";
    
    printf("String original: %s\n", texto);
    inverter_string(texto);
    printf("String invertida: %s\n", texto);
    
    return 0;
}   