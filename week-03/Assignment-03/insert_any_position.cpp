#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val;
    Node *next;
    Node *prev;

    Node(int val)
    {
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};
void print_list(Node *head)
{
    Node *tmp = head;
    cout << "L -> ";
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    cout << endl;
}
void print_reverse(Node *tail)
{
    Node *tmp = tail;
    cout << "R -> ";
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->prev;
    }
    cout << endl;
}
void insert_at_tail(Node *&head, Node *&tail, int v)
{
    Node *newNode = new Node(v);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
    }
    else
    {
        tail->next = newNode;
        newNode->prev = tail;
        tail = newNode;
    }
    print_list(head);
    print_reverse(tail);
}

void insert_at_position(Node *&head, Node *&tail, int pos, int val)
{
    Node *newNode = new Node(val);
    if (pos == 0)
    {
        newNode->next = head;
        if (head != NULL)
        {
            head->prev = newNode;
        }
        head = newNode;
        if (tail == NULL)
        {
            tail = newNode;
        }
    }
    else
    {
        Node *tmp = head;
        for (int i = 0; i < pos - 1; i++)
        {
            tmp = tmp->next;
        }
        newNode->next = tmp->next;
        newNode->prev = tmp;
        if (tmp->next != NULL)
        {
            newNode->next->prev = newNode;
        }
        tmp->next = newNode;
        if (newNode->next == NULL)
        {
            tail = newNode;
        }
    }
    print_list(head);
    print_reverse(tail);
}
int count(Node *head)
{
    int val = 0;
    Node *tmp = head;
    while (tmp != NULL)
    {
        val++;
        tmp = tmp->next;
    }
    return val;
}
int main()
{
    Node *head = NULL;
    Node *tail = NULL;

    int t;
    cin >> t;
    while (t--)
    {
        int pos, val;
        cin >> pos;
        cin >> val;
        int n = count(head);
        if (pos < 0 || pos > n)
        {
            cout << "Invalid" << endl;
        }
        else if (pos == n)
        {
            insert_at_tail(head, tail, val);
        }
        else
        {
            insert_at_position(head, tail, pos, val);
        }
    }

    return 0;
}
