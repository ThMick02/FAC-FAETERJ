#include <stdio.h>

void diaAnterior (int *dia, int *mes, int *ano) {
    if (*dia==1) {
        if (*mes==1) {
            *ano=*ano-1;
            *mes=12;
        }
        else {
            *mes=*mes-1;
        }
        *dia=31;
    }
    else {
        *dia=*dia-1;
    }
}
int main () {
    int prioridade, dia, mes, ano;
    float qtdAlta=0, qtdNormal=0, percAlta;

    printf("Digite a prioridade da tarefa (Normal=0, Alta=1): ");
    scanf("%d", &prioridade);

    while (prioridade==0 || prioridade==1) {
        printf("Digite o dia: ");
        scanf("%d", &dia);
        printf("Digite o mes: ");
        scanf("%d", &mes);
        printf("Digite o ano: ");
        scanf("%d", &ano);

        if (prioridade==1) {
            diaAnterior(&dia, &mes, &ano);
            qtdAlta++;
        }
        else {
            qtdNormal++;
        }

        printf("Data de entrega do projeto: %d/%d/%d.", dia,mes,ano);
        printf("\nDigite a prioridade da tarefa (Normal=0, Alta=1): ");
        scanf("%d", &prioridade);
    }
    percAlta=(qtdAlta/(qtdNormal+qtdAlta))*100;
    printf("O percentual de tarefas de alta priorade foi de %.2f%%!", percAlta);

    return 0;
}
