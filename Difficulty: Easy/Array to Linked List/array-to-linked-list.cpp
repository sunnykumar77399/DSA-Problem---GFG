// User function Template for C++

/*class Node {
public:
    int data;
    Node* next;

    // Default constructor
    Node()
    {
        data = 0;
        next = NULL;
    }

    // Parameterised Constructor
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};*/

class Solution {
  public:
    Node* constructLL(vector<int>& arr) {
        // code here
        Node * head=new Node();
        head->data=0;
        Node * ptr=head;
        for(auto i : arr){
            ptr->next =new Node(i);
            ptr=ptr->next;
        }
        return head->next;
    }
};
