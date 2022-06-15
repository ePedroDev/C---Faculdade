#include <stdio.h>

int main()
{
  int vetorX[10];
  int i, j, t;

    for(i = 0; i < 10; i++){
      printf("Digite o valor %d: ", i);
      scanf("%d", &vetorX[i]);
    }

    for(i = 0; i < 10 ; i++){
      for(j = 0 ; j < 10 ; j++){
        if(vetorX[j] > vetorX[i]){
          t = vetorX[i];
          vetorX[i] = vetorX[j];
          vetorX[j] = t;
        }
      }
    }

  printf("\n Vetor Ordenado: \n");
  for(i = 0 ; i < 10 ; i++){
    printf("%d - ", vetorX[i]);
  }
    return 0;
}