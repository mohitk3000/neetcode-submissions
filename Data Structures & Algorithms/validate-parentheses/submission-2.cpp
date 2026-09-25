class Solution {
public:
    bool isValid(string s) {
        for (char& c : s) {
            if (c == '(' || c == '{' || c == '[') {
                st.push(c);
            } else if (c == ')' || c == '}' || c == ']'){
                if (c == ')') {
                    if (st.empty() || st.top() != '(') {
                        return false;
                    } else {
                        st.pop();
                    }
                } else if (c == '}') {
                    if (st.empty() || st.top() != '{') {
                        return false;
                    } else {
                        st.pop();
                    }
                } else {
                  if (st.empty() || st.top() != '[') {
                        return false;
                    } else {
                        st.pop();
                    }  
                }
            }
        }
        return st.empty();
    }

    stack<char> st;
};
