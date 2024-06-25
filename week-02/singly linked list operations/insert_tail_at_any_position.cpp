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
void insert_tail(Node *&head, int val)
{
    Node *newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
        return;
    }
    Node *temHead = head;
    while (temHead->next != NULL)
    {
        temHead = temHead->next;
    }
    temHead->next = newNode;
}
void insert_at_any_position(Node *head, int pos, int val)
{
    Node *newNode = new Node(val);
    Node *tmp = head;
    for (int i = 1; i <= pos - 1; i++)
    {
        tmp = tmp->next;
    }
    newNode->next = tmp->next;
    tmp->next = newNode;
    cout << "Inserted at position" << " :" << pos << endl
         << endl;
}
void linkedList(Node *head)
{
    cout << "Linked List: ";
    Node *temHead = head;
    while (temHead != NULL)
    {
        cout << temHead->val << " ";
        temHead = temHead->next;
    }
    cout << endl
         << endl;
}
int main()
{
    Node *head = NULL;
    while (true)
    {
        cout << "1: Insert a number into list" << endl;
        cout << "2: Insert at any position" << endl;
        cout << "3: Show results" << endl;
        cout << "4: break" << endl;
        int op;
        cin >> op;
        if (op == 1)
        {
            cout << "Insert number: ";
            int v;
            cin >> v;
            insert_tail(head, v);
        }
        else if (op == 2)
        {
            int pos, val;
            cout << "In which position would you like to insert :";
            cin >> pos;
            cout << "Enter the value :";
            cin >> val;
            insert_at_any_position(head, pos, val);
        }
        else if (op == 3)
        {
            linkedList(head);
        }
        else if (op == 4)
        {
            break;
        }
    }
    return 0;
}