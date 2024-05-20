#include <iostream>
#include <list>

using namespace std;

class CircularQueue {
    list<int> queue;
    int front = 0;
    int rear = 0;

public:
    // Fungsi untuk memasukkan elemen ke dalam Circular Queue
    void enqueue(int value) {
        if ((rear + 1) % queue.size() == front) {
            cout << "Queue is full" << endl;
        } else {
            queue.push_back(value);
            rear = (rear + 1) % queue.size();
        }
    }

    // Fungsi untuk menghapus elemen dari Circular Queue
    int dequeue() {
        if (front == rear) {
            cout << "Queue is empty" << endl;
            return -1;
        } else {
            int value = queue.front();
            queue.pop_front();
            front = (front + 1) % queue.size();
            return value;
        }
    }
};

int main() {
    CircularQueue queue;

    // Memasukkan elemen ke dalam Circular Queue
    queue.enqueue(1);
    queue.enqueue(2);
    queue.enqueue(3);

    // Menghapus elemen dari Circular Queue
    cout << "Dequeued: " << queue.dequeue() << endl;
    cout << "Dequeued: " << queue.dequeue() << endl;

    return 0;
}
