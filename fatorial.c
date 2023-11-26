/*
Este código é um código feito em c que
calcula o número fatorial de um número.
*/
#include <stdio.h>
#include <time.h>

int main(void) {
  
 int numero, fat;
  fat = 1;

  printf("Digite o úmero: ");
  scanf("%i", &numero);

time_t inicial, fim;
time(&inicial);

  while(numero > 0){ //O(N)
    fat = fat*numero;

    numero = numero - 1;
  }
  printf("O fatorial é: %i\n", fat);
  time(&fim);
  time_t tempo = fim - inicial;

  printf("O tempo de execução é de: %ld segndos.\n", tempo);
  return 0;
}

//A complexidade deste algoritmo é linear O(N)