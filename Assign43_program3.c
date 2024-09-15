// 3: write  a program which display product of all digit of all element from
// singly linear linked list.(Dont consider 0)

// intput: 11 20 32 41
// output : 1 2 6 4

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

void   DisplayProduct(PNODE head)
{
   
  while(head != NULL)
  {
     int iDigit = 0, iValue= 0 , iCount = 1;
        iDigit = head->data;
     while(iDigit != 0)
     {
        iValue = iDigit % 10;
        if(iValue != 0)
        {
            iCount = iCount * iValue;
        }
        iDigit = iDigit /10;
     }
     printf("%d\t",iCount);

     head = head->next;

  }
}



int main()
{
   
    PNODE Head = NULL;  

   
    InsertFirst(&Head,11);
    InsertFirst(&Head,20);
     
    InsertFirst(&Head,32);
    InsertFirst(&Head,41);
   
   

   

       DisplayProduct(Head);
  




   return 0;
}
