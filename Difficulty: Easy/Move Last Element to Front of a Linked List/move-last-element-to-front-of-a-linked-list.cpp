// User function Template for C++

class Solution {
  public:
    Node *moveToFront(Node *head) {
        // code here
         if(head==NULL || head->next==NULL) return head;
        Node * ptr=head;
        while(ptr->next->next!=NULL){
            ptr=ptr->next;
        }
        Node *newhead=ptr->next;
        ptr->next=NULL;
        newhead->next=head;
        return newhead;
    }
};