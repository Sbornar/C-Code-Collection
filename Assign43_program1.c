// 1: write a program which reverse each element of singly linked list

// input: 11 28 17 41 6 89
// output :11 82 71 14 6 98

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

void  reverse(PNODE head)
{
   
  while(head != NULL)
  {
     int ireverse = 0, iValue= 0;
     int iDigit = 0;
         iDigit = head->data;

     while(iDigit != 0)
     {
        iValue = iDigit %10;
        ireverse = ireverse * 10 + iValue ;
        iDigit = iDigit /10; 

     }

     printf("%d\t",ireverse);

     head = head->next;

  }
}



int main()
{
   
    PNODE Head = NULL;  

   
    InsertFirst(&Head,11);
    InsertFirst(&Head,28);
     
    InsertFirst(&Head,17);
    InsertFirst(&Head,41);
     InsertFirst(&Head,6);
     InsertFirst(&Head,89);
   

   

       reverse(Head);
  




   return 0;
}
