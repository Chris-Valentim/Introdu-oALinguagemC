#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, i;

    printf("\nDigite um número: \n");
    scanf("%d", &num);

    i = 0;

    while (num > 1)
    {
        if (num % 2 == 0)
        {
            num /= 2;
        }
        else
        {
            num = 3 * num + 1;
        }
        printf("%d\n", num);
        i++;
    }

    printf("\nTotal de passos: %d\n", i);

    return 0;
}
