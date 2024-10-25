#include <stdio.h>

int fatorial(int valor)
{

  if (valor > 0)
  { // Critério de parada

    return valor * fatorial(valor - 1); // Chamada recursiva
  }
  else
  {

    return 1;
  }
}

int main()
{

  int n, resultado;

  printf("\nDigite um numero inteiro positivo: ");

  scanf("%d", &n);

  resultado = fatorial(n);

  printf("\nResultado do fatorial = %d", resultado);

  return 0;
}