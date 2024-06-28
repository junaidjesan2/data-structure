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
void insert_at_tail(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    tail = newNode;
}
void duplicates(Node *head)
{
    if (head == NULL || head->next == NULL)
    {
        return;
    }

    Node *cnt = head;
    while (cnt != NULL)
    {
        Node *rn = cnt;
        while (rn->next != NULL)
        {
            if (rn->next->val == cnt->val)
            {
                Node *duplicate = rn->next;
                rn->next = rn->next->next;
                delete duplicate;
            }
            else
            {
                rn = rn->next;
            }
        }
        cnt = cnt->next;
    }
}
void linkedList(Node *head)
{
    Node *temHead = head;
    while (temHead != NULL)
    {
        cout << temHead->val << " ";
        temHead = temHead->next;
    }
    cout << endl;
}
int main()
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
    duplicates(head);
    linkedList(head);
    return 0;
}