#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    long long int val;
    Node *right;
    Node(int val)
    {
        this->val = val;
        this->right = NULL;
    }
};
void delete_at_position(int val, Node *&head, Node *&tail)
{
    if (head == NULL)
        return;

    if (val == 0)
    {
        Node *delNode = head;
        head = head->right;
        if (head == NULL)
            tail = NULL;
        delete delNode;
        return;
    }

    Node *temp = head;
    for (int i = 0; i < val - 1 && temp != NULL; i++)
    {
        temp = temp->right;
    }

    if (temp == NULL || temp->right == NULL)
        return;

    Node *nodeToDelete = temp->right;
    temp->right = nodeToDelete->right;
    if (temp->right == NULL)
        tail = temp;
    delete nodeToDelete;
}
void insert_at_tail(Node *&head, Node *&tail, long long int val)
{
    Node *new_node = new Node(val);
    if (head == NULL)
    {
        head = new_node;
        tail = new_node;
        return;
    }
    tail->right = new_node;
    tail = new_node;
}
void insert_at_head(Node *&head, Node *&tail, long long int val)
{
    Node *new_node = new Node(val);
    if (head == NULL)
    {
        head = new_node;
        tail = new_node;
        return;
    }
    new_node->right = head;
    head = new_node;
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
int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    int t;
    cin >> t;
    while (t--)
    {
        long long val;
        int n;
        cin >> n;
        if (n == 0)
        {
            cin >> val;
            insert_at_head(head, tail, val);
        }
        else if (n == 1)
        {
            cin >> val;
            insert_at_tail(head, tail, val);
        }
        else if (n == 2)
        {
            cin >> val;
            delete_at_position(val, head, tail);
        }
        print_list(head);
    }
    return 0;
}