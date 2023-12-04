#include <stdio.h>

int main(void){
  int cont, qtd_pessoa;
  float altura;
  int cont2m = 0;
  float soma = 0;
  float maiorAltura = 0;


   printf("Digite a quantidade de pessoa você que pegar a altura: ");
   scanf("%i", &qtd_pessoa);

  for(cont = 0; cont <= qtd_pessoa; cont++){ // O(N)
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

  printf("A maior altura encontrada foi: %.2f\n", maiorAltura);
  printf("A media das alturas eh: %.2f\n", soma/cont);
  printf("Número de pessoas com altura maior do que 2 metros: %.2d\n", cont2m);

  return 0;
}
