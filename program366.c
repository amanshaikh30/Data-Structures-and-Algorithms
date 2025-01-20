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
        *head = newn;
    }
    (*tail)->next = *head;
    (*head)->prev = *tail;
}

void InsertLast(PPNODE head, PPNODE tail, int no)
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
        (*tail)->next = newn;
        newn->prev = *tail;

        *tail = newn;
    }
    (*tail)->next = *head;
    (*head)->prev = *tail;
}

void DeleteFirst(PPNODE head, PPNODE tail)
{
    if(*head == NULL && *tail == NULL)
    {
        return;
    }
    else if(*head == *tail)
    {
        free(*head);
        *head = NULL;
        *tail = NULL;
    }
    else
    {
        *head = (*head)->next;
        free((*tail)->next);

        (*tail)->next = *head;
        (*head)->prev = *tail;
    }
}

void DeleteLast(PPNODE head, PPNODE tail)
{
    if(*head == NULL && *tail == NULL)
    {
        return;
    }
    else if(*head == *tail)
    {
        free(*head);
        *head = NULL;
        *tail = NULL;
    }
    else
    {
        *tail = (*tail)->prev;
        free((*tail)->next);

        (*tail)->next = *head;
        (*head)->prev = *tail;
    }
}

void Display(PNODE head, PNODE tail)
{
    if(head == NULL && tail == NULL)
    {
        printf("LinkedList is Empty\n");
        return;
    }

    do
    {
        printf("| %d | <=> ",head->data);
        head = head->next;
    }while(head != tail->next);

    printf("REPEAT\n");
}

int Count(PNODE head, PNODE tail)
{
    int iCount = 0;

    if(head == NULL && tail == NULL)
    {
        return 0; 
    }

    do
    {
        iCount++;
        head = head->next;
    }while(head != tail->next);

    return iCount;
}

void InsertAtPos(PPNODE head, PPNODE tail, int no, int iPos)
{
    int iCount = 0;
    int i = 0;
    PNODE newn = NULL;
    PNODE temp = NULL;

    iCount = Count(*head, *tail);

    if((iPos < 1) || (iPos > iCount + 1))
    {
        printf("Invalid Input!\n");
        return;
    }
    else if(iPos == 1)
    {
        InsertFirst(head,tail,no);
    }
    else if(iPos == iCount + 1)
    {
        InsertLast(head,tail,no);
    }
    else 
    {
        newn = (PNODE)malloc(sizeof(NODE));

        newn->data = no;
        newn->next = NULL;
        newn->prev = NULL;

        temp = *head;

        for(i = 1; i < iPos-1; i++)
        {
            temp = temp->next;
        }

        newn->next = temp->next;
        temp->next->prev = newn;
        temp->next = newn;
        newn->prev = temp;

        (*tail)->next = *head;
        (*head)->prev = *tail;
    }
}

void DeleteAtPos(PPNODE head, PPNODE tail, int iPos)
{}

int main()
{
    int iRet = 0;
    PNODE first = NULL;
    PNODE last = NULL;

    InsertFirst(&first,&last,51);
    InsertFirst(&first,&last,21);
    InsertFirst(&first,&last,11);

    InsertLast(&first,&last,101);
    InsertLast(&first,&last,111);
    InsertLast(&first,&last,121);

    InsertAtPos(&first,&last,75,4);

    Display(first,last);
    iRet = Count(first,last);
    printf("Number of Elements are : %d\n\n",iRet);

    return 0;
}
