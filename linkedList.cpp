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
    printList(head);
    return 0;
}