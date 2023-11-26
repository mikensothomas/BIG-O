/*
Este código é um código feito em C, 
é uma matriz 4 por 4 onde o teclado digita 
os números da matriz e imprime a matriz.
*/
#include <stdio.h>
#include <time.h>

int main() {
    int matriz[4][4];

    printf("Digite os elementos da matriz 4x4:\n");

    time_t inicial, fim;
    time(&inicial);

    for (int i = 0; i < 4; i++) { //O(n)
        for (int j = 0; j < 4; j++) { //O(n)
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    printf("\nMatriz inserida:\n");
    for (int i = 0; i < 4; i++) { //O(n)
        for (int j = 0; j < 4; j++) { //O(n)
            printf("%d\t", matriz[i][j]);
        }
        printf("\n");
    }
    
    time(&fim);
    time_t tempo = fim - inicial;

    printf("O tempo de execução é de: %ld segudos.\n", tempo);

    return 0;

    //O(n)*O(n) + O(n)*O(n) = O(n*n) + O(n*n)
    //O(n²) + O(n²)
    //A complexidade deste algoritmo é Quadradada O(n²)
}
