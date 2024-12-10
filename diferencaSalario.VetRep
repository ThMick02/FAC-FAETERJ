#include <stdio.h>

float encontraMenor (float vSal[], int numEmp) {
    float menorSalario=vSal[0];
    int listEmp;

    for (listEmp=1;listEmp<numEmp;listEmp++) {
        if (menorSalario>vSal[listEmp]) {
            menorSalario=vSal[listEmp];
        }
    }

    return menorSalario;
}
float exibeDifMenorRetornaSoma (int numEmp, int vInsc[], float vSal[], float menorSal) {
    float diferenca, somaDiferenca;
    int jafiz;
    
    for (jafiz=0;jafiz<numEmp;jafiz++) {
        diferenca=vSal[jafiz]-menorSal;
        printf("\n===== Inscricao: %d =====\nDiferenca do menor salario: R$%.2f", vInsc[jafiz], diferenca);

        somaDiferenca=somaDiferenca+diferenca;
    }

    return somaDiferenca;
}
int main () {
    int vInsc[6]={1010,1020,1030,1040,1050,1060};
    float somaDiferenca, menorSalario, vSal[6]={1000,4020,900,10400,20000,1000};
    
    menorSalario=encontraMenor(vSal, 6);
    somaDiferenca=exibeDifMenorRetornaSoma(6, vInsc, vSal, menorSalario);

    printf("\n- A soma das diferencas dos salarios: R$%.2f", somaDiferenca);

    return 0;
}
