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
    while (head != NULL)
    {
        cout << head->val << " ";
        head = head->right;
    }
}
void reverse_list(Node *&head, Node *tmp)
{
    if (tmp->right == NULL)
    {
        head = tmp;
        return;
    }
    reverse_list(head, tmp->right);
    tmp->right->right = tmp;
    tmp->right = NULL;
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
    reverse_list(head, head);
    print_list(head);
    return 0;
}