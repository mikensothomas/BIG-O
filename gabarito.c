#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define q 3
#define a 3

int main(void) {
  int soma[a+1], i, j;
  char gab[q];
  char resp[a][j];

  printf("......GABARITO........\n");
  printf("Entrar com as respostas das questões com a, b, c ou d");
  
  for(j = 0; j < q; j++){
    printf("\nResposta da questão %i: ", j+1);
    scanf(" %c", &gab[j]);
  }
  printf("\n\n");
  
  for(i = 0; i < a; i++){
    printf("\nA resposta do aluno %i: \n", i+1);
    for(j = 0; j < q; j++){
      printf("\nQuestão%i ", j+1);
      scanf(" %c", &resp[i][j]);
      if(resp[i][j] == gab[j]) soma[i]++;
    }
  }
  for(i = 0 ; i < a ; i++) {
    printf("O aluno %i acertou, %i Questoes!\n", i+1, soma[i+1]);
  }
  return 0;
}