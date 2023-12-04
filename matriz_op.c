#include <stdio.h>

int main() {
    int matriz[4][4], i, j;
    int elemento;

    printf("Digite os elementos da matriz 4x4:\n");

    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            printf("Elemento [%d][%d]: ", i, j);

            if (scanf("%d", &elemento) != 1) {
                printf("Entrada inválida. Digite apenas números inteiros.\n");
                return 0;
            }

            matriz[i][j] = elemento;
        }
    }

    printf("\nMatriz inserida:\n");
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            printf("%d\t", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}
