/*
É um código feito em C que recebe altura de 5 pessoas 
onde vão ser imprimidas:
A maior altura, a média das alturas e as pessoas com altura maior que 2 metros.  
*/
#include <stdio.h>

int main(void){
  int cont;
  float altura;
  int cont2m = 0;
  float soma = 0;
  float maiorAltura = 0;
  float media;

  for(cont = 0; cont <= 4; cont++){
    printf("Altura: ");
    scanf("%f", &altura);
      
    if (altura > maiorAltura){
      maiorAltura = altura;
    }

    soma = soma + altura;
  
    if (altura > 2.0){
      cont2m = cont2m + 1;
    }  
  }
  media = soma / cont;

  printf("A maior altura encontrada foi: %.2f\n", maiorAltura);
  printf("A media das alturas eh: %.2f\n", media);
  printf("Número de pessoas com altura maior do que 2 metros: %.2d\n", cont2m);
  return 0;
}