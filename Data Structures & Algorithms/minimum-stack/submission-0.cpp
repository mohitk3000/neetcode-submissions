class MinStack {
public:
    MinStack() {
        
    }
    
    void push(int value) {
        if (!st.empty()) {
            st_min.push(min(st_min.top(), value));
        } else {
            st_min.push(value);
        }
        st.push(value);
    }
    
    void pop() {
        st.pop();
        st_min.pop();
    }
    
    int top() {
        return st.top();
    }
    
    int getMin() {
        return st_min.top();
    }
private: 
  stack<int> st;
  stack<int> st_min;
};