#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    long int val;
    Node *next;
    Node *prev;

    Node(int val)
    {
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
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
    newNode->prev = tail;
    tail = newNode;
}
void linkedList(Node *head)
{
    Node *temHead = head;
    if (temHead == NULL)
    {
        return;
    }
    cout << temHead->val << " ";
    linkedList(temHead->next);
}
void palindrom(Node *&head, Node *&tail)
{
    int res = 1;
    while (head != NULL && tail != NULL && head != tail && head->prev != tail)
    {
        if (head->val != tail->val)
        {
            res = 0;
            break;
        }
        head = head->next;
        tail = tail->prev;
        res = 1;
    }

    if (res == 1)
    {
        cout << "YES";
        return;
    }
    else if (res == 0)
    {
        cout << "NO";
        return;
    }
}
int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    int v;
    while (true)
    {
        cin >> v;
        if (v == -1)
        {
            break;
        }
        insert_at_tail(head, tail, v);
    }
    linkedList(head);
    palindrom(head, tail);
    return 0;
}