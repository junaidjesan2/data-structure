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
Node *count_binary_tree()
{
    int rt;
    cin >> rt;

    Node *root = new Node(rt);
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
int main()
{
    Node *root = count_binary_tree();
    levelOrderTraversal(root);
    return 0;
}