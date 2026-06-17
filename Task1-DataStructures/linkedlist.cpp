#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int val) {
        data = val;
        next = nullptr;
    }
};

class LinkedList {
    Node* head;

public:
    LinkedList() {
        head = nullptr;
    }

    void insert(int val) {
        Node* newNode = new Node(val);

        if (!head) {
            head = newNode;
            return;
        }

        Node* temp = head;
        while (temp->next)
            temp = temp->next;

        temp->next = newNode;
    }

    void deleteNode(int val) {
        if (!head) return;

        if (head->data == val) {
            Node* temp = head;
            head = head->next;
            delete temp;
            return;
        }

        Node* curr = head;

        while (curr->next && curr->next->data != val)
            curr = curr->next;

        if (curr->next) {
            Node* temp = curr->next;
            curr->next = curr->next->next;
            delete temp;
        }
    }

    bool search(int val) {
        Node* temp = head;

        while (temp) {
            if (temp->data == val)
                return true;
            temp = temp->next;
        }

        return false;
    }

    void display() {
        Node* temp = head;

        while (temp) {
            cout << temp->data << " -> ";
            temp = temp->next;
        }

        cout << "NULL\n";
    }
};

int main() {
    LinkedList list;

    list.insert(10);
    list.insert(20);
    list.insert(30);

    list.display();

    cout << "Search 20: "
         << (list.search(20) ? "Found" : "Not Found")
         << endl;

    list.deleteNode(20);

    list.display();

    return 0;
}