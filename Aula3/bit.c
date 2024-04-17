#include <stdio.h>
#include <string.h>

int main() {
    int n;
    scanf("%d", &n);

    int x = 0;
    while (n--) {
        char operacao[4];
        scanf("%s", operacao);

        if (strstr(operacao, "++") != NULL) {
            x++;
        } else if (strstr(operacao, "--") != NULL) {
            x--;
        }
    }

    printf("%d\n", x);

    return 0;
}