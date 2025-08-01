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
Node *input_binary_tree()
{
    int r;
    cin >> r;
    Node *root = new Node(r);
    queue<Node *> q;
    q.push(root);

    while (!q.empty())
    {
        Node *tmp = q.front();
        q.pop();

        int l, r_val;
        cin >> l >> r_val;
        Node *myleft, *myright;

        if (l == -1)
        {
            myleft = NULL;
        }
        else
        {
            myleft = new Node(l);
        }

        if (r_val == -1)
        {
            myright = NULL;
        }
        else
        {
            myright = new Node(r_val);
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
int treeHeight(Node *root)
{
    if (root == NULL)
        return 0;
    int leftHeight = treeHeight(root->left);
    int rightHeight = treeHeight(root->right);
    return leftHeight + rightHeight + 1;
}
int treeDepth(Node *root)
{
    if (root == NULL)
        return -1;
    int leftDepth = treeDepth(root->left);
    int rightDepth = treeDepth(root->right);
    return max(leftDepth, rightDepth) + 1;
}
int main()
{
    Node *root = input_binary_tree();
    int h = treeHeight(root);
    int d = treeDepth(root);

    int expected = (1 << (d + 1)) - 1;
    if (h == expected)
        cout << "YES";
    else
        cout << "NO";
    return 0;
}