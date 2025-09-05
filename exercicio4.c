#include <stdio.h>

// Função para calcular estatísticas de um array de notas
void calcular_estatisticas(float *notas, int quantidade, float *media, float *maior, float *menor) {
    // TODO: Implemente esta função
    // Calcule média, maior e menor nota usando ponteiros
    *maior = *notas;
    *menor = *notas;
    for (float *ptr = notas; ptr < (notas + quantidade); ptr++) {
        *media += *ptr;
        if(*ptr > *maior){
            *maior = *ptr;
        } else if (*ptr < *menor){
            *menor = *ptr;
        }
        
    }
    *media /= quantidade;
}

int main() {
    float notas[] = {8.5, 7.2, 9.1, 6.8, 8.9, 7.7, 9.5, 8.2};
    int qtd_notas = sizeof(notas) / sizeof(notas[0]);
    float media, maior, menor;

    calcular_estatisticas(notas, qtd_notas, &media, &maior, &menor);

    printf("=== RELATORIO DE NOTAS ===\n");
    printf("Notas: ");

    for(int i = 0; i < qtd_notas; i++) {
        printf("%.1f ", notas[i]);
    }

    printf("\n");
    printf("Media: %.2f\n", media);
    printf("Maior nota: %.2f\n", maior);
    printf("Menor nota: %.2f\n", menor);

    return 0;
}