#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node *left;
    Node *right;
    Node(int val)
    {
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};
void insert_at_tail(int val, Node *&head)
{
    Node *newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
        return;
    }
    Node *temp = head;
    while (temp->right != NULL)
    {
        temp = temp->right;
    }
    temp->right = newNode;
};
void print_list(Node *head)
{
    while (head == NULL)
    {
        return;
    }
    cout << head->val << " ";
    print_list(head->right);
}
void short_list(Node *&head)
{

    for (Node *i = head; i->right != NULL; i = i->right)
    {
        for (Node *j = i->right; j != NULL; j = j->right)
        {
            if (i->val > j->val)
            {
                swap(i->val, j->val);
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
        insert_at_tail(val, head);
    }
    short_list(head);
    print_list(head);
    return 0;
}