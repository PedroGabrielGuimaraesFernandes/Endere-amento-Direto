#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int tamanhoVetor = 200;
    int tamanhoAux = 100;
    int vetor[tamanhoVetor];  // Vetor com tamanho 200
    int aux[tamanhoAux];      // Vetor auxiliar
    srand(time(NULL));

    // Preenche o vetor com números aleatórios
    for (int i = 0; i < tamanhoVetor; i++) {
        vetor[i] = rand() % 100;
    }

    // Imprime o vetor não organizado
    printf("Vetor original:\n");
    for (int i = 0; i < tamanhoVetor; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");

    // Preenche o vetor aux com 0
    for (int i = 0; i < tamanhoAux; i++) {
        aux[i] = 0;
    }

    // Imprime o aux inicializado
    printf("Vetor auxiliar inicializado:\n");
    for (int i = 0; i < tamanhoAux; i++) {
        printf("%d ", aux[i]);
    }
    printf("\n");

    // Conta as ocorrências
    for (int i = 0; i < tamanhoVetor; i++) {
        aux[vetor[i]]++;
    }

    // Imprime o vetor aux após contar
    printf("Vetor auxiliar com contagens:\n");
    for (int i = 0; i < tamanhoAux; i++) {
        printf("%d ", aux[i]);
    }
    printf("\n");

    // Ordena o vetor original
    int cont = 0;
    for (int i = 0; i < tamanhoAux; i++) {
        for (int j = 0; j < aux[i]; j++) {
            if (cont < tamanhoVetor) {
                vetor[cont] = i;
                cont++;
            }
        }
    }

    // Imprime o vetor organizado
    printf("Vetor ordenado:\n");
    for (int i = 0; i < tamanhoVetor; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");

    return 0;
}
