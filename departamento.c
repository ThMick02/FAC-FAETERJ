#include <stdio.h>

void umDepartamento (int qtdFun, int *ate5, int *mais5) {
    int jafiz, matricula, dependentes;
    float salario;

    for (jafiz=0; jafiz<qtdFun; jafiz++) {
        printf("Matricula Funcionario:");
        scanf("%d", &matricula);
        printf("Numero de Dependentes:");
        scanf("%d", &dependentes);
        printf("Salario Funcionario:");
        scanf("%f", &salario);
        
        if (salario>5000) {
            if (dependentes<=5) {
                (*ate5)++;
            }
            if (dependentes>5) {
                (*mais5)++;
            }
        }
    }
}
int main () {
    int departamento, qtdFuncionario, qtdAte5=0, qtdMais5=0;

    printf("Numero do departamento:");
    scanf("%d", &departamento);

    while (departamento!=0) {
        printf("Quantidade de funcionarios:");
        scanf("%d", &qtdFuncionario);
        umDepartamento(qtdFuncionario, &qtdAte5, &qtdMais5);

        printf("Numero do departamento:");
        scanf("%d", &departamento);
    }
    
    printf("\nUm total de %d funcionarios com ate 5 dependentes recebem mais que R$5.000,00!", qtdAte5);
    printf("\nUm total de %d funcionarios com mais de 5 dependentes recebem mais que R$5.000,00!", qtdMais5);

    return 0;
}
