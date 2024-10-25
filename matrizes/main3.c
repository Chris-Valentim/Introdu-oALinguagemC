#include <stdio.h>

int main()
{

    int m, n, p, q, i, j, k;

    int soma = 0;

    printf("Digite as dimensões da primeira matriz (m x n): ");

    scanf("%d %d", &m, &n);

    printf("Digite as dimensões da segunda matriz (p x q): ");

    scanf("%d %d", &p, &q);

    // Verificação se a multiplicação é possível

    if (n != p)
    {

        printf("A multiplicação entre as matrizes não é possível.\n");

        return 0;
    }

    // Declaração e entrada dos elementos das matrizes

    int matriz1[m][n], matriz2[p][q], resultado[m][q];

    printf("Digite os elementos da primeira matriz:\n");

    for (i = 0; i < m; i++)
    {

        for (j = 0; j < n; j++)
        {

            scanf("%d", &matriz1[i][j]);
        }
    }

    printf("Digite os elementos da segunda matriz:\n");

    for (i = 0; i < p; i++)
    {

        for (j = 0; j < q; j++)
        {

            scanf("%d", &matriz2[i][j]);
        }
    }

    // Cálculo do produto das matrizes

    for (i = 0; i < m; i++)
    {

        for (j = 0; j < q; j++)
        {

            for (k = 0; k < p; k++)
            {

                soma += matriz1[i][k] * matriz2[k][j];
            }

            resultado[i][j] = soma;

            soma = 0;
        }
    }

    printf("O produto das matrizes é:\n");

    for (i = 0; i < m; i++)
    {

        for (j = 0; j < q; j++)
        {

            printf("%d\t", resultado[i][j]);
        }

        printf("\n");
    }

    return 0;
}