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
void insert_at_any_position(Node *&head, Node *&tail, int val, int n)
{
    Node *newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    if (n == 1)
    {
        newNode->right = head;
        head->left = newNode;
        head = newNode;
        return;
    }
    Node *temp = head;
    for (int i = 1; i < n && temp->right != NULL; i++)
    {
        temp = temp->right;
    }
    newNode->right = temp->right;
    newNode->left = temp;
    if (temp->right != NULL)
    {
        temp->right->left = newNode; // The node after temp now points back to the new node
    }
    else
    {
        tail = newNode; // FIX: If inserting at the end, update the tail pointer
    }
    // temp->right->left = newNode;
    temp->right = newNode;
}
void print_list(Node *&head)
{
    Node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->right; // Changed from 'right' to 'next'
    }
    cout << endl;
}
int main()
{

    Node *head = NULL;
    Node *tail = NULL;
    int val, n;
    while (true)
    {
        cin >> n;
        cin >> val;
        if (val == -1)
            break;
        insert_at_any_position(head, tail, val, n);
    }
    print_list(head);
    return 0;
}