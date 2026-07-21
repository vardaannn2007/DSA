class MyQueue {
public:
    stack<int> s, rev;

    MyQueue() {

    }

    void push(int x) {
        s.push(x);
    }

    int pop() {
        if (rev.empty()) {
            while (!s.empty()) {
                rev.push(s.top());
                s.pop();
            }
        }

        int x = rev.top();
        rev.pop();
        return x;
    }

    int peek() {
        if (rev.empty()) {
            while (!s.empty()) {
                rev.push(s.top());
                s.pop();
            }
        }

        return rev.top();
    }

    bool empty() {
        return s.empty() && rev.empty();
    }
};
/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */