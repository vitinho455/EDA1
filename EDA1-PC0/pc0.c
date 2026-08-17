#include <stdio.h>
int soma_digitos(int n)
{
    int soma = 0;
    

    if (n < 0)
    n = -n;

    while (n > 0)
{
    soma += n % 10;
    n /= 10;
}
    return soma;
}

int maior(int a, int b)
{
    if (a > b)
    return a;
    return b;
}

int main(void)
{
    int a, b;

    printf("Digite dois inteiros: ");

    if (scanf("%d %d", &a, &b) != 2)
{

    printf("Entrada invalida.\n");

    return 1;
}

    printf("maior = %d\n", maior(a, b));
    printf("soma_digitos(a) = %d\n", soma_digitos(a));
    printf("soma_digitos(b) = %d\n", soma_digitos(b));

return 0;
}
