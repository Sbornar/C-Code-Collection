// 2: write a program which display all elements which are prime 
// from singly linear linked list
// input: 11 20 17 41 22 89
// output : 11 17 41 89 

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

void   DisplyaPrime(PNODE head)
{
   
    int iCnt = 0;
   while(head != NULL)
   { 
     int i=2;
      while(i < (head->data))
      {
           if((head->data) % i == 0)
           {
             iCnt = 1;
           }
           i++;

      }
      if(iCnt == 0)
      {
         printf("%d\t",head->data); 
         
      }
      iCnt =0;
      head = head -> next;
      
   }
}



int main()
{
   
    PNODE Head = NULL;  

   
    InsertFirst(&Head,11);
    InsertFirst(&Head,20);
     
    InsertFirst(&Head,17);
    InsertFirst(&Head,41);
    InsertFirst(&Head,22);
     InsertFirst(&Head,89);

   

    DisplyaPrime(Head);
  




   return 0;
}
