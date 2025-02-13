#include<stdio.h>                      // 13/02/2025
#include<stdlib.h>

typedef struct node
{
    int data;
    struct node *next;
    struct node *prev;
}NODE,*PNODE,**PPNODE;

void InsertFirst(PPNODE head, PPNODE tail, int no)
{
    PNODE newn = (PNODE)malloc(sizeof(NODE));

    newn->data = no;
    newn->next = NULL;
    newn->prev = NULL;

    if(*head == NULL)
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

    (*head)->prev = *tail;
    (*tail)->next = *head;
}

void InsertLast(PPNODE head, PPNODE tail, int no)
{
    PNODE newn = (PNODE)malloc(sizeof(NODE));

    newn->data = no;
    newn->next = NULL;
    newn->prev = NULL;

    if(*head == NULL)
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

    (*head)->prev = *tail;
    (*tail)->next = *head;
}

void DeleteFirst(PPNODE head, PPNODE tail)
{
    if(*head == NULL)
    {
        printf("LinkedList is empty!\n");
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
        free((*head)->prev);

        (*head)->prev = *tail;
        (*tail)->next = *head;
    }
}

void DeleteLast(PPNODE head, PPNODE tail)
{
    if(*head == NULL)
    {
        printf("LinkedList is empty!\n");
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

        (*head)->prev = *tail;
        (*tail)->next = *head;
    }
}

void Display(PNODE head, PNODE tail)
{
    if(head == NULL)
    {
        printf("LinkedList is empty!\n");
        return;
    }
    else
    {
        PNODE temp = head;

        do
        {
            printf("| %d | <-> ",temp->data);
            temp = temp->next;
        }while(temp != tail->next);

        printf("REPEAT\n");
    }
}

int Count(PNODE head, PNODE tail)
{
    int iCount = 0;

    if(head == NULL)
    {
        return 0;
    }
    else
    {
        PNODE temp = head;

        do
        {
            iCount++;
            temp = temp->next;
        }while(temp != tail->next);
    }

    return iCount;
}

void InsertAtPos(PPNODE head, PPNODE tail, int no, int iPos)
{
    int CountNodes = Count(*head,*tail);

    if((iPos < 1) || (iPos > CountNodes + 1))
    {
        printf("Invalid input!\n");
        return;
    }
    else if(iPos == 1)
    {
        InsertFirst(head,tail,no);
    }
    else if(iPos == CountNodes + 1)
    {
        InsertLast(head,tail,no);
    }
    else
    {
        int i = 0;
        PNODE temp = *head;
        PNODE newn = (PNODE)malloc(sizeof(NODE));

        newn->data = no;
        newn->next = NULL;
        newn->prev = NULL;

        for(i = 1; i < iPos-1; i++)
        {
            temp = temp->next;
        }

        newn->next = temp->next;
        temp->next->prev = newn;

        temp->next = newn;
        newn->prev = temp;

        (*head)->prev = *tail;
        (*tail)->next = *head;
    }
}

void DeleteAtPos(PPNODE head, PPNODE tail, int iPos)
{
    int CountNodes = Count(*head,*tail);

    if((iPos < 1) || (iPos > CountNodes))
    {
        printf("Invalid input!\n");
        return;
    }
    else if(iPos == 1)
    {
        DeleteFirst(head,tail);
    }
    else if(iPos == CountNodes)
    {
        DeleteLast(head,tail);
    }
    else
    {
        int i = 0;
        PNODE temp = *head;

        for(i = 1; i < iPos-1; i++)
        {
            temp = temp->next;
        }

        temp->next = temp->next->next;
        free(temp->next->prev);

        temp->next->prev = temp;
        

        (*head)->prev = *tail;
        (*tail)->next = *head;
    }
}

int main()
{
    int iRet = 0;
    PNODE first = NULL;
    PNODE last = NULL;

    InsertFirst(&first,&last,30);
    InsertFirst(&first,&last,20);
    InsertFirst(&first,&last,10);

    InsertLast(&first,&last,40);
    InsertLast(&first,&last,50);
    InsertLast(&first,&last,60);

    Display(first,last);
    iRet = Count(first,last);
    printf("Number of Nodes are : %d\n",iRet);

    InsertAtPos(&first,&last,25,3);

    Display(first,last);
    iRet = Count(first,last);
    printf("Number of Nodes are : %d\n",iRet);

    DeleteAtPos(&first,&last,3);

    Display(first,last);
    iRet = Count(first,last);
    printf("Number of Nodes are : %d\n",iRet);

    DeleteFirst(&first,&last);

    Display(first,last);
    iRet = Count(first,last);
    printf("Number of Nodes are : %d\n",iRet);

    DeleteLast(&first,&last);

    Display(first,last);
    iRet = Count(first,last);
    printf("Number of Nodes are : %d\n",iRet);

    return 0;
}