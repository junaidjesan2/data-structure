#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node *right;
    Node(int val)
    {
        this->val = val;
        this->right = NULL;
    }
};

void insert_at_tail(int val, Node *&head, Node *&tail)
{
    Node *newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->right = newNode;
    tail = newNode;
}

void print_list(Node *head)
{
    while (head != NULL)
    {
        cout << head->val << " ";
        head = head->right;
    }
    cout << endl;
}

void remove_duplicates(Node *head)
{
    for (Node *i = head; i != NULL; i = i->right)
    {
        Node *prev = i;
        Node *j = i->right;
        while (j != NULL)
        {
            if (j->val == i->val)
            {
                Node *delNode = j;
                prev->right = j->right;
                j = j->right;
                delete delNode;
            }
            else
            {
                prev = j;
                j = j->right;
            }
        }
    }
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    int val;

    while (true)
    {
        cin >> val;
        if (val == -1)
            break;
        insert_at_tail(val, head, tail);
    }

    remove_duplicates(head);
    print_list(head);

    return 0;
}
