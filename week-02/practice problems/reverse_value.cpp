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
void insert_at_tail(Node *&head, Node *&tail, int v)
{
    Node *newNode = new Node(v);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    tail = newNode;
}
void linkedList(Node *head)
{
    Node *temHead = head;
    if (temHead == NULL)
    {
        return;
    }
    linkedList(temHead->next);
    cout << temHead->val << " ";
}
int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    int v;
    while (true)
    {
        cin >> v;
        if (v == 0)
        {
            break;
        }
        insert_at_tail(head, tail, v);
    }
    linkedList(head);
    return 0;
}