// 4: write a program which return second maximum element from singly 
// linear linked list
// input : 110 230 320 240
// output : 240

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

void SecMaximum(PNODE head)
{
   
   int iMax = head->data;
   int SecondMax = iMax;

   while(head != NULL)
   {
      if(iMax <= head->data)
      {
        SecondMax = iMax;
        iMax = head->data;

      }
      head = head->next;
   }
   printf("%d\t",SecondMax);
}



int main()
{
   
    PNODE Head = NULL;  

   
    InsertFirst(&Head,110);
    InsertFirst(&Head,230);
     
    InsertFirst(&Head,320);
    InsertFirst(&Head,240);
   

   

     SecMaximum(Head);
  




   return 0;
}
