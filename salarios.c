#include <stdio.h>
#include <string.h>

float totalizaHorasVariaveis (int dias) {
    int totalHoras=0, calculados=0, horas;

    while (calculados<dias) {
        calculados++;
        printf("Quantas horas no dia %d?", calculados);
        scanf("%d", &horas);
        totalHoras=totalHoras+horas;
    }
    return totalHoras;
}
int main () {
    int cracha, contrato, dias, horas, mS;
    float salario, maiorSalario=-1;

    printf("Digite o numero do cracha(0 para finalizar):");
    scanf("%d", &cracha);

    while (cracha!=0) {
        printf("Fixo (1) ou Variavel (2):");
        scanf("%d", &contrato);
        if (contrato==1) {
            printf("Digite os dias de contrato:");
            scanf("%d", &dias);
            printf("Digite os horas por dia:");
            scanf("%d", &horas);
            salario=dias*horas*30;
        }
        else {
            printf("Digite os dias de contrato:");
            scanf("%d", &dias);
            horas=totalizaHorasVariaveis(dias);
            salario=horas*30;
        }
        printf("Salario: R$%.2f", salario);

        if (salario>maiorSalario) {
            maiorSalario=salario;
            mS=cracha;
        }
        printf("\nDigite o numero do cracha(0 para finalizar):");
        scanf("%d", &cracha);
    }

    printf("O maior salario pertence ao contratado %d!", mS);

    return 0;
}
