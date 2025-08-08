/*

struct Node
{
    int data;
    struct Node* next;

    Node(int x){
        data = x;
        next = NULL;
    }
};

*/

class Solution {
 
    public:
    int add( Node *ptr)
     {
         if(ptr==NULL) return 1;
         int carry=add(ptr->next);
         ptr->data+=carry;
         if(ptr->data<10){
             return 0;
         }
         ptr->data=0;
         return 1;
     }
        
    Node* addOne(Node *head) 
    {
        int carry=add(head);
        if(carry==1){
            struct Node * newNode=new Node(1);
            newNode->next=head;
            return newNode;
        }
        return head;
    }
};