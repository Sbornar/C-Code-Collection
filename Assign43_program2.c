// 2: write a program which display all palindrome elements of 
// singly linked list
// input : 11 28 17 414 6 89
// output : 11 6 414

#include<stdio.h>
#include<stdlib.h>
#include<string.h>


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

void  DisplayPallindrome(PNODE head)
{
   
  while(head != NULL)
  {
      int iDigit = 0 , iReverse = 0 , iValue= 0;
      iDigit = head->data;

      while(iDigit != 0)
      {
         iValue = iDigit % 10;

         iReverse = iReverse * 10 + iValue;

         iDigit = iDigit /10;
      }
      if(iReverse == head->data)
      {
        printf("%d\t",iReverse);
      }

     head = head->next;

  }
}



int main()
{
   
    PNODE Head = NULL;  

   
    InsertFirst(&Head,11);
    InsertFirst(&Head,28);
     
    InsertFirst(&Head,17);
    InsertFirst(&Head,414);
     InsertFirst(&Head,6);
     InsertFirst(&Head,89);
   

   

       DisplayPallindrome(Head);
  




   return 0;
}
