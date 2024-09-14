// 3: write a pogram which return addition of all even element
// from singly linear linkd list
// input: 11 20 32 41
// output : 52

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

void AdditionEven(PNODE head)
{
   
    int iCount= 0;
   while(head != NULL)
   { 
      if(head->data % 2 == 0)
      {
        iCount = iCount + (head->data);
      }
      head = head->next;
   }
    printf("%d\t",iCount);
}



int main()
{
   
    PNODE Head = NULL;  

   
    InsertFirst(&Head,11);
    InsertFirst(&Head,20);
     
    InsertFirst(&Head,32);
    InsertFirst(&Head,41);
   

   

    AdditionEven(Head);
  




   return 0;
}
