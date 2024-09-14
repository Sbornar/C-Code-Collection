// 1: write a program which displays all element which are perfect from
// singly linear linked list

// input: 11 28 17 41 6 89
// output:6 28

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

int  DisplyaPerfect(PNODE head)
{
   while(head != NULL)
   {
      if((head->data) %2 == 0)
      {
        printf("%d\t",head->data);
      }
      head = head -> next;
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

   

    DisplyaPerfect(Head);
  




   return 0;
}
