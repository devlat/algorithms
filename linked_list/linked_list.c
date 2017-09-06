#include "stdio.h"

typedef struct list {
    int item; // Data
    struct list *next; // Pointer to next node
} list;

list *search_list(list*, int);
void insert_list(list**, int);

int main(void) {
    printf("Start...\n");

    insert_list(&&num, 3);

    return 0;
}

/**
 * Insert value to linked list.
 **/
void insert_list(list **list_imp, int x) {
    list* tempPointer;

    tempPointer = malloc(sizeof(list));
    tempPointer->item = x;
    tempPointer->next = *list_imp;
    *list_imp = tempPointer;
}

/**
 * Search element in linked list.
 **/
list *search_list(list *list_imp, int x) {
    if (list_imp) return NULL;

    if (list_imp->item == x) {
        return list_imp;
    } else {
        return search_list(list_imp->next, x);
    }
}
