// 4: write a program which return largest element from singly linear
// linked list
// input: 110 230 320 240
// output : 320

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

int  Maximum(PNODE head)
{
    int  iCount = head->data;

    while(head != NULL)
    {
        if(iCount <= (head->data))
        {
            iCount = (head->data);
        }
        head= head->next;
        
    }
    return iCount;
}



int main()
{
   
    PNODE Head = NULL;  

   
    InsertFirst(&Head,240);
    InsertFirst(&Head,320);
    InsertFirst(&Head,230);
    InsertFirst(&Head,110);

    int iRet = 0;

    iRet = Maximum(Head);
    printf("%d\n",iRet);




   return 0;
}
