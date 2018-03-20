#include <stdio.h>

struct element {
    int x;
    struct element *nxt;
};

struct element *Head = NULL;

void insert_f(int a)
{
    struct element *newelement = (struct element*)malloc(sizeof(struct element));
    newelement->x = a;
    newelement->nxt = Head;
    Head = newelement;
}

void insert_l(int a)
{
    struct element *newelement = (struct element*)malloc(sizeof(struct element));
}
