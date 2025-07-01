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
}
void print_list(Node *head)
{
    while (head != NULL)
    {
        cout << head->val << " ";
        head = head->right;
    }
}
int main()
{
    Node *head = NULL;
    insert_at_tail(10, head);
    insert_at_tail(20, head);
    insert_at_tail(30, head);
    insert_at_tail(40, head);
    print_list(head);

    return 0;
}