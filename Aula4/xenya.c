#include <stdio.h>
#include <string.h>

int main() {
    char s[101];
    scanf("%s", s);

    int count[4] = {0};
    for (int i = 0; i < strlen(s); i++) {
        if (s[i] >= '1' && s[i] <= '3') {
            count[s[i] - '0']++;
        }
    }

    int first = 1;
    for (int i = 1; i <= 3; i++) {
        for (int j = 0; j < count[i]; j++) {
            if (!first) {
                printf("+");
            }
            printf("%d", i);
            first = 0;
        }
    }

    printf("\n");

    return 0;
}