#include <stdio.h>

int main () {

   int corrigidos, qtdAlunos;
   float mediaFinal, nota, mediaTrab;

   printf("Me diga a quantidade de alunos: ");
   scanf("%i", &qtdAlunos);

   corrigidos=0;

   while(corrigidos<qtdAlunos) {

       corrigidos++;
       printf("Digite a nota do aluno: ");
       scanf("%f", &nota);
       printf("Digite a media dos trabalhos: ");
       scanf("%f", &mediaTrab);

       mediaFinal=0.85*nota+0.15*mediaTrab;

       printf("A media final do aluno Ã© %.1f \n", mediaFinal);
   }
}
