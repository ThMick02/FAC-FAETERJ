#include <stdio.h>
#include <math.h>

float funcaoDiagonal (float dbA, float dbB, float dbC) {
    float diagonal=sqrt(pow(dbA, 2)+pow(dbB, 2)+pow(dbC, 2));
    return diagonal;
}
float validaValor () {
    float valor;
    scanf("%f", &valor);
    while (valor<0) {
        printf("Resposta Invalida, tente outro:");
        scanf("%f", &valor);
    }
    return valor;
}

int main () {
    int codigo, e10=0, e15=0, e20=0, e25=0;
    float diagonal, dbA, dbB, dbC;

    printf("Qual o codigo do brinquedo?");
    scanf("%i", &codigo);

    while (codigo>=0) {  
        printf("\nQual o comprimento do brinquedo?");
        dbA=validaValor();
        printf("\nQual a largura do brinquedo?");
        dbB=validaValor();
        printf("\nQual a altura do brinquedo?");
        dbC=validaValor();
       
        diagonal=funcaoDiagonal(dbA, dbB, dbC);
       
        printf("\n========= Brinquedo Cod:%i =========", codigo);
        if (diagonal>20) {
            printf("\nBrinquedo para embalagem de 25cm!");
            e25++;
        }
        else if (diagonal>15) {
            printf("\nBrinquedo para embalagem de 20cm!");
            e20++;
        }
        else if (diagonal>10) {
            printf("\nBrinquedo para embalagem de 15cm!");
            e15++;
        }
        else {
            printf("\nBrinquedo para embalagem de 10cm!");
            e10++;
        }
        printf("\n\nQual o codigo do proximo brinquedo?");
        scanf("%i", &codigo);
    }

    printf("\nEmbalagens encomendadas:\n25cm=%i\n20cm=%i\n15cm=%i\n10cm=%i", e25, e20, e15, e10);

    return 0;
}
