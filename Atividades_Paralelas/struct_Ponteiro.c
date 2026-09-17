#include <stdio.h>

typedef struct {

    char nome[50];
    int idade;
    int matricula;

}Aluno;


int main(){

    Aluno aluno;

    printf("Digite a idade do aluno: \n");
    scanf("%d", &aluno.idade);

    printf("Digite a matricula do aluno: \n");
    scanf("%d", &aluno.matricula);

    printf("Digite o nome do aluno: \n");
    scanf("%s", aluno.nome);

    FILE *arquivo = fopen("arqui.txt", "w");


    if(arquivo == NULL){
        printf("Erro ao abrir o arquivo");
        return 1;
    }

    fprintf(arquivo, "====== ALocação de informações de Alunos ====== \n");

    fprintf(arquivo, "Nome: %s\n", aluno.nome);
    fprintf(arquivo, "Idade: %d\n", aluno.idade);
    fprintf(arquivo, "Matricula: %d\n", aluno.matricula);

    fclose(arquivo);

    printf("Arquivo registrado com sucesso!\n");

    return 0;
}
