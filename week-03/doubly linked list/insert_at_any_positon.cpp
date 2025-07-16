#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node *previous; // Changed from 'left' for standard doubly linked list terminology
    Node *next;     // Changed from 'right' for standard doubly linked list terminology
    Node(int val)
    {
        this->val = val;
        this->previous = NULL;
        this->next = NULL;
    }
};

// Function to insert a node at a specific position in the list
void insert_at_any_position(Node *&head, Node *&tail, int val, int pos)
{
    Node *newNode = new Node(val);
    if (head == NULL) // If the list is empty, the new node is both head and tail
    {
        head = newNode;
        tail = newNode;
        return;
    }
    if (pos == 0) // Insert at the beginning of the list
    {
        newNode->next = head;
        head->previous = newNode;
        head = newNode;
        return;
    }

    Node *temp = head;
    // Traverse to the node at position `pos - 1`
    for (int i = 0; i < pos - 1 && temp->next != NULL; i++)
    {
        temp = temp->next;
    }

    newNode->next = temp->next;         // New node's next points to the node that was after temp
    newNode->previous = temp;           // New node's previous points back to temp
    if (temp->next != NULL) {
        temp->next->previous = newNode; // The node after temp now points back to the new node
    } else {
        tail = newNode; // FIX: If inserting at the end, update the tail pointer
    }
    temp->next = newNode;               // Temp's next now points to the new node
}

// Function to print the list from head to tail
void print_list(Node *head)
{
    Node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next; // Changed from 'right' to 'next'
    }
    cout << endl;
}

int main()
{
    // ADDED: Redirect input from input.txt and output to output.txt
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    Node *head = NULL;
    Node *tail = NULL;
    int val, pos;

    // CHANGED: The loop now correctly reads pairs of integers from the file
    // and stops at the end of the file or on invalid input.
    while (cin >> pos >> val)
    {
        insert_at_any_position(head, tail, val, pos);
    }

    print_list(head);

    return 0;
}