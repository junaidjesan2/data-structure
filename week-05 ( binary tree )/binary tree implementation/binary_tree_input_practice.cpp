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
            myright = new Node(l);
        }

        tmp->left = myleft;
        tmp->right = myright;

        if (tmp->left != NULL)
            q.push(tmp->left);
        if (tmp->right != NULL)
            q.push(tmp->right);
    }
}
int main()
{
    input_binary_tree();
    return 0;
}