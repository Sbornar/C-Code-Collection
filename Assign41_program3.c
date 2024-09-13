// 3:write a program which returns addition of all element from singly
// linear linked list
// output : 100

#include<stdio.h>
#include<stdlib.h>


struct node
{
    int data;
    struct node* next;
};
typedef struct node NODE;
typedef struct node* PNODE;
typedef struct node** PPNODE;

void InsertFirst(PPNODE First , int iValue)
{
       PNODE newn = NULL; 

         newn = (PNODE) malloc(sizeof(NODE)); 

         newn-> next = NULL;  
         newn-> data = iValue;

         if(*First == NULL) 
         {
             *First = newn;
         }else
         {
            newn -> next = *First;
            *First = newn;
         }


}

int Addition(PNODE head)
{
    int  iCount = 0;

    while(head != NULL)
    {
        iCount = iCount + (head->data);
        head= head->next;
        
    }
    return iCount;
}



int main()
{
   
    PNODE Head = NULL;  

   
    InsertFirst(&Head,40);
    InsertFirst(&Head,30);
    InsertFirst(&Head,20);
    InsertFirst(&Head,10);

    int iRet = 0;

    iRet = Addition(Head);
    printf("%d\n",iRet);




   return 0;
}
