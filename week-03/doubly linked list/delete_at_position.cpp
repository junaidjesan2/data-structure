#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val;
    Node *next;
    Node *previous;

    Node(int val)
    {
        this->val = val;
        this->next = NULL;
        this->previous = NULL;
    }
};
void print_list(Node *head)
{
    Node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    cout << endl;
}
void print_reverse(Node *tail)
{
    Node *back = tail;
    while (back != NULL)
    {
        cout << back->val << " ";
        back = back->previous;
    }
    cout << endl;
}
void print_at_position(Node *head, int pos, int val)
{
    Node *newNode = new Node(val);
    Node *tmp = head;
    for (int i = 1; i < pos - 1; i++)
    {
        tmp = tmp->next;
    }
    newNode->next = tmp->next;
    tmp->next = newNode;
    newNode->next->previous = newNode;
    newNode->previous = tmp;
}
void delete_ai_position(Node *head, int pos)
{
    Node *tmp = head;
    if (pos == 1)
    {
        head = tmp->next;
    }

    for (int i = 1; i < pos - 1; i++)
    {
        tmp = tmp->next;
    }
    Node *deleteNode = tmp->next;
    tmp->next = tmp->next->next;
    tmp->next->previous = tmp;
    delete deleteNode;
}
int main()
{
    Node *a = new Node(10);
    Node *b = new Node(20);
    Node *c = new Node(30);
    Node *d = new Node(40);
    Node *tail = d;

    a->next = b;
    b->previous = a;
    b->next = c;
    c->previous = b;
    c->next = d;
    d->previous = c;
    int pos, val;
    cin >> pos;
    cin >> val;
    // print_at_position(a, pos, val);
    print_list(a);
    delete_ai_position(a, 2);
    print_list(a);
    cout << endl;

    return 0;
}