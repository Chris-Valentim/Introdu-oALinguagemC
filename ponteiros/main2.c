#include <stdio.h>

int main()
{

  char *ptr;

  int i;

  char vet[5] = {'a', 'b', 'c', 'd', 'e'};

  ptr = vet; // A variavel ponteiro ptr   aponta para o primeiro elemento do   vetor

  for (i = 0; i < 5; i++)
  {

    // conteudo do vetor acessado pela variavel

    printf("\n Vet[%d] = %c", i, vet[i]);

    // conteudo do vetor acessado pelo ponteiro

    printf("\n ptr = %c", *ptr);

    ptr++;
  }

  return 0;
}