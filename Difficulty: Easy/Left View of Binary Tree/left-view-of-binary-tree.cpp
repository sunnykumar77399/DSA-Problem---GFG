/*

class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = nullptr;
        right = nullptr;
    }
};
 */

class Solution {
  public:
         vector<int> res;
    void func(Node* root,int depth){
        if(!root) return ;
        depth++;
        if(depth>res.size()) {
            res.push_back(root->data);
        func(root->left,depth);
        func(root->right,depth);

    }
    vector<int> leftView(Node *root) {
        // code here
        func(root,0);
        return res;
    }
};