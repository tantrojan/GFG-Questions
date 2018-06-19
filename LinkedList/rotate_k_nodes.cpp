/*Please note that it's Function problem i.e.
you need to write your solution in the form of Function(s) only.
Driver Code to call/invoke your function is mentioned above.*/

/*
  Rotate a linked list after node k
  The input list will have at least one element  
  A Linked List node has following structure.
  struct node
  {
     int data;
     struct node *next;
  }
*/
/*  **head_ref is a pointer to head pointer.  This function
    should modify value at head_ref to change head (if required)*/
void rotate(struct node **head_ref, int k)
{
   struct node *i=(*head_ref),*prev;
   int c=0;
   while(i!=NULL)
   {
       prev=i;
       i=i->next;
   }
   prev->next=(*head_ref);
   i=*head_ref;
   for(;c<k-1;c++)
   {
       i=i->next;
   }
   (*head_ref)=i->next;
   i->next=NULL;
}