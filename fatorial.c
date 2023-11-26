#include <stdio.h>

int main(void) {
  
 int numero, fat;
  fat = 1;

  printf("Digite o úmero: ");
  scanf("%i", &numero);

  while(numero > 0){
    fat = fat*numero;
    
    printf("%i\n", fat);

    numero = numero - 1;
  }
  return 0;
}