#include <stdio.h>

int x = 10;

int dobrar()
{

  return 2 * x;
}

int main()
{

  printf("\n Valor de x global = %d", x);

  printf("\n Valor de x global alterado na função dobrar() = %d", dobrar());

  return 0;
}