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

Node *input_tree()
{
    int val;
    cin >> val;
    if (val == -1)
        return NULL;
    Node *root = new Node(val);
    queue<Node *> q;
    if (root)
        q.push(root);
    while (!q.empty())
    {
        Node *p = q.front();
        q.pop();
        int l, r;
        cin >> l >> r;
        Node *left;
        Node *right;
        if (l == -1)
            left = NULL;
        else
            left = new Node(l);
        if (r == -1)
            right = NULL;
        else
            right = new Node(r);
        p->left = left;
        p->right = right;
        if (p->left)
            q.push(p->left);
        if (p->right)
            q.push(p->right);
    }
    return root;
}
void PrintLeft(Node *root)
{
    if (root == NULL)
        return;
    PrintLeft(root->left);
    if (root->left == NULL && root->right)
        PrintLeft(root->right);
    cout << root->val << " ";
}
void PrintRight(Node *root)
{
    if (root == NULL)
        return;
    cout << root->val << " ";
    PrintRight(root->right);
    if (root->right == NULL && root->left)
        PrintRight(root->left);
}
int main()
{
    Node *root = input_tree();

    PrintLeft(root->left);
    cout << root->val << " ";
    PrintRight(root->right);

    return 0;
}