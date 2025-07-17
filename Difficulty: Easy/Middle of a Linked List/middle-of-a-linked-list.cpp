/* Link list Node 
struct Node {
    int data;
    Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
    
}; */
class Solution{
    public:
    /* Should return data of middle node. If linked list is empty, then  -1*/
    int getMiddle(Node *head)
    {
        struct Node * ptr=head;
        int count=0;
        while(ptr!=NULL){
            ptr=ptr->next;
            count++;
        }
        ptr=head;
        int mid=count/2;
        count=0;
        while(count!=mid){
           ptr=ptr->next; 
           count++;
        }
        return ptr->data;
    }
};

