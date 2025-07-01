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
void insert_at_any_position(int val, int pos, Node *&head)
{
    Node *newNode = new Node(val);
    if (pos == 0)
    {
        newNode->right = head;
        head = newNode;
        return;
    }
    Node *temp = head;
    for (int i = 0; i < pos - 1 && temp != NULL; i++)
    {
        temp = temp->right;
    }
    newNode->right = temp->right;
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
    insert_at_any_position(10, 0, head);
    insert_at_any_position(20, 1, head);
    insert_at_any_position(30, 1, head);
    insert_at_any_position(40, 3, head);
    print_list(head);
    return 0;
}