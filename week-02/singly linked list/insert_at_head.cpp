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
void insert_at_head(Node *&head, int val)
{
    Node *newNode = new Node(val);
    newNode->right = head;
    head = newNode;
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
    Node *head = new Node(10);
    Node *B = new Node(20);

    head->right = B;
    insert_at_head(head, 30);
    print_list(head);
    return 0;
}