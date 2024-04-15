#include <stdio.h>
#include <string.h>

int main() {
    int n;
    char stones[51];

    scanf("%d", &n);
    scanf("%s", stones);

    int count = 0;
    for (int i = 0; i < n - 1; i++) {
        if (stones[i] == stones[i + 1]) {
            count++;
        }
    }

    printf("%d\n", count);

    return 0;
}