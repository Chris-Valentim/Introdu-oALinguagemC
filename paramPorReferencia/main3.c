#include <stdio.h>

struct Pessoa
{

  char nome[50];

  int idade;
};

void modificarPessoa(struct Pessoa *p)
{

  p->idade = 30;
}

int main()
{

  struct Pessoa pessoa1;

  strcpy(pessoa1.nome, "João");

  pessoa1.idade = 25;

  modificarPessoa(&pessoa1);

  printf("Nome: %s\n", pessoa1.nome);

  printf("Idade: %d\n", pessoa1.idade);

  return 0;
}