#include <stdio.h>
#include <stdlib.h>

void trocaValores(int *a, int *b){

    int aux = *a;
    *a = *b;
    *b = aux;

}



int main()
{
    int x = 10, y = 20;

    printf("Antes: X = %d | Y = %d ", x, y);

    trocaValores(&x,&y);

    printf("Depois: X = %d | Y = %d ", x, y);

    return 0;
}
