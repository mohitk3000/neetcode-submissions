class Solution {
public:
    int missingNumber(vector<int>& nums) {
        long long x = 0;
        int n = nums.size();

        for (int i = 0; i <= n; i++) {
            x ^= i;
        }

        for (const auto& num : nums) {
            x ^= num;
        }

        return x; 
    }
};
