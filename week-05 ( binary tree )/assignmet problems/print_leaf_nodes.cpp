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
void collectLeafNodes(Node *root, vector<int> &leaves)
{
    if (root == nullptr)
        return;

    if (root->left == nullptr && root->right == nullptr)
    {
        leaves.push_back(root->val);
        return;
    }

    collectLeafNodes(root->left, leaves);
    collectLeafNodes(root->right, leaves);
}

int main()
{
    Node *root = input_binary_tree();
    vector<int> leaves;
    collectLeafNodes(root, leaves);

    sort(leaves.rbegin(), leaves.rend());

    for (int i = 0; i < leaves.size(); i++)
    {
        cout << leaves[i];
        if (i < leaves.size() - 1)
            cout << " ";
    }

    return 0;
}