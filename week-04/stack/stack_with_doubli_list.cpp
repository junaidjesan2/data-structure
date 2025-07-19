#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node *prv;
    Node *next;
    Node(int val)
    {
        this->val = val;
        this->prv = NULL;
        this->next = NULL;
    }
};
class myStack
{
    Node *head = NULL;
    Node *tail = NULL;

public:
    void push(int data)
    {
        Node *newNode = new Node(data);
        if (head == NULL)
        {
            head = newNode;
            tail = newNode;
        }
        else
        {
            tail->next = newNode;
            newNode->prv = tail;
            tail = newNode;
        }
    }
    void pop()
    {
        Node *tmp = tail;
        if (tail == NULL)
            return;

        tail = tail->prv;
        tail->next = NULL;
        delete tmp;
    }
    int top()
    {
        if (tail == NULL)
            return -1;
        return tail->val;
    }
    bool empty()
    {
        if (head == NULL)
            return true;
        return false;
    }
};
int main()
{
    myStack s;
    // s.push(10);
    // s.push(20);
    // cout << s.top();
    // s.pop();
    // cout << s.top();
    cout << s.empty();
    return 0;
}