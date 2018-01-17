#include <iostream>
#include <string>
#define S 1000
using namespace std;

class My_Queue {
public:
    int queue[S];
    int head = 0, tail = 0;

    bool isFull() {
        return head == (tail + 1) % S;
    }

    bool isEmpty() {
        return head == tail;
    }

    void enqueue(int x) {
        if (isFull()) {
            cout << "overflow" << endl;
        } else {
            queue[tail] = x;
            if (tail + 1 == S) {
                tail = 0;
            } else {
                tail++;
            }
        }
    }

    int dequeue() {
        if (isEmpty()) {
            cout << "underflow" << endl;
        } else {
            int t = queue[head];
            queue[head] = 0;

            if (head + 1 == S) {
                head = 0;
            } else {
                head++;
            }
            return t;
        }
    }
};


int main() {
    int n, qms, elapsed_time = 0, needed_time;
    string process_id;
    int data;

    cin >> n >> qms;
    My_Queue qu;

    for (int i = 0; i < n; i++) {
        cin >> process_id >> needed_time;
        qu.enqueue(needed_time);
    }

    while (qu.head != qu.tail) {
        data = qu.dequeue();

        if (data <= qms) {
            elapsed_time += data;
            cout << elapsed_time << endl;
        } else {
            elapsed_time += qms;
            data -= qms;
            qu.enqueue(data);
        }
    }

    return 0;
}











