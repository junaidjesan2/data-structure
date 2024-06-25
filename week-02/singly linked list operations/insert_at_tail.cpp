#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node *next;

    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};
void insert_at_tail(Node *&head, int val)
{
    // created a new node
    Node *newNode = new Node(val);
    // is head is null or head has one value that means head is new node
    if (head == NULL)
    {
        head = newNode;
        return;
    }
    // can't jump head one to another that's why, maked pointer of head
    Node *temHead = head;
    // for the last box we have to check does it have null value or not, if not then we have to go forward
    while (temHead->next != NULL)
    {
        temHead = temHead->next;
    }
    // connected new box with the last box
    temHead->next = newNode;
}
void print_linked_list(Node *head)
{
    cout << "Your Linked List Is: ";
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;
}
int main()
{
    Node *head = NULL;
    while (true)
    {
        cout << "1: Insert which method do you want" << endl;
        cout << "2: Show Results" << endl;
        cout << "3: Break" << endl;
        int v;
        cin >> v;
        if (v == 1)
        {
            int val;
            cout << "Insert a value: ";
            cin >> val;
            insert_at_tail(head, val);
        }
        else if (v == 2)
        {
            print_linked_list(head);
        }
        else if (v == 3)
        {
            break;
        }
    }
    return 0;
}