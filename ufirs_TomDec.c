#include <stdio.h>

float calcuUfirs (int regiao, int area, int temCamera) {
    int Ufirs, andar;

    if (area<=20) {
        Ufirs=40;
    }
    else if (regiao>=3) {
        if (regiao==3) {
            printf("\nQual o seu andar?");
            scanf("%i", &andar);
            if (andar<=5) {
                Ufirs=92;
            }
            else {
                Ufirs=85;
            }
        }
        else {
            Ufirs=75;
        }
    }
    else {
        if (area<=50) {
            Ufirs=60;
        }
        else if (area<=100) {
            Ufirs=70;
        }
        else {
            Ufirs=80;
        }
    }
    if (temCamera==1) {
        Ufirs=Ufirs*1.1;
    }

    printf("\nValor do UFIRs total: R$%i,00", Ufirs);

    return 0;
}

int main () {
    int regiao, area, temCamera;

    printf("Regiao que voce mora (Norte=1, Central=2, Sul=3, Oeste=4): ");
    scanf("%i", &regiao);
    printf("Area de sua residencia (aproximadamente): ");
    scanf("%i", &area);
    printf("Tem camera em sua residencia (sim=1, nao=2)?");
    scanf("%i", &temCamera);

    calcuUfirs(3, area, temCamera);
    calcuUfirs(regiao, 20, temCamera);
    calcuUfirs(regiao, area, temCamera);

    return 0;
}
