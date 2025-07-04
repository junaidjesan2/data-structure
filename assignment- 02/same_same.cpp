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
    Node *head1 = NULL;
    Node *tail1 = NULL;
    Node *head2 = NULL;
    Node *tail2 = NULL;
    int val1, len1 = 0;
    int val2, len2 = 0;
    while (true)
    {
        cin >> val1;
        if (val1 == -1)
            break;
        insert_at_tail(head1, tail1, val1);
        len1++;
    }
    while (true)
    {
        cin >> val2;
        if (val2 == -1)
            break;
        insert_at_tail(head2, tail2, val2);
        len2++;
    }

    if (len1 != len2)
    {
        cout << "NO";
        return 0;
    }
    else
    {
        Node *temp1 = head1;
        Node *temp2 = head2;
        while (temp1 != NULL && temp2 != NULL)
        {
            if (temp1->val != temp2->val)
            {
                cout << "NO";
                return 0;
            }
            temp1 = temp1->right;
            temp2 = temp2->right;
        }
        cout << "YES";
    }
    return 0;
}
