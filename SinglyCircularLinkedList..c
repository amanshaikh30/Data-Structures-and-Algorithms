#include<stdio.h>                      // 13/02/2025
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
};

typedef struct node NODE;
typedef struct node* PNODE;
typedef struct node** PPNODE;

void InsertFirst(PPNODE head, PPNODE tail, int no)
{
    PNODE newn = (PNODE)malloc(sizeof(NODE));
    
    newn->data = no;
    newn->next = NULL;

    if(*head == NULL)
    {
        *head = newn;
        *tail = newn;

        (*tail)->next = *head;
    }
    else
    {
        newn->next = *head;
        *head = newn;

        (*tail)->next = *head;
    }

}

void InsertLast(PPNODE head, PPNODE tail, int no)
{
    PNODE newn = (PNODE)malloc(sizeof(NODE));
    
    newn->data = no;
    newn->next = NULL;

    if(*head == NULL)
    {
        *head = newn;
        *tail = newn;

        (*tail)->next = *head;
    }
    else
    {
        (*tail)->next = newn;
        (*tail) = (*tail)->next;

        (*tail)->next = *head;
    }
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
        PNODE temp = *head;

        *head = (*head)->next;
        free(temp);
        temp = NULL;

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
        PNODE temp = *head;

        while(temp->next != *tail)
        {
            temp = temp->next;
        }

        free(*tail);
        *tail = temp;

        (*tail)->next = *head;
    }
}

void Display(PNODE head, PNODE tail)
{
    if(head == NULL)
    {
        printf("LinkedList is Empty!\n");
        return;
    }
    else
    {
        PNODE temp = head;

        do
        {
            printf("| %d | -> ",temp->data);
            temp = temp->next;
        }while(temp != (tail)->next);

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
        }while(temp != (tail)->next);
    }

    return iCount;
}

void InsertAtPos(PPNODE head, PPNODE tail, int no, int iPos)
{
    int CountNodes = Count(*head, *tail);

    if((iPos < 1) || (iPos > CountNodes + 1))
    {
        printf("Invalid Input!\n");
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

        for(i = 1; i < iPos-1; i++)
        {
            temp = temp->next;
        }

        newn->next = temp->next;
        temp->next = newn;
    }
}

void DeleteAtPos(PPNODE head, PPNODE tail, int iPos)
{
    int CountNodes = Count(*head, *tail);

    if((iPos < 1) || (iPos > CountNodes))
    {
        printf("Invalid Input!\n");
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
        PNODE target = NULL;

        for(i = 1; i < iPos-1; i++)
        {
            temp = temp->next;
        }

        target = temp->next;
        temp->next = target->next;

        free(target);
        target = NULL;
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