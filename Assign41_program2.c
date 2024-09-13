// 2:write a program which search last occurrence of particular 
// elelement from singly linear linked list
// function should return position at which elelement is found 
// input : 30;
// output:6


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

int SearchlastOcc(PNODE head, int iNo)
{
    int iCnt = 1 , iCount = 0;

    while(head != NULL)
    {
        if(head->data == iNo)
        {
            
            iCount = iCnt;
            
        }
        head= head->next;
        iCnt++;
    }
    return iCount;
}



int main()
{
   
    PNODE Head = NULL;  

    InsertFirst(&Head,70); 
    InsertFirst(&Head,30);
    InsertFirst(&Head,50);
    InsertFirst(&Head,40);
    InsertFirst(&Head,30);
    InsertFirst(&Head,20);
    InsertFirst(&Head,10);

    int iRet = 0;

    iRet = SearchlastOcc(Head , 30);
    printf("%d\n",iRet);




   return 0;
}
