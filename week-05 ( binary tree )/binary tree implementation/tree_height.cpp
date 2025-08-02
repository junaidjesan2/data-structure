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
int tree_height(Node *root)
{
    if (root == NULL)
        return 0;
    if (root->left == NULL && root->right == NULL)
        return 1;
    int l = tree_height(root->left);
    int r = tree_height(root->right);

    return max(l, r) + 1;
}
int main()
{
    Node *root = input_tree();
    cout << tree_height(root);
    return 0;
}