#include <stdio.h>
#include <string.h>

int main() {
    int n;
    scanf("%d", &n);

    while (n--) {
        char palavra[101];
        scanf("%s", palavra);

        int len = strlen(palavra);
        if (len > 10) {
            printf("%c%d%c\n", palavra[0], len - 2, palavra[len - 1]);
        } else {
            printf("%s\n", palavra);
        }
    }

    return 0;
}