#include <iostream>
#include <vector>
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
Node* insert(Node* root,int val){
    if(!root){
        
        Node* newNode = new Node(val);
        return newNode;
    }
    if(val < root->val){
        root->left = insert(root->left,val);
    }
    else {
        root->right = insert(root->right,val);
    }
    return root;
}
void inorder(Node* root){
    if(!root){
        return ;
    }
    inorder(root->left);
    cout<<root->val<<" ";
    inorder(root->right);
}

int main(){
    int input;
    Node* root = NULL;
    while(true){
        cout<<"Enter node to add: ";
        cin>>input;
        if(input == -1){
            break;
        }
        root = insert(root,input);
    }
    inorder(root);
}