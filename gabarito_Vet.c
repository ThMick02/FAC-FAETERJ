#include <stdio.h>
#define TAM 6

void preencheVetor(int  v[], int qt){
  int ind;
  for (ind=0;ind<qt;ind++){
       printf("\nQ%d?",ind+1);
       scanf("%d",&v[ind]);
   }
   return ;
}
void demonstraVetor(int v[], int qt){
   int ind;

   for (ind=0;ind<qt;ind++){
       printf("\nQ%d - %d",ind+1, v[ind]);
   }
   return;
}
int main(void){
   int vGab[TAM], vProva[TAM], ind, certas;
  
   printf("\n GABARITO: entrada");
   preencheVetor(vGab, TAM);
  
   printf("\n GABARITO:mostrar ");
   demonstraVetor(vGab, TAM);
  
   printf("\n PROVA: entrada");
   preencheVetor(vProva,TAM);

   printf("\n PROVA:mostrar ");
   demonstraVetor(vProva, TAM);
  
   certas = 0;
   for (ind = 0; ind < TAM; ind++){
       if (vProva[ind] == vGab[ind])
            certas++;
   }
   printf("\n %d acertos",certas);
  
   return 0;
}
