#include <iostream>
#define MAX 5 

using namespace std;

class Stack {
private:
    int top;
    int arr[MAX];

public:

    Stack() {
        top = -1;
    }

    bool isFull() {
        return top == MAX - 1;
    }

    void push(int data) {
        if (isFull()) {
            cout << "Stack Penuh!" << endl;
            return;
        }
        arr[++top] = data;
    }

    void display() {
        cout << "Output :" << endl;
        for (int i = top; i >= 0; i--) {
            cout << "|   " << arr[i] << "   |" << endl;
            cout << "---------" << endl;
        }
    }
};

int main() {
    Stack s;

    s.push(621);
    s.push(999);
    s.push(201);
    s.push(94);
    s.push(124);

    s.display();

    return 0;
}
