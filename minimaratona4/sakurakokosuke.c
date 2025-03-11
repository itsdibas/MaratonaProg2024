#include <stdio.h>

void determine_winner(int n) {
    int x = 0, move = 1;
    int turn = 0; // 0 para Sakurako, 1 para Kosuke
    
    while (1) {
        if (turn == 0) {
            x -= move;
        } else {
            x += move;
        }
        
        if (x < -n || x > n) {
            printf("%s\n", turn == 0 ? "Sakurako" : "Kosuke");
            return;
        }
        
        move += 2;
        turn = 1 - turn; // Alterna entre 0 e 1
    }
}

int main() {
    int t, n;
    scanf("%d", &t);
    
    while (t--) {
        scanf("%d", &n);
        determine_winner(n);
    }
    
    return 0;
}
