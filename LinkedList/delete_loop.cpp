/*Please note that it's Function problem i.e.
you need to write your solution in the form of Function(s) only.
Driver Code to call/invoke your function is mentioned above.*/

/*The structure of linked list is the following
struct Node
{
int data;
Node* next; 
};*/
/*The function removes the loop from the linked list if present
You are required to complete this method*/
void removeTheLoop(Node *node)
{
     Node *slow=node,*fast=node,*prev;
     
     while(slow && fast && fast->next)
     {
         prev=slow;
         slow=slow->next;
         fast=fast->next;
         if(fast->next!=NULL)
         {
             fast=fast->next;
         }
         else
         {
             break;
         }
         if(slow==fast)
         {
             fast=node;
             while(slow!=fast)
             {
                 prev=slow;
                 slow=slow->next;
                 fast=fast->next;
             }
             prev->next=NULL;
             break;
         }
     }
}
