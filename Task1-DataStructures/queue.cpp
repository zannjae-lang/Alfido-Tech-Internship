#include <iostream>
using namespace std;

#define SIZE 100

class Queue {
    int arr[SIZE];
    int front;
    int rear;

public:
    Queue() {
        front = -1;
        rear = -1;
    }

    void enqueue(int value) {

        if (rear == SIZE - 1) {
            cout << "Queue Full\n";
            return;
        }

        if (front == -1)
            front = 0;

        arr[++rear] = value;
    }

    void dequeue() {

        if (front == -1 || front > rear) {
            cout << "Queue Empty\n";
            return;
        }

        cout << "Removed: " << arr[front++] << endl;
    }

    void display() {

        if (front == -1 || front > rear) {
            cout << "Queue Empty\n";
            return;
        }

        for (int i = front; i <= rear; i++)
            cout << arr[i] << " ";

        cout << endl;
    }
};

int main() {

    Queue q;

    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);

    q.display();

    q.dequeue();

    q.display();

    return 0;
}