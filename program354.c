#include<stdio.h>
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
    PNODE newn = NULL;

    newn = (PNODE)malloc(sizeof(NODE));
    newn->data = no;
    newn->next = NULL;

    if(((*head) == NULL) && ((*tail) == NULL))
    {
        *head = newn;
        *tail = newn;
    }
    else
    {
        newn->next = *head;
        *head = newn;
    }
    (*tail)->next = *head;
}

void InsertLast(PPNODE head, PPNODE tail, int no)
{
    PNODE newn = NULL;

    newn = (PNODE)malloc(sizeof(NODE));
    newn->data = no;
    newn->next = NULL;

    if(((*head) == NULL) && ((*tail) == NULL))
    {
        *head = newn;
        *tail = newn;
    }
    else
    {
        (*tail)->next = newn;
        (*tail) = newn;
    }
    (*tail)->next = *head;
}

void InsertAtPos(PPNODE head, PPNODE tail, int no, int iPos)
{
    int CountNode = 0;

    CountNode = Count();

    if(iPos < 1 || iPos > CountNode + 1)
    {
        printf("Invalid Input!\n");
        return;
    }
    else if(iPos == 1)
    {
        InsertFirst(head,tail,no);
    }
    else if(iPos == CountNode + 1)
    {
        InsertLast(head,tail,no);
    }
    else 
    {
        int i = 0;
        PNODE newn = NULL;
        PNODE temp = NULL;
        PNODE target = NULL;

        newn = (PNODE)malloc(sizeof(NODE));
        newn->data = no;
        newn->next = NULL;

        temp = *head;

        for(i = 1; i < iPos-1; i++)
        {
            temp = temp->next;
        }
        target = temp->next;
        temp->next = target->next;
        free(target);

        (*tail)->next = *head;
    }
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
        PNODE temp = NULL;
        temp = *head;

        while(temp->next != *tail)
        {
            temp = temp->next;
        }

        free(*tail);
        *tail = temp;
        (*tail)->next = *head;
    }
}

void DeleteAtPos(PPNODE head, PPNODE tail, int iPos)
{
}

void Display(PNODE head, PNODE tail)
{
    if(head == NULL && tail == NULL)
    {
        printf("LinkedList is  Empty!\n");
        return;
    }

    printf("Elements of LinkedList are : \n\n");
    
    do 
    {
        printf("| %d | -> ",head->data);
        head = head->next;

    }while(head != tail->next);

    printf("NULL\n");
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

int main()
{
    int iRet = 0;     
    PNODE first = NULL;
    PNODE last = NULL;

    Display(first,last);

    InsertFirst(&first,&last,51);
    InsertFirst(&first,&last,21);
    InsertFirst(&first,&last,11);

    InsertLast(&first,&last,101);
    InsertLast(&first,&last,111);
    InsertLast(&first,&last,121); 

    Display(first,last);
    iRet = Count(first,last);
    printf("Number of Elements are : %d\n",iRet);

    DeleteFirst(&first,&last);

    Display(first,last);
    iRet = Count(first,last);
    printf("Number of Elements are : %d\n",iRet);

    DeleteLast(&first,&last);

    Display(first,last);
    iRet = Count(first,last);
    printf("Number of Elements are : %d\n",iRet);

    return 0;
}