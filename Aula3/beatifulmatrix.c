#include <stdio.h>
#include <stdlib.h>

int main() {
    int matrix[5][5];
    int linha, coluna;

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            scanf("%d", &matrix[i][j]);
            if (matrix[i][j] == 1) {
                linha = i;
                coluna = j;
            }
        }
    }

    int moves = abs(linha - 2) + abs(coluna - 2);
    printf("%d\n", moves);

    return 0;
}