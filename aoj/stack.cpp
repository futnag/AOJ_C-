#include <iostream>
#include <string>
#define SIZE 1000
using namespace std;

class My_Stack {
private:

    int top = 0;
    int stack[SIZE];

public:

    bool isEmpty() {
        return top == 0;
    }

    bool isFull() {
        return top > SIZE - 1;
    }

    int push(int x) {
        if (isFull()) {
            cout << "error" << endl;
            return 1;
        } else {
            top++;
            stack[top] = x;
            return 0;

        }
    }

    int pop() {
        if (isEmpty()) {
            cout << "error" << endl;
            return 1;
        } else {
            top--;
            return stack[top + 1];
        }
    }
};


int main() {
    My_Stack st;
    string c;
    int s, t;

    while (cin >> c) {
        if (c == "+") {
            s = st.pop();
            t = st.pop();
            st.push(t + s);
        } else if (c == "-") {
            s = st.pop();
            t = st.pop();
            st.push(t - s);
        } else if (c == "*") {
            s = st.pop();
            t = st.pop();
            st.push(t * s);
        } else {
            // int a = c - '0';
            int a = stoi(c);
            st.push(a);
        }
    }

    cout << st.pop() << endl;
    return 0;
}














