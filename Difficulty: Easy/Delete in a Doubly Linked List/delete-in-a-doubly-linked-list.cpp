/* Structure of Node
class Node {
  public:
    int data;
    Node *next;
    Node *prev;

    Node(int val) {
        data = val;
        this->next = NULL;
        this->prev = NULL;
    }
};
*/

class Solution {
  public:
    // Function to delete a node at given position.
    Node* deleteNode(Node* head, int x) {
        if(x==1){
            head->next->prev=NULL;
            return head->next;
        }else{
            // Node * del=NULL;
            Node * ptr=head;
            while(--x){
                 ptr=ptr->next;
            }
            ptr=ptr->prev;
            if(ptr->next->next==NULL){
                ptr->next=NULL;
                // return head;
            }else {
                ptr->next=ptr->next->next;
                ptr->next->prev=ptr;
            }
        }
        return head;
    }
};
