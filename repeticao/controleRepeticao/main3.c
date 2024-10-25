#include <stdio.h>

int main()
{

  int numero;

  printf("Insira um número positivo: ");

  scanf("%d", &numero);

  if (numero <= 0)
  {

    goto erro; // Vai para o rótulo 'erro' se o número não for positivo
  }

  printf("Número válido: %d\n", numero);

  return 0;

erro: // Rótulo para manipular erro

  printf("Erro: Número inválido.\n");

  return 0;
}