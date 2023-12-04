#include <stdio.h>

int main(void) {
  int n1, n2;
  int tA = 0;
  int tR = 0;
  int qtd_alunos;


  printf("Quantidade de alunos: ");
  scanf("%i", &qtd_alunos);

  for (int cont = 0; cont <= qtd_alunos; cont++){ //O(N)
    printf("Digite a primeira nota: \n");
    scanf("%i", &n1);

    printf("Digite a segunda nota: \n");
    scanf("%i", &n2);
    
    float media = (n1 + n2)/2;

    if ((media >= 0) && (media <= 5)){
      printf("Reprovado: \n");
      tR = tR + 1;
    } else {
      if ((media > 5) && (media < 7)){
        printf("Recuperação: \n");
      } else 
        if ((media >=7) && (media <= 10)){
        printf("Aprovado: \n");
          tA = tA + 1;
      } else {
        printf("A média não pode ser maior que 10\n");
        return 0;
      }
    }
  }

  printf("\n");
  printf("\n Total aprovado: %d", tA);
  printf("\n Total reprovado:%d", tR);

  printf("\n\n");
  return 0;
}
