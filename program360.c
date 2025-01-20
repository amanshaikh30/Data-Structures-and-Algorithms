#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
    struct node *prev;
};

typedef struct node NODE;
typedef struct node* PNODE;
typedef struct node** PPNODE;

void InsertFirst(PPNODE head, PPNODE tail, int no)
{
    PNODE newn = NULL;
    newn = (PNODE)malloc(sizeof(NODE));

    newn->data = no;
    newn->next = NULL;
    newn->prev = NULL;

    if((*head == NULL) && (*tail == NULL))
    {
        *head = newn;
        *tail = newn;
    }
    else
    {
        newn->next = *head;
        (*head)->prev = newn;

    }
    (*tail)->next = *head;
    (*head)->prev = *tail;
}

void InsertLast(PPNODE head, PPNODE tail, int no)
{}

void DeleteFirst(PPNODE head, PPNODE tail)
{}

void DeleteLast(PPNODE head, PPNODE tail)
{}

void Display(PNODE head, PNODE tail)
{}

int Count(PNODE head, PNODE tail)
{
    return 0;
}

void InsertAtPos(PPNODE head, PPNODE tail, int iPos, int no)
{}

void DeleteAtPos(PPNODE head, PPNODE tail, int iPos)
{}

int main()
{
    PNODE first = NULL;
    PNODE last = NULL;

    return 0;
}

