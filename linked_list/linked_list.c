#include "stdio.h"

typedef struct list {
    int item; // Data
    struct list *next; // Pointer to next node
} list;

list *search_list(list*, int);
void insert_list(list**, int);

int main(void) {
    printf("Start...\n");

    list num;
    insert_list(&num, 3);

    return 0;
}

void insert_list(list **list_imp, int x) {
    list* tempPointer;

    tempPointer = malloc(sizeof(list));
    tempPointer->item = x;
    tempPointer->next = *list_imp;
    *list_imp = tempPointer;
}

/**
 * Поиск элемента в связном списке
 **/
list *search_list(list *l, int x) {
    if (l == NULL) return NULL;

    if (l->item == x) {
        return l;
    } else {
        return search_list(l->next, x);
    }
}

/**
 * Вставка элемента в связный список.
 **//*
void insert_list(list **l, int x) {
    list *p;
    p = malloc(sizeof(list));
    p->item = x;
    p->next = *l;
    *l = p;
}*/
