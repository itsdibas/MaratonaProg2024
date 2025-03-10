#include <stdio.h>

int main(){
    int N;
    scanf("%d", &N);

    int fib1 = 1, fib2 = 1;
    
    
    for (int i = 2; i <= N; i++){
        int temp = fib2;
        fib2 = fib1 + fib2;
        fib1 = temp;
    }

    printf("%d\n", fib2);
    return 0;
}
