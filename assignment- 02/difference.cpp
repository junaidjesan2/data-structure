#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    long long val;
    Node *right;
    Node(long long val)
    {
        this->val = val;
        this->right = NULL;
    }
};

void insert_at_tail(Node *&head, Node *&tail, long long val)
{
    Node *new_node = new Node(val);
    if (head == NULL)
    {
        head = new_node;
        tail = new_node;
        return;
    }
    tail->right = new_node;
    tail = new_node;
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    long long val;
    while (true)
    {
        cin >> val;
        if (val == -1)
            break;
        insert_at_tail(head, tail, val);
    }

    long long mx = LLONG_MIN;
    long long mn = LLONG_MAX;

    for (Node *temp = head; temp != NULL; temp = temp->right)
    {
        mx = max(mx, temp->val);
        mn = min(mn, temp->val);
    }

    cout << mx - mn << endl;

    return 0;
}
