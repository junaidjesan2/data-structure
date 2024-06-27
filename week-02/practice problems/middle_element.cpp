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
    cout << temHead->val << " ";
    linkedList(temHead->next);
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
void print_middle(Node *head)
{
    int totalNodes = count(head);
    Node *tmp = head;
    int mid = totalNodes / 2;

    if (totalNodes % 2 == 1)
    { // Odd number of nodes
        for (int i = 0; i < mid; i++)
        {
            tmp = tmp->next;
        }
        cout << "Middle element: " << tmp->val << endl;
    }
    else
    { // Even number of nodes
        for (int i = 0; i < mid - 1; i++)
        {
            tmp = tmp->next;
        }
        cout << "Middle elements: " << tmp->val << " and " << tmp->next->val << endl;
    }
}
int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    int v, v1;
    while (true)
    {
        cin >> v;
        if (v == 0)
        {
            break;
        }
        insert_at_tail(head, tail, v);
    }
    cout << endl
         << endl;
    print_middle(head);
    // int ar = count(head);
    // if (ar%2==1)
    // {
    //     for (int i = 1; i <= (ar/2)+1; i++)
    //     {
    //         /* code */
    //     }

    // }

    // cout << ar % 2 << " " << ar / 2;
    return 0;
}