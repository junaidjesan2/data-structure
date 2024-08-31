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
void input_tree()
{
    int v;
    cin >> v;
    Node *root;
    if (v == -1)
        root = NULL;
    else
        root = new Node(v);
    queue<Node *> q;
    if (root)
        q.push(root);
    while (!q.empty())
    {
        Node *f = q.front();
        q.pop();
    }

    int l, r;
    cin >> l >> r;
    Node *left;
    Node *right;
    if (l == -1)
        left == NULL;
    else
        left = new Node(1);
    if (; r == -1)
        right = NULL;
    else
        right = new Node(r);
};
int main()
{
    input_tree();
    return 0;
}