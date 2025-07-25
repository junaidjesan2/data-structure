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
void inser_at_head(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    head->left = newNode;
    newNode->right = head;
    head = newNode;
}
void print_list(Node *&head)
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
    Node *tail = NULL;
    int val;
    while (true)
    {
        cin >> val;
        if (val == -1)
            break;
        inser_at_head(head, tail, val);
    }
    print_list(head);
    return 0;
}