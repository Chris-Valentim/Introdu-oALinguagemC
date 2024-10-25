#include <stdio.h>
#include <stdlib.h>

int *gerarRandomico()
{
  static int r[10];
  int a;

  for (a = 0; a < 10; ++a)
  {
    r[a] = rand() % 100; // Limita os valores entre 0 e 99
    printf("r[%d] = %d\n", a, r[a]);
  }

  return r;
}

int main()
{
  int *p;
  int i;

  p = gerarRandomico();

  for (i = 0; i < 10; i++)
  {
    printf("\np[%d] = %d", i, *(p + i));
  }

  printf("\n"); // Adiciona uma nova linha ao final da execução
  return 0;
}
