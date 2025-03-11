#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define HASH_SIZE 100003
#define MAX_NAME_LEN 50

typedef struct Node {
    char name[MAX_NAME_LEN];
    int count;           // Guarda o número de vezes que o nome base já foi solicitado
    struct Node *next;
} Node;

Node* hashTable[HASH_SIZE] = {0};

unsigned int hash(const char *s) {
    unsigned int h = 5381;
    int c;
    while ((c = *s++))
        h = ((h << 5) + h) + c;  // h * 33 + c
    return h % HASH_SIZE;
}

Node* find(const char *s) {
    unsigned int idx = hash(s);
    Node *curr = hashTable[idx];
    while (curr) {
        if (strcmp(curr->name, s) == 0)
            return curr;
        curr = curr->next;
    }
    return NULL;
}

void insert(const char *s, int count) {
    unsigned int idx = hash(s);
    Node *newNode = (Node*)malloc(sizeof(Node));
    strcpy(newNode->name, s);
    newNode->count = count;
    newNode->next = hashTable[idx];
    hashTable[idx] = newNode;
}

int main() {
    int n;
    scanf("%d", &n);
    
    char name[MAX_NAME_LEN];
    for (int i = 0; i < n; i++) {
        scanf("%s", name);
        Node *node = find(name);
        
        if (node == NULL) {
            printf("OK\n");
            insert(name, 0);
        } else {
            int num = node->count + 1;
            char newName[MAX_NAME_LEN];
            sprintf(newName, "%s%d", name, num);
            // Se o nome já existe, incrementa até encontrar um nome não registrado.
            while (find(newName) != NULL) {
                num++;
                sprintf(newName, "%s%d", name, num);
            }
            printf("%s\n", newName);
            node->count = num; // Atualiza o contador para o nome base.
            insert(newName, 0);
        }
    }
    
    return 0;
}
