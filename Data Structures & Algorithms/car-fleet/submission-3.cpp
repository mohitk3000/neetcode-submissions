class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        int n = position.size();
        if (n <= 1) return n;
        unordered_map<int, int> mp;
        for (int i = 0; i < n; i++) {
            mp[position[i]] = speed[i];
        }

        std::sort(position.begin(), position.end(), std::greater<int>());

        stack<float> st;

        for (int i = 0; i < n; i++) {
            float t = (float)(target - position[i]) / mp[position[i]];
            if (st.empty()) {
                st.push(t);
            } else if (t > st.top()) {
                st.push(t);
            }
        }
        return st.size();
    }
};
