#include <stdio.h>

struct aluno
{

  int mat;

  float nota;
};

int main()
{

  struct aluno joao;

  struct aluno *ptr; // declaração do ponteiro para struct

  // Inicialização da struct declarada

  joao.mat = 1000;

  joao.nota = 8.5;

  // inicialização do ponteiro ptr

  ptr = &joao;

  printf("%d", ptr->mat); // impressão do atributo nome através do ponteiro

  printf("%f", ptr->nota); // impressão do atributo nota através do ponteiro

  return 0;
}