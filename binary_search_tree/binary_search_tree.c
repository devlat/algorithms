#include <stdio.h>

typedef struct binary_tree {
    int item;
    binary_tree *parent;
    binary_tree *left;
    binary_tree *right;
} binary_tree;

int main(void) {
    printf("Start...");

    return 0;
}
