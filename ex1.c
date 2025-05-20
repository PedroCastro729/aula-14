#include <stdio.h>
#include <math.h>

float calcular_tempo_queda(float altura) {
    float gravidade = 9.81;
    float tempo = sqrt((2 * altura) / gravidade);
    return tempo;
}

float calcular_distancia_liberacao(float velocidade, float altura) {
    float tempo = calcular_tempo_queda(altura);
    float distancia = velocidade * tempo;
    printf("Tempo de queda: %.2f segundos\n", tempo);
    printf("Distância de liberação: %.2f metros\n", distancia);
    return distancia;
}

int main(void) {
    double altitude;
    double v;

    printf("Digite a altura do avião em metros: ");
    scanf("%lf", &altitude);

    printf("Digite a velocidade do avião em m/s: ");
    scanf("%lf", &v);

    calcular_tempo_queda(altitude);
    calcular_distancia_liberacao(v, altitude);

    return 0;

}