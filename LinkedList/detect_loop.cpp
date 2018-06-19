//Detect loop
/*The structure of linked list is the following
struct node
{
int data;
node* next;
};*/
int detectloop(struct node *list){
    struct node *slow=list,*fast=list;
    while(slow && fast && fast->next)
    {
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
        if((slow)==(fast))
        {
            return 1;
        }
    }
    return 0;
}