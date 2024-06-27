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
// void insert_at_tail1(Node *&head1, Node *&tail1, int v1)
// {
//     Node *newNode = new Node(v1);
//     if (head1 == NULL)
//     {
//         head1 = newNode;
//         tail1 = newNode;
//         return;
//     }
//     tail1->next = newNode;
//     tail1 = newNode;
// }
// void linkedList(Node *head)
// {
//     Node *temHead = head;
//     if (temHead == NULL)
//     {
//         return;
//     }
//     cout << temHead->val << " ";
//     linkedList(temHead->next);
// }
void min_max(Node *head)
{
    int min = INT_MAX;
    int max = INT_MIN;
    Node *tmp = head;
    while (tmp != NULL)
    {
        if (tmp->val < min)
        {
            min = tmp->val;
        }

        if (tmp->val > max)
        {
            max = tmp->val;
        }
        tmp = tmp->next;
    }
    cout << "Minimum Value: " << min << endl
         << "Maximum Value: " << max << endl
         << endl;
}
int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    // Node *head1 = NULL;
    // Node *tail1 = NULL;
    int v, v1;
    while (true)
    {
        cin >> v;
        if (v == 0)
        {
            break;
        }
        insert_at_tail(head, tail, v);
    }
    cout << endl
         << endl;
    // while (true)
    // {
    //     cin >> v1;
    //     if (v1 == 0)
    //     {
    //         break;
    //     }
    //     insert_at_tail1(head1, tail1, v1);
    // }
    cout << "First linked List: ";
    // linkedList(head);
    cout << endl
         << endl;
    // cout << "Second Linked List: ";
    // linkedList(head1);
    // cout << endl
    //      << endl;
    min_max(head);
    // min_max(head1);
    return 0;
}