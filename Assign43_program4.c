// 4: write a program which display smallest digits of all element
// from singly linear linked list
// input: 11 250 532 415
// output : 1 0 2 1

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

void   DisplaySmall(PNODE head)
{
   
  while(head != NULL)
  {
     int Small = 0, iDigit =0 ,iValue=0;
      
      iDigit = head->data;
      Small = iDigit;
      while(iDigit != 0)
      {
          iValue = iDigit % 10;
          if(iValue < Small)
          {
            Small = iValue;
          }
          iDigit = iDigit /10;

      }
      printf("%d \t",Small);
      

     head = head->next;

  }
}



int main()
{
   
    PNODE Head = NULL;  

   
    InsertFirst(&Head,11);
    InsertFirst(&Head,250);
     
    InsertFirst(&Head,532);
    InsertFirst(&Head,415);
   
   

   

       DisplaySmall(Head);

   return 0;
}
