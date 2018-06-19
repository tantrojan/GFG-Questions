/*Please note that it's Function problem i.e.
you need to write your solution in the form of Function(s) only.
Driver Code to call/invoke your function is mentioned above.*/

/* Link list Node 
struct Node {
    int data;
    Node* next;
}; */
/* Should return data of middle node. If linked list is empty, then  -1*/
int getMiddle(Node *head)
{
   Node *slow=head,*fast=head;
   int c=0;
   while(slow && fast && fast->next){
       slow=slow->next;
       fast=fast->next;
       if(fast->next!=NULL)
       {
           fast=fast->next;
       }

   }
   return slow->data;
}