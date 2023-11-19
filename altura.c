#include <stdio.h>

int main(void){
int cont, cont2m;
  float altura, maiorAltura, media, soma;
  cont=0;
  cont2m = 0;
  soma = 0;
  maiorAltura = 0;

  while (cont < 4){
      printf("Altura: ");
      scanf("%f", &altura);
      
      if (altura > maiorAltura){
          maiorAltura = altura;
        }

      soma = soma + altura;
  
      if (altura > 2.0){
          cont2m = cont2m + 1;
        }
      cont = cont + 1; //cont++;    
    }
  media = soma / cont;

  printf("A maior altura encontrada foi: %f\n", maiorAltura);
  printf("A media das alturas eh: %f\n", media);
  printf("Número de pessoas com altura maior do que 2 metros: %d\n", cont2m);
  return 0;
}