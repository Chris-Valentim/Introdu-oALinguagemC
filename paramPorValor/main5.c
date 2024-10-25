#include <stdio.h>

int somar(int a, int b)
{

  return a + b;
}

int main()
{

  int res;

  res = somar(10, 15);

  printf("\n Resultado da soma = %d", res);

  return 0;
}