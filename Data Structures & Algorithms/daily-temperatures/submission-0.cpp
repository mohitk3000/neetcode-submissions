class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        int size = temperatures.size();
        vector<int> res(size, 0);
        for (int i = 0; i < size; ++i) {
            while (!st.empty() && temperatures[i] > temperatures[st.top()]) {
                int curr = st.top();
                st.pop();
                res[curr] = i - curr;
            }
            st.push(i);
        }
        return res;
    }

    stack<int> st;
};
