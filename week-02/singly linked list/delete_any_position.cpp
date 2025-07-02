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
void delete_at_position(int pos, Node *&head)
{
    if (pos < 1 || head == NULL)
        return;

    Node *temp = head;
    if (pos == 1)
    {
        head = temp->right;
        delete temp;
        return;
    }

    for (int i = 1; i < pos - 1 && temp != NULL; i++)
    {
        temp = temp->right;
    }

    if (temp == NULL || temp->right == NULL)
        return;

    Node *nodeToDelete = temp->right;
    temp->right = nodeToDelete->right;
    delete nodeToDelete;
}
void print_list(Node *head)
{
    if (head == NULL)
    {
        return;
    }
    cout << head->val << " ";
    print_list(head->right);
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
    delete_at_position(2, head);
    print_list(head);
    return 0;
}