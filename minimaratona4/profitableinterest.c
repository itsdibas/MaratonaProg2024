#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);
    
    while(t--) {
        long long a, b;
        scanf("%lld %lld", &a, &b);
        

        if(a >= b) {
            printf("%lld\n", a);
        } else {

            if(b > 2 * a) {
                printf("0\n");
            } else {

                printf("%lld\n", 2 * a - b);
            }
        }
    }
    
    return 0;
}
