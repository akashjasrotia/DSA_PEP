#include <iostream>
#include <queue>
using namespace std;
class Node{
    public:
    int val;
    Node* left;
    Node* right;

    Node(int val){
        this->val = val;
        left = NULL;
        right = NULL;
    }
};
Node* buildTree(){
    int a;
    cout<<"Enter the root value: ";
    cin>>a;
    if(a == -1){
        return NULL;
    }
    Node* node = new Node(a);
    queue <Node*> q;
    q.push(node);
    while(!q.empty()){
        Node* curr = q.front();
        q.pop();
        int l,r;
        cout<<"Enter the left child of the node with value "<<curr->val<<": ";
        cin>>l;
        if(l != -1){
            curr->left = new Node(l);
            q.push(curr->left);
        }
        cout<<"Enter the right child of the node with value "<<curr->val<<": ";
        cin>>r;
        if(r != -1){
            curr->right = new Node(r);
            q.push(curr->right);
        }
    }
    return node;
}
void inorderTraversal(Node* root){
    if(!root){
        return;
    }
    cout<<root->val;
    inorderTraversal(root->left);
    inorderTraversal(root->right);
}

int main(){
    Node* root = buildTree();
    inorderTraversal(root);
    cout<<endl;
    return 0;
}