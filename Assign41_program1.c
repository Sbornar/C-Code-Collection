// 1 : write a program which search first occurrence of particular elelemnt from scanf
// singly linear linked list.
// function should return position at which elelemnt is found

// input element: 30
// output : 3

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

void InsertFirst(PPNODE First , int iValue)// here we take pointer address to into doubble 
                                          // pointer because we already pass the address of one pointer
                                          //so reciving the address of any pointer we need to use doubble pointer. 
{
       PNODE newn = NULL; //we create here one pointer which stored the
                         // address of new node;

         newn = (PNODE) malloc(sizeof(NODE)); // here we do dynamic memory allocation which allocated by 
         //12 bytes of each node because int takes 4 bytes and pointer takes 8 bytes
         // which is 12 bytes of memory.
         // this node gest address of 200 to 212

         newn-> next = NULL;  // we give value of given new node
         newn-> data = iValue;

         if(*First == NULL) // it came inside of if block if the it is first node or
         ////list is empty
         {
             *First = newn;
         }else
         {
            newn -> next = *First;
            *First = newn;
         }


}

int SearchFirstOcc(PNODE head, int iNo)
{
    int iCnt = 0;

    while(head != NULL)
    {
        if(head->data == iNo)
        {
            iCnt++;
            return iCnt;
        }
        iCnt++;
        head= head->next;
    }
    return iCnt;
}



int main()
{
    // struct node* Head= NULL;
    PNODE Head = NULL;  // address of head is 100 to 108
                        //value inside of head is NULL;

    InsertFirst(&Head,70); //we pass address of head and value 101 to function
    InsertFirst(&Head,30);
    InsertFirst(&Head,50);
    InsertFirst(&Head,40);
    InsertFirst(&Head,30);
    InsertFirst(&Head,20);
    InsertFirst(&Head,10);

    int iRet = 0;

    iRet = SearchFirstOcc(Head , 30);
    printf("%d\n",iRet);




   return 0;
}


