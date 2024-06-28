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
void min_max(Node *head)
{
    int min = INT_MAX;
    int max = INT_MIN;
    Node *tmp = head;
    while (tmp != NULL)
    {
        if (tmp->val < min)
        {
            min = tmp->val;
        }

        if (tmp->val > max)
        {
            max = tmp->val;
        }
        tmp = tmp->next;
    }
    cout << max - min;
}
int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    int v, v1;
    while (true)
    {
        cin >> v;
        if (v == -1)
        {
            break;
        }
        insert_at_tail(head, tail, v);
    }
    min_max(head);
    return 0;
}