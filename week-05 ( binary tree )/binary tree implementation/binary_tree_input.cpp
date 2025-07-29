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
    Node *root = new Node(val);
    queue<Node *> q;
    q.push(root);

    while (!q.empty())
    {
        Node *tmp = q.front();
        q.pop();

        int l, r;
        cin >> l >> r;
        Node *myleft, *myright;

        if (l == -1)
        {
            myleft = NULL;
        }
        else
        {
            myleft = new Node(l);
        }
        if (r == -1)
        {
            myright = NULL;
        }
        else
        {
            myright = new Node(r);
        }

        tmp->left = myleft;
        tmp->right = myright;

        if (tmp->left != NULL)
            q.push(tmp->left);

        if (tmp->right != NULL)
            q.push(tmp->right);
    }
    return root;
}
void levelOrderTraversal(Node *root)
{
    queue<Node *> q;
    if (root == NULL)
        return;
    q.push(root);
    while (!q.empty())
    {
        Node *tmp = q.front();
        q.pop();
        cout << tmp->val << " ";
        if (tmp->left != NULL)
            q.push(tmp->left);
        if (tmp->right != NULL)
            q.push(tmp->right);
    }
}
int countNodes(Node *root)
{
    if (root == NULL)
        return 0;
    int l = countNodes(root->left);
    int r = countNodes(root->right);
    return 1 + l + r;
}
int countLeftNodes(Node *root)
{
    if (root == NULL)
        return 0;
    int l = countNodes(root->left);
    // int r = countNodes(root->right);
    return 1 + l;
}
int leafNodes(Node *root)
{
    if (root == NULL)
        return 0;
    if (root->left == NULL && root->right == NULL)
        return 1;
    return leafNodes(root->left) + leafNodes(root->right);
}
int main()
{
    Node *root = input_tree();
    // levelOrderTraversal(root);
    cout << leafNodes(root) << endl;
    return 0;
}