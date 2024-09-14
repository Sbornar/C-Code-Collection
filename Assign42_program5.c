// 5: write a program which display addition of digits of element
// from singly linear linked list
// input : 110 230 20 240 640
// output : 2 5 2 6 10

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

void  SumDigit(PNODE head)
{
   
  while(head != NULL)
  {
     int iCnt = 0 , iCount = 0;
     int iDigit = head->data;

     while(iDigit != 0)
     {
         iCount = iCount + (iDigit %10);
         
         iDigit = iDigit /10;

     }
     printf("%d\t",iCount);

     head = head->next;

  }
}



int main()
{
   
    PNODE Head = NULL;  

   
    InsertFirst(&Head,110);
    InsertFirst(&Head,230);
     
    InsertFirst(&Head,20);
    InsertFirst(&Head,240);
     InsertFirst(&Head,640);
   

   

       SumDigit(Head);
  




   return 0;
}
