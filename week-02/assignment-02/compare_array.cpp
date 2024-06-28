#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    long int val;
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
void insert_at_tail1(Node *&head1, Node *&tail1, int v1)
{
    Node *newNode = new Node(v1);
    if (head1 == NULL)
    {
        head1 = newNode;
        tail1 = newNode;
        return;
    }
    tail1->next = newNode;
    tail1 = newNode;
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
void element_same(Node *head, Node *head1)
{
    Node *tem = head;
    Node *tem1 = head1;
    int res = 1;
    while (tem != NULL && tem1 != NULL)
    {
        if (tem->val != tem1->val)
        {
            cout << "NO";
            return;
        }
        tem = tem->next;
        tem1 = tem1->next;
    }
    if (tem == NULL && tem1 == NULL)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
}
int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    Node *head1 = NULL;
    Node *tail1 = NULL;
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
    while (true)
    {
        cin >> v1;
        if (v1 == -1)
        {
            break;
        }
        insert_at_tail1(head1, tail1, v1);
    }
    int ar1 = count(head);
    int ar2 = count(head1);
    if (ar1 == ar2)
    {
        element_same(head, head1);
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}