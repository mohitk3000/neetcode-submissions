class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        for (int i = 0; i < stones.size(); i++) {
            pq.push(stones[i]);
        }

        while (pq.size() > 1) {
            int x = pq.top();
            pq.pop();
            int y = pq.top();
            pq.pop();
            
            if (x == y) continue;

            else {
                pq.push(abs(x - y));
            }
        }

        if (pq.empty()) return 0;
        return pq.top();
    }

private: 
    priority_queue<int> pq;
};
