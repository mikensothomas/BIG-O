/*
Este código é um código feito em c que
calcula o número fatorial de um número.
*/
#include <stdio.h>

int main(void) {
  
  int numero, fat;
  fat = 1;

  printf("Digite o úmero: ");
  scanf("%i", &numero);


  while(numero > 0){ //O(N)
    fat = fat*numero;

    numero = numero - 1;
  }
  printf("O fatorial é: %i\n", fat);

  return 0;
}
/*
A complexidade deste algoritmo é linear O(N)

Este algoritmo é de classe P, pois o tempo de execução é polinomial 
em relação ao tamanho da entrada, seguindo a definição da classe P 
na teoria da complexidade computacional.
*/

