#include <iostream>
using namespace std;

#define SIZE 100

class Stack {
    int arr[SIZE];
    int top;

public:
    Stack() {
        top = -1;
    }

    void push(int value) {
        if (top == SIZE - 1) {
            cout << "Stack Overflow\n";
            return;
        }

        arr[++top] = value;
    }

    void pop() {
        if (top == -1) {
            cout << "Stack Underflow\n";
            return;
        }

        cout << "Popped: " << arr[top--] << endl;
    }

    void peek() {
        if (top == -1) {
            cout << "Stack Empty\n";
            return;
        }

        cout << "Top Element: " << arr[top] << endl;
    }

    void display() {
        for (int i = top; i >= 0; i--)
            cout << arr[i] << " ";

        cout << endl;
    }
};

int main() {
    Stack s;

    s.push(10);
    s.push(20);
    s.push(30);

    s.display();

    s.peek();

    s.pop();

    s.display();

    return 0;
}