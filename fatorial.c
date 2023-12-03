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


  if(numero < 0){
    printf("ERRO: Por favor digite um nṕumero não negativo \n");
  } else {
    while(numero > 0){ //O(N)
    fat = fat*numero;

    numero = numero - 1;
  }
  printf("O fatorial é: %i\n", fat);

  }
  return 0;
}
/*
A complexidade desse algoritmo pode ser representada como O(N), 
onde N é o valor do número inserido. Isso ocorre porque o loop while é 
executado N vezes, onde N é o valor do número inserido. 

Este algoritmo é de classe P, pois o tempo de execução é polinomial 
em relação ao tamanho da entrada, seguindo a definição da classe P 
na teoria da complexidade computacional.

Otimização:

if(numero < 0){
   printf("ERRO: Por favor digite um nṕumero não negativo \n");
 } else {
   while(numero > 0){
   fat = fat*numero;


   numero = numero - 1;
 }
 printf("O fatorial é: %i\n", fat);

*/

