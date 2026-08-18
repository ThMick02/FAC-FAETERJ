#include <stdio.h>

void processaPauta( int *presencas, float *percfaltas) {
    int jafiz, frequencia, faltas=0;
    
    for (jafiz=0; jafiz<15; jafiz++) {
        printf("Digite o numero de tempos faltados:");
        scanf("%d", &frequencia);

        if (frequencia==1) {
            faltas++;
        }
        else if (frequencia==2) {
            faltas+=2;
        }
    }
    *presencas=30-faltas;
    *percfaltas=faltas*100/30;
}

int main () {
    int matricula, presencas;
    float media, nota1, nota2, nota3, percfaltas;

    printf("Digite a matricula (negativo para finalizar):");
    scanf("%d", &matricula);

    while (matricula>=0) {
        printf("Digite sua primeira nota:");
        scanf("%f", &nota1);
        printf("Digite sua segunda nota:");
        scanf("%f", &nota2);
        printf("Digite sua terceira nota:");
        scanf("%f", &nota3);

        media=(nota1+nota2+nota3)/3;
        processaPauta(&presencas, &percfaltas);

        printf("\nMatricula: %d | Media: %.2f", matricula, media);
        printf("\nPresencas: %d | PercFaltas: %.1f%%", presencas, percfaltas);

        printf("\nDigite a matricula:");
        scanf("%d", &matricula);
    }
    return 0;
}
