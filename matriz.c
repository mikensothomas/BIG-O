/*
Este código é um código feito em C, 
é uma matriz 4 por 4 onde o teclado digita 
os números da matriz e imprime a matriz.
*/
#include <stdio.h>

int main() {
    int matriz[4][4], i, j;

    printf("Digite os elementos da matriz 4x4:\n");

    
        for (i = 0; i < 4; i++) { //O(n)
            for (j = 0; j < 4; j++) { //O(n)
                printf("Elemento [%d][%d]: ", i, j);
                scanf("%d", &matriz[i][j]);
            }
        }

        printf("\nMatriz inserida:\n");
        for (i = 0; i < 4; i++) { //O(n)
            for (j = 0; j < 4; j++) { //O(n)
                printf("%d\t", matriz[i][j]);
            }
            printf("\n");
        }

    return 0;
}
    /*
    O(n)*O(n) + O(n)*O(n) = O(n*n) + O(n*n)
    O(n²) + O(n²) = 2O(n²)
    A complexidade deste algoritmo é Quadradada O(n²)
     
    Este algoritmo é um exemplo de algoritmo de complexidade polinomial. 
    Ele é classificado como P (problemas que podem ser resolvidos em tempo polinomial). 
    O motivo é que o tempo de execução cresce de maneira polinomial com o tamanho da entrada 
    (neste caso, o tamanho da matriz). 
    
    Pode ser útil incluir verificações para garantir que a entrada 
    do usuário seja válida. Por exemplo, você pode querer garantir que 
    o usuário insira valores inteiros e não caracteres.
    */
