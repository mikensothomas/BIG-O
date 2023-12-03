/*
É um código feito em C que recebe altura de 5 pessoas onde vão ser imprimidas: 
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

  for(cont = 0; cont <= 4; cont++){ // O(N)
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
/*
A complexidade do algoritmo é O(N), 
que neste caso é o número de iterações do loop (N=5).

Otimizações Propostas:
A quantidade de entradas é fixa, logo poderia ser definida como uma constante. 
A entrada de dados poderia ser validada para não ocasionar possíveis erros. 
A variável 'cont' poderia ser apenas declarada no loop pois ela é usada somente nele, 
mantendo o escopo. A variável 'media' poderia ser eliminada, podendo ser calculada a 
média das alturas diretamente ao imprimir o resultado para o usuário.

Dado que o algoritmo executa em tempo constante e não há nenhum problema de decisão 
intrínseco ou complexidade crescente com o aumento do tamanho da entrada, 
ele se qualifica como um problema P.
*/