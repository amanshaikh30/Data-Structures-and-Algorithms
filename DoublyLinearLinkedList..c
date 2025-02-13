#include<stdio.h>                      // 12/02/2025
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

void InsertFirst(PPNODE head, int no)
{
    PNODE newn = (PNODE)malloc(sizeof(NODE));
    
    newn->data = no;
    newn->next = NULL;
    newn->prev = NULL;

    if(*head == NULL)
    {
        *head = newn;
    }
    else
    {
        newn->next = *head;
        (*head)->prev = newn;
        *head = newn;
    }
}

void InsertLast(PPNODE head, int no)
{
    PNODE newn = (PNODE)malloc(sizeof(NODE));
    
    newn->data = no;
    newn->next = NULL;
    newn->prev = NULL;

    if(*head == NULL)
    {
        *head = newn;
    }
    else
    {
        PNODE temp = *head;

        while(temp->next != NULL)
        {
            temp = temp->next;
        }
         
        temp->next = newn;
        newn->prev = temp;
    }
}

void DeleteFirst(PPNODE head)
{
    if(*head == NULL)
    {
        printf("LinkedList is empty!\n");
        return;
    }
    else if((*head)->next == NULL)
    {
        free(*head);
        head = NULL;
    }
    else
    {
        (*head) = (*head)->next;
        free((*head)->prev);
        (*head)->prev = NULL;
    }
}

void DeleteLast(PPNODE head)
{
    if(*head == NULL)
    {
        printf("LinkedList is empty!\n");
        return;
    }
    else if((*head)->next == NULL)
    {
        free(*head);
        head = NULL;
    }
    else
    {
        PNODE temp = *head;

        while(temp->next->next != NULL)
        {
            temp = temp->next;
        }

        free(temp->next);
        temp->next = NULL;
    }
}

void Display(PNODE head)
{
    if(head == NULL)
    {
        printf("LinkedList is empty!\n");
        return;
    }
    else
    {
        PNODE temp = head;

        while(temp != NULL)
        {
            printf("| %d | <-> ",temp->data);
            temp = temp->next;
        }
        printf("NULL\n");
    }
}

int Count(PNODE head)
{
    int iCount = 0;
    PNODE temp = head;

    while(temp != NULL)
    {
        iCount++;
        temp = temp->next;
    }

    return iCount;
}

void InsertAtPos(PPNODE head, int no, int iPos)
{
    int CountNodes = Count(*head);

    if((iPos < 1) || (iPos > CountNodes + 1))
    {
        printf("Invalid Input!\n");
        return;
    }
    else if(iPos == 1)
    {
        InsertFirst(head,no);
    }
    else if(iPos == CountNodes + 1)
    {
        InsertLast(head,no);
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
    }
}

void DeleteAtPos(PPNODE head, int iPos)
{
    int CountNodes = Count(*head);

    if((iPos < 1) || (iPos > CountNodes))
    {
        printf("Invalid Input!\n");
        return;
    }
    else if(iPos == 1)
    {
        DeleteFirst(head);
    }
    else if(iPos == CountNodes)
    {
        DeleteLast(head);
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
    }
}

int main()
{
    PNODE first = NULL;
    int iRet = 0;

    InsertFirst(&first,30);
    InsertFirst(&first,20);
    InsertFirst(&first,10);

    InsertLast(&first,40);
    InsertLast(&first,50);
    InsertLast(&first,60);

    Display(first);
    iRet = Count(first);
    printf("Number of Nodes are : %d\n",iRet);

    InsertAtPos(&first,55,6);

    Display(first);
    iRet = Count(first);
    printf("Number of Nodes are : %d\n",iRet);

    DeleteAtPos(&first,6);

    Display(first);
    iRet = Count(first);
    printf("Number of Nodes are : %d\n",iRet);

    DeleteFirst(&first);

    DeleteLast(&first);

    Display(first);
    iRet = Count(first);
    printf("Number of Nodes are : %d\n",iRet);

    return 0;
}