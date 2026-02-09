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
void reverseList(Node* &head){
    Node* prev = NULL;
    while(head){
        Node* next = head->next;
        head->next = prev;
        prev = head;
        head = next;
    }
    head = prev;
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
    cout<<"Original List: ";
    printList(head);
    reverseList(head);
    cout<<"Reversed List: ";
    printList(head);
    return 0;
}