#include <stdio.h>

int main()
{
    float salario, inss, ir, sal_liquido;

    printf("Cálculo de Salário Líquido com desconto do IR e INSS\n\n");

    printf("Digite seu salário bruto: ");
    scanf("%f", &salario);

    // Cálculo do INSS
    if (salario <= 1320.00)
    {
        inss = salario * 0.075;
    }
    else if (salario <= 2571.29)
    {
        inss = salario * 0.09;
    }
    else if (salario <= 3856.94)
    {
        inss = salario * 0.12;
    }
    else if (salario <= 7507.49)
    {
        inss = salario * 0.14;
    }
    else
    {
        inss = 1051.04; // Teto de contribuição do INSS
    }

    // Cálculo do IR
    if (salario <= 1903.98)
    {
        ir = 0;
    }
    else if (salario <= 2826.65)
    {
        ir = (salario - inss) * 0.075;
    }
    else if (salario <= 3751.05)
    {
        ir = (salario - inss) * 0.15;
    }
    else if (salario <= 4664.68)
    {
        ir = (salario - inss) * 0.225;
    }
    else
    {
        ir = (salario - inss) * 0.275;
    }

    // Cálculo do Salário Líquido
    sal_liquido = salario - inss - ir;

    // Resultados
    printf("\nDesconto do INSS: %.2f\n", inss);
    printf("Desconto do Imposto de Renda: %.2f\n", ir);
    printf("Salário Líquido: %.2f\n", sal_liquido);

    return 0;
}
