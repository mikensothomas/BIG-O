/*
Este código é um código que recebe três notas
de três alunos, e ele vai dizer se os alunos são aprovados 
ou não e depois ele vai dizer quantos alunos foram aprovados, reprovados ou 
está na recuperação nos três alunos.
*/
#include <stdio.h>

int main(void) {
  int n1, n2, cont, tA, tR;
  float mediaG, media;
  cont = 0;
  tA = tR = 0;

  while (cont < 3){
    printf("\n\nDigite a primeira nota: ");
    scanf("%i", &n1);

    printf("\n\nDigite a segunda nota: ");
    scanf("%i", &n2);
    
    media = (n1 + n2)/2;

    if ((media >= 0) && (media <= 5)){
      printf("Reprovado: ");
      tR = tR + 1;
    } else {
      if ((media > 5) && (media < 7)){
        printf("Recuperação: ");
      } else 
        if ((media >=7) && (media <= 10)){
        printf("Aprovado: ");
          tA = tA + 1;
      }
    }
    cont = cont + 1;
  }
  printf("\n\nTotal aprovado: %d", tA);
  printf("\n\nTotal reprovado:%d", tR);
  return 0;
}