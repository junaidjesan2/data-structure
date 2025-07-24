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
class Stack
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
        if (tail == NULL)
            return;

        Node *tmp = tail;
        tail = tail->prv;

        if (tail != NULL)
            tail->next = NULL;
        else
            head = NULL;

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
class Queue
{
    Node *head = NULL;
    Node *tail = NULL;

public:
    void push(int data)
    {
        Node *newNode = new Node(data);
        if (tail == NULL)
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
        if (head == NULL)
            return;

        Node *tmp = head;
        head = head->next;

        if (head != NULL)
            head->prv = NULL;
        else
            tail = NULL;

        delete tmp;
    }

    int front()
    {
        if (head == NULL)
            return -1;
        return head->val;
    }

    bool empty()
    {
        return head == NULL;
    }
};

int main()
{
    int n, m;
    cin >> n;
    cin >> m;
    Stack myStack;
    Queue myQueue;

    if (n == m)
    {
        for (int i = 0; i < n; i++)
        {
            int v;
            cin >> v;
            myStack.push(v);
        }
        for (int i = 0; i < m; i++)
        {
            int v;
            cin >> v;
            myQueue.push(v);
        }

        while (!myQueue.empty() && !myStack.empty())
        {
            int val1 = myQueue.front();
            int val2 = myStack.top();
            if (val1 != val2)
            {
                cout << "NO";
                return 0;
            }
            myQueue.pop();
            myStack.pop();
        }
        cout << "YES";
        return 0;
    }
    else
    {
        cout << "NO";
        return 0;
    }

    return 0;
}