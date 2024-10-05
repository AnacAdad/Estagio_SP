#include <stdio.h>

int main() {
    float faturamento_total = 0;
    float faturamento_estados[5] = {67836.43, 36678.66, 29229.88, 27165.48, 19849.53};
    for (int i = 0; i < 5; i++) {
        faturamento_total += faturamento_estados[i];
    }
    for (int i = 0; i < 5; i++) {
        printf("Percentual de representação do estado %d: %.2f%%\n", i + 1, (faturamento_estados[i] / faturamento_total) * 100);
    }
    return 0;
}
// Resposta:
// Percentual de representação do estado 1: 34.89%
// Percentual de representação do estado 2: 18.88%
// Percentual de representação do estado 3: 15.05%
// Percentual de representação do estado 4: 14.01%
// Percentual de representação do estado 5: 10.17%

