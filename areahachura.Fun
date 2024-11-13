#include <stdio.h>
#include <math.h>

float areaQuadrado (float ladoQuad) {
    float areaQuad;

    areaQuad=pow(ladoQuad, 2);

    return areaQuad;
}
float areaTriEquilatero (float ladoTri) {
    float areaTri;

    areaTri=ladoTri*sqrt(3)/4;

    return areaTri;
}
float areaHachurada (float ladoQuad) {
    float areaHachura, areaQuad, areaTri;

    areaQuad=areaQuadrado(ladoQuad);
    areaTri=areaTriEquilatero(ladoQuad);
    areaHachura=areaQuad-areaTri+areaTriEquilatero(ladoQuad/2)+areaQuadrado(ladoQuad*2/6);

    printf("\nArea hachurada: %.2fm", areaHachura);

    return 0;
}

int main () {
    float ladoQuad;

    printf("Digite o lado do quadrado em metros: ");
    scanf("%f", &ladoQuad);

    areaHachurada(ladoQuad);

    return 0;
}
