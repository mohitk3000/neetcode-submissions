class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> st;
        for (auto& t : tokens) {
            if (t == "+" || t == "-" || t == "*" || t == "/" ) {
                if (t == "+") {
                    int a = st.top();
                    st.pop();
                    int b = st.top();
                    st.pop();
                    int res = a + b;
                    st.push(res);
                } else if (t == "*") {
                    int a = st.top();
                    st.pop();
                    int b = st.top();
                    st.pop();
                    int res = a * b;
                    st.push(res);  
                } else if (t == "-") {
                    int a = st.top();
                    st.pop();
                    int b = st.top();
                    st.pop();
                    int res = b - a;
                    st.push(res);
                } else {
                    int a = st.top();
                    st.pop();
                    int b = st.top();
                    st.pop();
                    int res = b / a;
                    st.push(res);
                }
            } else {
                st.push(stoi(t));
            }
        }
        return st.top();
    }
};
