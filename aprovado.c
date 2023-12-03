/*
Este código é um código que recebe três notas
de três alunos, e ele vai dizer se os alunos são aprovados 
ou não e depois ele vai dizer quantos alunos foram aprovados, reprovados ou 
estão em recuperação nos três alunos.
*/
#include <stdio.h>

int main(void) {
  int n1, n2, tA, tR;
  float media;
  int cont = 0;
  tA = tR = 0;



  while (cont < 3){ //O(N)
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

  printf("\n");
  printf("\n Total aprovado: %d", tA);
  printf("\n Total reprovado:%d", tR);

  printf("\n\n");
  return 0;
}

/*
A complexidade deste algoritmo é linear O(n), 
onde n é o número de iterações do loop (neste caso, 3).

Este algoritmo é de classe P porque o tempo de execução aumenta linearmente
com o tamanho da entrada. A entrada neste contexto específico não influencia
o desempenho de maneira significativa. 

Optimização:
  O loop “while” poderia ser substituído polo loop “for” como
  a variável “cont” é usado somente dentro do loop “while” daí 
  a gente poderia declarar-la diretamente dentro do loop “for”

  A variável “media” poderia ser usada como uma variável local, 
  daí o programa ficaria com menos linhas de código.

  if ((media > 5) && (media < 7))
  Neste caso poderia ser apenas if (media == 6)
  Assim o programa ficaria mais simples.
  
  Poderia ter também uma outra verificação para 
  verificar se a média vai além de 10.

*/