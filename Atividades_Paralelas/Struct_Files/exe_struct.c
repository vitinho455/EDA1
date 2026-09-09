#include <stdio.h>
#include <stdlib.h>

typedef struct{

    char name[50];
    int idade;
    float peso;


}Estudante;


int main()
{

    int i,n;

    printf("Digite a quantidade de estudantes que vão ser cadastrados: ", n);
    scanf("%d", &n);

    Estudante estudante[n];

    for(i = 0; i < n; i++){

        printf("Digite o nome do %d° estudante: %s", i+1);
        scanf("%s", estudante[i].name);

        printf("\n");

        printf("Digite a idade do estudante: " );
        scanf("%d", &estudante[i].idade);

        printf("\n");

        printf("Digite ao peso do estudante: " );
        scanf("%f", &estudante[i].peso);

        printf("\n");
    }

    for(i = 0; i < n; i++){
        printf(
                estudante[i].name,
                estudante[i].idade,
                estudante[i].peso);
    }

    return 0;
}
