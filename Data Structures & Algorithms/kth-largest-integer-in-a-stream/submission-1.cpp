class KthLargest {
public:
    KthLargest(int k, vector<int>& nums) {
        size = k;
        for (auto& num : nums) {
            pq.push(num);
        }
    }
    
    int add(int val) {
        pq.push(val);
        while(pq.size() > size) {
            pq.pop();
        }
        return pq.top();
    }

    priority_queue<int, vector<int>, greater<int>> pq; // min heap of size k
    int size{0};
};
