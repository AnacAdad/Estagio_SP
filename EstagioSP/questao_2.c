#include <stdio.h>

int main() {
    int n, a = 0, b = 1, c = 0, i;
    printf("Digite um número: ");
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        if (i <= 1) {
            c = i;
        } else {
            c = a + b;
            a = b;
            b = c;
        }
    }
    if (c == n) {
        printf("O número %d pertence à sequência de Fibonacci.\n", n);
    } else {
        printf("O número %d não pertence à sequência de Fibonacci.\n", n);
    }
    return 0;
}

