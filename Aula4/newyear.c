#include <stdio.h>
#include <string.h>

int main()
{

    int x[3], soma, distanciaA, distanciaB;

    soma = 0;


    for (int i = 0; i < 3; i++)
    {
        scanf("%d", &x[i]);
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = i + 1; j < 3; j++)
        {
            if (x[i] > x[j])
            {
                int temp = x[i];
                x[i] = x[j];
                x[j] = temp;
            }
        }
    }

    distanciaA = x[1] - x[0];
    distanciaB = x[2] - x[1];

    soma = distanciaA + distanciaB;

    printf("%d\n", soma);

    return 0;
}