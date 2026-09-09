#include <stdio.h>

int main(){

    int vect[5] = {10,20,30,40,50};

    int *x = vect;

    int i;

    for(i = 0; i < 5; i++){

        printf("%d\n", *x);

    }

    return 0;
}