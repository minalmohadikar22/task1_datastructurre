#include <iostream>
using namespace std;

class Queue {
private:
    int arr[100];
    int front, rear;

public:
    Queue() {
        front = 0;
        rear = -1;
    }

    bool isEmpty() {
        return rear < front;
    }

    void enqueue(int value) {
        if (rear == 99) {
            cout << "Queue Overflow\n";
            return;
        }

        arr[++rear] = value;
        cout << value << " inserted into queue\n";
    }

    void dequeue() {
        if (isEmpty()) {
            cout << "Queue Underflow\n";
            return;
        }

        cout << arr[front++] << " removed from queue\n";
    }

    void peek() {
        if (isEmpty()) {
            cout << "Queue is Empty\n";
            return;
        }

        cout << "Front element: " << arr[front] << endl;
    }

    void display() {
        if (isEmpty()) {
            cout << "Queue is Empty\n";
            return;
        }

        cout << "Queue elements: ";

        for (int i = front; i <= rear; i++) {
            cout << arr[i] << " ";
        }

        cout << endl;
    }
};

int main() {
    Queue q;
    int choice, value;

    do {
        cout << "\n===== QUEUE MENU =====\n";
        cout << "1. Enqueue\n";
        cout << "2. Dequeue\n";
        cout << "3. Peek\n";
        cout << "4. Display\n";
        cout << "5. Exit\n";

        cout << "Enter choice: ";
        cin >> choice;

        switch (choice) {
        case 1:
            cout << "Enter value: ";
            cin >> value;
            q.enqueue(value);
            break;

        case 2:
            q.dequeue();
            break;

        case 3:
            q.peek();
            break;

        case 4:
            q.display();
            break;

        case 5:
            cout << "Program Ended\n";
            break;

        default:
            cout << "Invalid Choice\n";
        }

    } while (choice != 5);

    return 0;
}