#include <stdio.h>

typedef struct binary_tree {
    int item;
    struct binary_tree *parent;
    struct binary_tree *left;
    struct binary_tree *right;
} binary_tree;

binary_tree* create_node(binary_tree*, int);

int main(void) {
    printf("Start...");

    // Инициализируем корневой элемент дерева
    binary_tree tree;

    //tree.item = 3;
    //tree.parent = NULL;
    //tree.left = NULL;
    //tree.right = NULL;

    create_node(&tree, 5);

    return 0;
}

binary_tree* create_node(binary_tree* parent, int x) {
    printf("%d", parent);

    return parent;
}
