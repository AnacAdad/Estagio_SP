#include <stdio.h>
#include <string.h>

int main() {
    char string[100], invertida[100];
    int i, j;
    printf("Digite uma string: ");
    scanf("%s", string);
    j = strlen(string) - 1;
    for (i = 0; i < strlen(string); i++) {
        invertida[i] = string[j];
        j--;
    }
    invertida[i] = '\0';
    printf("String invertida: %s\n", invertida);
    return 0;
}

