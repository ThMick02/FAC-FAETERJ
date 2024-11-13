#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int gerNumAleat(int limInf, int limSup) {
    int dif=(limSup-limInf)+1;

    return rand()%dif+limInf;
}
int questionario(int questoes) {
    int jafiz=0, positivas=0, resposta;

    while(jafiz<questoes) {
        jafiz++;

        resposta=gerNumAleat(1,2);
        if (resposta==1) {
            positivas++;
        }
    }
    return positivas;
}
int main () {
    int alunos, questoes, positivas, jafoi=0, pro=0, contra=0, neutro=0;

    printf("Quantos alunos participarao do questionario?");
    scanf("%i", &alunos);
    printf("O questionario tera quantas questoes?");
    scanf("%i", &questoes);

    while (jafoi<alunos) {
        jafoi++;

        positivas=questionario(questoes);
        printf("\n=============== Grupo ===============");
        if (positivas>=(questoes*2/3)) {
            printf("\nO aluno esta no grupo pro!");
            pro++;
        }
        else if (positivas<=(questoes/3)) {
            printf("\nO aluno esta no grupo contra!");
            contra++;
        }
        else {
            printf("\nO aluno esta no grupo neutro!");
            neutro++;
        }
    }

    printf("\n============== Resultado ==============");
    if (pro!=contra) {
        if (pro>contra) {
            if (pro>neutro) {
                printf("\nO maior grupo e o pro!");
            }
            else if (pro!=neutro) {
                printf("\nO maior grupo e o neutro!");
            }
            else {
                printf("\nOs maiores grupos sao o pro e o neutro!");
            }
        }
        else if (contra>pro) {
            if (contra>neutro) {
                printf("\nO maior grupo e o contra!");
            }
            else if (contra!=neutro) {
                printf("\nO maior grupo e o neutro!");
            }
            else {
                printf("\nOs maiores grupos sao o contra e o neutro!");
            }
        }
    }
    else {
        if (pro==neutro) {
            printf("\nOs grupos tem a mesma quantidade de alunos!");
        }
        else if (pro>neutro) {
            printf("\nOs maiores grupos sao o pro e o contra!");
        }
        else {
            printf("\nO maior grupo e o neutro!");
        }
    }
    return 0;
}
