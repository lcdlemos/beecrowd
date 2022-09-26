#include <stdio.h>

int main()
{
    struct ficha_de_aluno{
        char nome[50];
        char disciplina[30];
        float nota1, nota2, nota3;
    } aluno;
    
    scanf("%s", aluno.nome);
    scanf("%s", aluno.disciplina);
    scanf("%f", &aluno.nota1);
    scanf("%f", &aluno.nota2);
    scanf("%f", &aluno.nota3);
    
    printf("-------- Cadastro de Aluno --------\n");
    
    printf("Nome ..............: %s\n", aluno.nome);
    printf("Disciplina ........: %s\n", aluno.disciplina);
    printf("Nota da Prova 1 ...: %.2f\n" , aluno.nota1);
    printf("Nota da Prova 2 ...: %.2f\n" , aluno.nota2);
    printf("Nota da Prova 2 ...: %.2f\n" , aluno.nota3);
    printf("Media .............: %.2f\n" , (aluno.nota1 + aluno.nota2 + aluno.nota3)/3);

    return 0;
}
