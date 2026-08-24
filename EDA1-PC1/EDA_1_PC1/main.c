#include <stdio.h>
#include <stdlib.h>

int buscaLinear(int v[], int n, int valor){

    int i;
    
    for(i = 0; i < n; i++){

        if(v[i] == valor){

	   return i;
        }

    }
	return -1;
}

int contaOcorrencias(int v[], int n, int valor){

    int i, count = 0;

    for(i = 0; i < n; i++){

        if(v[i] == valor){

            count++;
        }

    }

    return count;

}

int indiceMaior(int v[], int n){

    int i, pos = 0;

    for(i = 1; i < n; i++){

        if(v[i] > v[pos]){

            pos = i;

        }

    }

    return pos;

}


int somaVetor(int v[], int n){

    int i, sum = 0;

    for(i = 0; i < n; i++){

        sum += v[i];
    }

    return sum;
}

void imprimeVetor(int v[], int n){

    int i;

    for(i = 0; i < n; i++){

        printf("[%d]", v[i]);

    }

}


int main()
{

    int i,n,valor,valor_linear;

    printf("Digite a quantidade de elementos do vetor: ");
    scanf("%d", &n);

    int v[n];

    for(i = 0; i < n; i++){

        printf("Digite o %d° elemento: ", i+1);
        scanf("%d", &v[i]);

    }

    printf("\n");
    	
    imprimeVetor(v, n);
    
    printf("\n");

    printf("Soma do vetor: %d", somaVetor(v,n));

    printf("\n");
    
    printf("Indice do maior valor: %d", indiceMaior(v,n));
    
    printf("\n");
    
    printf("Digite um valor para saber a ocorrencia: ", valor);
    scanf("%d", &valor);
    
    printf("Valor com maior ocorrencia: %d", contaOcorrencias(v,n,valor));
    
    printf("\n");
    
    printf("Digite um valor do vetor para fazer uma busca linear: ");
    scanf("%d", &valor_linear);
 
    printf("Busca Linear: %d", buscaLinear(v,n,valor_linear));
 
    printf("\n");
    
    return 0;
}
