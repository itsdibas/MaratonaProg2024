#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, numero, taCerto;
    int vetor[100] = {0};
    int table[100][3] = {0};

    taCerto = 1;
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d", &numero);
            table[i][j] = numero;
        }
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < n; j++)
        {
            vetor[i] = vetor[i] + table[j][i];
        }
    }

    for (int i = 0; i < n; i++)
    {
        if (vetor[i] != 0)
        {
            taCerto = 0;
            break;
        }
    }

    if (taCerto == 1)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }
    return 0;
}