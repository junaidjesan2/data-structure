#include <iostream>
using namespace std;

class Node {
public:
    int val;
    Node* next;
    Node* prev;

    Node(int val) {
        this->val = val;
        this->next = nullptr;
        this->prev = nullptr;
    }
};

class DoublyLinkedList {
public:
    Node* head;
    Node* tail;
    int size;

    DoublyLinkedList() {
        head = nullptr;
        tail = nullptr;
        size = 0;
    }

    void insert_at_index(int index, int value) {
        if (index < 0 || index > size) {
            cout << "Invalid" << endl;
            return;
        }

        Node* newNode = new Node(value);

        if (index == 0) {
            if (head == nullptr) {
                head = newNode;
                tail = newNode;
            } else {
                newNode->next = head;
                head->prev = newNode;
                head = newNode;
            }
        } else if (index == size) {
            tail->next = newNode;
            newNode->prev = tail;
            tail = newNode;
        } else {
            Node* temp = head;
            for (int i = 0; i < index - 1; ++i) {
                temp = temp->next;
            }
            newNode->next = temp->next;
            newNode->prev = temp;
            temp->next->prev = newNode;
            temp->next = newNode;
        }
        ++size;
        print_left_to_right();
        print_right_to_left();
    }

    void print_left_to_right() {
        Node* temp = head;
        while (temp != nullptr) {
            cout << temp->val << " ";
            temp = temp->next;
        }
        cout << endl;
    }

    void print_right_to_left() {
        Node* temp = tail;
        while (temp != nullptr) {
            cout << temp->val << " ";
            temp = temp->prev;
        }
        cout << endl;
    }
};

int main() {
    DoublyLinkedList dll;
    int Q;
    cin >> Q;
    while (Q--) {
        int X, V;
        cin >> X >> V;
        dll.insert_at_index(X, V);
    }
    return 0;
}
