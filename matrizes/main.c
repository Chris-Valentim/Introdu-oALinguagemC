#include <stdio.h>

int main()
{

  float notas[3][2];

  for (int i = 0; i < 3; i++)
  {

    for (int j = 0; j < 2; j++)
    {

      printf("digite a nota %d do aluno %d:", j + 1, i + 1);

      scanf("%f", &notas[i][j]);
    }
  }

  return 0;
}