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
void insert_at_tail1(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        count(head);
        return;
    }
    tail->next = newNode;
    tail = newNode;
}
void insert_at_tail2(Node *&head, Node *&tail, int val)
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
void linkedList(Node *head)
{
    cout << endl
         << "Linked List: ";
    Node *temHead = head;
    while (temHead != NULL)
    {
        cout << temHead->val << " ";
        temHead = temHead->next;
    }
    cout << endl
         << endl;
}
int count(Node *head)
{
    int cnt = 0;
    Node *tmp = head;
    while (tmp == NULL)
    {
        cnt++;
        tmp = tmp->next;
    }
    return cnt;
}
int main()
{
    Node *head1 = NULL;
    Node *tail1 = NULL;
    Node *head2 = NULL;
    Node *tail2 = NULL;
    int v1, v2;
    while (true)
    {
        cout << "Input First Array";
        cin >> v1;
        if (v1 == 0)
        {
            break;
        }

        insert_at_tail1(head1, tail1, v1);
    }
    while (true)
    {
        cout << "Input Second Array";
        cin >> v2;
        if (v2 == 0)
        {
            break;
        }

        insert_at_tail2(head2, tail2, v2);
    }
    linkedList(head1);
    linkedList(head2);
    int value = count(head1);
    cout << "value of head 1 : " << value << endl;
    return 0;
}