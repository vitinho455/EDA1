#include <stdio.h>
#include <stdlib.h>

int buscaLinear(int v[], int n, int valor){

    int i, pos = 0;

    for(i = 0; i < n; i++){

        if(v[i] > pos){

            pos = i;
            valor = v[i];

        }else{

        pos = -1;

        }

        return pos, valor;
    }


}

int contaOcorrencias(int v[], int n, int valor){



}

int indiceMaior(int v[], int n){

    int i, pos = 0;

    for(i = 0; i < n; i++){

        if(v[i] > pos){

            pos = i;

        }

        return pos;
    }


}

int somaVetor(int v[], int n){


}

void imprimeVetor(int v[], int n){



}


int main()
{
    printf("Hello world!\n");
    return 0;
}
