class MinStack {
    stack<long long> s;
    long long mini;

public:

    MinStack() {
    }

    void push(int value) {

        // First element
        if(s.empty()) {
            s.push(value);
            mini = value;
        }
        else {
            if(value < mini) {
                // Store encoded value
                s.push(2LL * value - mini);
                mini = value;
            }
            else {
                s.push(value);
            }
        }
    }

    void pop() {

        if(s.empty()) {
            return;
        }

        long long curr = s.top();
        s.pop();

        // Encoded value
        if(curr < mini) {
            mini = 2LL * mini - curr;
        }
    }

    int top() {

        if(s.empty()) {
            return -1;
        }

        long long curr = s.top();

        // If encoded, actual value is mini
        if(curr < mini) {
            return mini;
        }

        return curr;
    }

    int getMin() {

        if(s.empty()) {
            return -1;
        }

        return mini;
    }
};