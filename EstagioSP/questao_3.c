#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <dados.json>

int main() {
    int faturamento[31] = {dados.json};
    int menor = faturamento[0], maior = faturamento[0], soma = 0, media = 0, dias_acima_media = 0;
    for (int i = 0; i < 31; i++) {
        if (faturamento[i] < menor) {
            menor = faturamento[i];
        }
        if (faturamento[i] > maior) {
            maior = faturamento[i];
        }
        if (faturamento[i] != 0) {
            soma += faturamento[i];
        }
    }
    media = soma / 31;
    for (int i = 0; i < 31; i++) {
        if (faturamento[i] > media) {
            dias_acima_media++;
        }
    }
    printf("Menor valor de faturamento: %d\n", menor);
    printf("Maior valor de faturamento: %d\n", maior);
    printf("Número de dias com faturamento acima da média: %d\n", dias_acima_media);
    return 0;
}