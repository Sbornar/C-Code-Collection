// 5: write a program which display largest digits of all element from
// singly linear linked list
// intput : 11 250 532 419
// output : 1 5 5 9
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

void    DisplayLarge(PNODE head)
{
   
  while(head != NULL)
  {
     int iLarge = 0, iDigit = 0, iValue =0;
     iDigit = head->data;
   

     while(iDigit != 0)
     {
           iValue = iDigit % 10;

           if(iValue > iLarge)
           {
             iLarge = iValue;
           }
           iDigit = iDigit /10;
     }
      
     printf("%d\t",iLarge);

     head = head->next;

  }
}



int main()
{
   
    PNODE Head = NULL;  

   
    InsertFirst(&Head,11);
    InsertFirst(&Head,250);
     
    InsertFirst(&Head,532);
    InsertFirst(&Head,419);
   
   

   

       DisplayLarge(Head);

   return 0;
}
