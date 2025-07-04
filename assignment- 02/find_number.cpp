#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node *right;
    Node(int val)
    {
        this->val = val;
        this->right = NULL;
    }
};

void insert_at_tail(Node *&head, Node *&tail, int val)
{
    Node *new_node = new Node(val);
    if (head == NULL)
    {
        head = new_node;
        tail = new_node;
    }
    else
    {
        tail->right = new_node;
        tail = new_node;
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        Node *head = NULL;
        Node *tail = NULL;
        int val;
        while (true)
        {
            cin >> val;
            if (val == -1)
                break;
            insert_at_tail(head, tail, val);
        }
        int n, pos = 0;
        cin >> n;
        bool found = false;
        for (Node *i = head; i != NULL; i = i->right)
        {
            if (i->val == n)
            {
                cout << pos << endl;
                found = true;
                break;
            }
            pos++;
        }
        if (!found)
        {
            cout << -1 << endl;
        }
    }
    return 0;
}
