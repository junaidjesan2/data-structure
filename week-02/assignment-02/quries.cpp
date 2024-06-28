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
void insert_at_tail(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    tail = newNode;
}
void insert_at_head(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);
    newNode->next = head;
    head = newNode;
    if (tail == NULL)
    {
        tail = newNode;
    }
}
void deleteFromPosition(Node *&head, Node *&tail, int pos)
{

    if (head == NULL)
    {
        return;
    }
    if (pos == 0)
    {
        Node *deleteNode = head;
        head = head->next;
        if (head == NULL)
        {
            tail = NULL;
        }
        delete deleteNode;
        return;
    }
    Node *tmp = head;
    for (int i = 1; i <= pos - 1; i++)
    {
        tmp = tmp->next;
    }
    if (tmp->next == NULL)
    {
        return;
    }
    Node *deleteNode = tmp->next;
    tmp->next = tmp->next->next;
    if (tmp->next == NULL)
    {
        tail = tmp;
    }
    delete deleteNode;
}
void linkedList(Node *head)
{
    Node *temHead = head;
    while (temHead != NULL)
    {
        cout << temHead->val << " ";
        temHead = temHead->next;
    }
    cout << endl;
}
int count(Node *head)
{
    int val = 0;
    Node *tmp = head;
    while (true)
    {
        if (tmp == NULL)
        {
            break;
        }
        val++;
        tmp = tmp->next;
    }
    return val;
}
int main()
{

    Node *head = NULL;
    Node *tail = NULL;
    int q;
    cin >> q;
    while (q--)
    {
        int listSize = count(head);
        int op;
        cin >> op;
        if (op == 1)
        {
            int val;
            cin >> val;
            insert_at_tail(head, tail, val);
            linkedList(head);
        }
        else if (op == 0)
        {
            int val;
            cin >> val;
            insert_at_head(head, tail, val);
            linkedList(head);
        }
        else if (op == 2)
        {
            int val;
            cin >> val;
            if (listSize < val)
            {
                linkedList(head);
            }
            else
            {
                deleteFromPosition(head, tail, val);
                linkedList(head);
            }
        }
    }
    return 0;
}