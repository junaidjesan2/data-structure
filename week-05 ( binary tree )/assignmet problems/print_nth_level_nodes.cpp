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
        this->left = nullptr;
        this->right = nullptr;
    }
};

Node *input_binary_tree()
{
    int r;
    cin >> r;
    if (r == -1)
        return nullptr;

    Node *root = new Node(r);
    queue<Node *> q;
    q.push(root);

    while (!q.empty())
    {
        Node *tmp = q.front();
        q.pop();

        int l, r_val;
        cin >> l >> r_val;

        Node *leftChild = nullptr;
        Node *rightChild = nullptr;

        if (l != -1)
        {
            leftChild = new Node(l);
            q.push(leftChild);
        }
        if (r_val != -1)
        {
            rightChild = new Node(r_val);
            q.push(rightChild);
        }

        tmp->left = leftChild;
        tmp->right = rightChild;
    }

    return root;
}
void printLevel(Node *root, int level)
{
    if (root == nullptr)
    {
        cout << "Invalid" << endl;
        return;
    }

    queue<Node *> q;
    q.push(root);
    int currentLevel = 0;

    while (!q.empty())
    {
        int nodesInThisLevel = q.size();

        if (currentLevel == level)
        {
            vector<int> values;
            for (int i = 0; i < nodesInThisLevel; i++)
            {
                Node *node = q.front();
                q.pop();
                values.push_back(node->val);
            }
            for (int i = 0; i < values.size(); i++)
            {
                cout << values[i];
                if (i < values.size() - 1)
                    cout << " ";
            }
            cout << endl;
            return;
        }

        for (int i = 0; i < nodesInThisLevel; i++)
        {
            Node *node = q.front();
            q.pop();
            if (node->left)
                q.push(node->left);
            if (node->right)
                q.push(node->right);
        }

        currentLevel++;
    }

    cout << "Invalid" << endl;
}

int main()
{
    Node *root = input_binary_tree();
    int level;
    cin >> level;

    printLevel(root, level);

    return 0;
}