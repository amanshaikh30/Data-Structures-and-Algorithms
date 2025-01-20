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

void InsertFirst(PPNODE head, int no)
{
    PNODE newn = NULL;

    newn = (PNODE)malloc(sizeof(NODE));       

    newn->data = no;                          
    newn->next = NULL;

    if(*head == NULL)                         
    {
        *head = newn;
    }
    else                                      
    {
        newn->next = *head;
        *head = newn;
    }
}

void InsertLast(PPNODE head, int no)
{
    PNODE newn = NULL;
    PNODE temp = NULL;
    
    newn = (PNODE)malloc(sizeof(NODE));       

    newn->data = no;                          
    newn->next = NULL;

    if(*head == NULL)                         
    {
        *head = newn;
    }
    else                                      
    {
        temp = *head;

        while(temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = newn;
    }
}

void Display(PNODE head)
{
    while(head != NULL)
    {
        printf("| %d | -> ",head->data);
        head = head->next; 
    }
    printf("NULL\n");
}

int Count(PNODE head)
{
    int iCount = 0;

    while(head != NULL)
    {
        iCount++;
        head = head->next; 
    }
    return iCount;
}

void DeleteFirst(PPNODE head)
{
    PNODE temp = NULL;

    if(*head == NULL)
    {
        return;
    }
    else if((*head)->next == NULL)
    {
        free(*head);
        *head = NULL;
    }
    else
    {
        temp = *head;
        *head = (*head)->next;
        free(temp);
    }
}

void DeleteLast(PPNODE head)
{
    PNODE temp = NULL;

    if(*head == NULL)
    {
        return;
    }
    else if((*head)->next == NULL)
    {
        free(*head);
        *head = NULL;
    }
    else
    {
        temp = *head;

        while(temp->next->next != NULL)
        {
            temp = temp->next;
        }
        free(temp->next);
        temp->next = NULL;
    } 
}

void InsertAtPos(PPNODE head, int no, int iPos)
{
    int CountNode = 0, i = 0;
    PNODE newn = NULL;
    PNODE temp = NULL;

    CountNode = Count(*head);

    if((iPos < 1) || (iPos > CountNode+1))         
    {
        printf("Invalid Position!\n");
        return;
    }
    if(iPos == 1)
    {
        InsertFirst(head, no); 
    }
    else if(iPos == CountNode + 1)
    {
        InsertLast(head, no);
    }
    else
    {
        newn = (PNODE)malloc(sizeof(NODE));
        newn->data = no;
        newn->next = NULL;

        temp = *head;

        for(i = 1; i < iPos - 1; i++)
        {
            temp = temp->next;
        }
        newn->next = temp->next;
        temp->next = newn;
    }
}

void DeleteAtPos(PPNODE head, int iPos)
{
    int CountNode = 0, i = 0;
    PNODE temp = NULL; 
    PNODE target = NULL;

    CountNode = Count(*head);

    if((iPos < 1) || (iPos > CountNode))         
    {
        printf("Invalid Position!\n");
        return;
    }
    if(iPos == 1)
    {
        DeleteFirst(head); 
    }
    else if(iPos == CountNode)
    {
        DeleteLast(head);
    }
    else
    {
        temp = *head;
        
        for(i = 1; i < iPos - 1; i++)
        {
            temp = temp->next;
        }
        target = temp->next;
        temp->next = target->next;
        free(target);
    }
}

int main()
{
    PNODE first = NULL;
    int iRet = 0, iOption = 0, iValue = 0, iPos = 0;

    while(1)
    {
        printf("________________________________________________\n");
        printf("Please select the targeted operation : \n");
        printf("1 : Insert new element at first position\n");
        printf("2 : Insert new element at last position\n");
        printf("3 : Insert new element at given position\n");
        printf("4 : Delete the element at first position\n");
        printf("5 : Delete the element at last position\n");
        printf("6 : Delete the element at given position\n");
        printf("7 : Display the elements\n");
        printf("8 : Count the elements\n");
        printf("9 : Terminate the application\n");
        printf("________________________________________________\n");
        printf("Please select the targeted operation : \n");
        scanf("%d",&iOption);
        printf("________________________________________________\n");

        if(iOption == 1)
        {
            printf("Enter the element : \n");
            scanf("%d",&iValue);

            InsertFirst(&first,iValue);
            printf("Element inserted successfully...\n");
        }
        else if(iOption == 2)
        {
            printf("Enter the element : \n");
            scanf("%d",&iValue);

            InsertLast(&first,iValue);
            printf("Element inserted successfully...\n");
        }
        else if(iOption == 3)
        {
            printf("Enter the element : \n");
            scanf("%d",&iValue);

            printf("Enter the position : \n");
            scanf("%d",&iPos);

            InsertAtPos(&first,iValue,iPos);
            printf("Element inserted successfully...\n");
        }
        else if(iOption == 4)
        {
            DeleteFirst(&first);
            printf("Element deleted successfully...\n");
        }
        else if(iOption == 5)
        {
            DeleteLast(&first);
            printf("Element deleted successfully...\n");
        }
        else if(iOption == 6)
        {
            printf("Enter the position : \n");
            scanf("%d",&iPos);

            DeleteAtPos(&first,iPos);
            printf("Element deleted successfully...\n");
        }
        else if(iOption == 7)
        {
            printf("Element of the LinkedList are : \n");
            Display(first);
        }
        else if(iOption == 8)
        {
            iRet = Count(first);
            printf("Number of Elements in the LinkedList are : %d\n",iRet);
        }
        else if(iOption == 9)
        {
            printf("Terminating the Application...\n");
            break;
        }
        else
        {
            printf("Invalid Input!");
        }
    }

    return 0;
}
