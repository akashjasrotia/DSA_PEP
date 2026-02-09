#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *next;
    Node(int val)
    {
        data = val;
        next = NULL;
    }
};

void insertAtFront(Node *&head, int val)
{
    Node *newNode = new Node(val);
    newNode->next = head;
    head = newNode;
}
void printList(Node *head)
{
    while (head != NULL)
    {
        cout << head->data << "->";
        head = head->next;
    }
    cout << "NULL" << endl;
}

void insertAtEnd(Node *&head, int val)
{
    Node *newNode = new Node(val);

    if (head== NULL)
    {
        head = newNode;
        return;
    }

    Node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = newNode;
}
Node* rotateList(Node* &head,int k){
    if(!head || !head->next || k==0){
        return head;
    }
    int l=1;
    Node* tail = head;
    while(tail->next){
        tail = tail->next;
        l++;
    }
    k = k%l;
    if(k==0) return head;

    tail->next = head;
    Node* newTail = head;
    for (int i = 0; i<l-k-1;i++){
        newTail = newTail->next;
    }
    Node* newHead = newTail->next;
    newTail->next = NULL;
    return newHead;
}
int main()
{
    Node* head = NULL;
    int input = 0;
    while(input!=-1){
        cin>>input;
        if(input!=-1){
            insertAtEnd(head,input);
        }
    }
    cout<<"Old list: ";
    printList(head);
    int k;
    cout<<"Enter k: ";
    cin>>k;
    Node* newHead = rotateList(head,k);
    cout<<"New List: ";
    printList(newHead);
    return 0;
}