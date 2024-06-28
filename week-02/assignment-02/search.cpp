#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node *next;

    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};
void insert_at_tail(Node *&head, Node *&tail, int v)
{
    Node *newNode = new Node(v);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    tail = newNode;
}
void search_element(Node *head, int n)
{
    Node *tmp = head;
    int index = 0;
    while (tmp != NULL)
    {
        if (tmp->val == n)
        {
            cout << index << endl;
            return;
        }
        tmp = tmp->next;
        index++;
    }
    cout << -1 << endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        Node *head = NULL;
        Node *tail = NULL;
        int v;
        while (true)
        {
            cin >> v;
            if (v == -1)
            {
                break;
            }
            insert_at_tail(head, tail, v);
        }
        int n;
        cin >> n;
        search_element(head, n);
    }
    return 0;
}