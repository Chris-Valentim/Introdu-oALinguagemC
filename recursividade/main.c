#include <stdio.h>

int somar(int valor)
{

  if (valor != 0)
  { // Critério de parada

    return valor + somar(valor - 1); // Chamada recursiva
  }
  else
  {

    return valor;
  }
}

int main()
{

  int n, resultado;

  printf("\nDigite um numero inteiro positivo: ");

  scanf("%d", &n);

  resultado = somar(n); // Fazendo a primeira chamada da função

  printf("\nResultado da soma = %d", resultado);

  return 0;
}