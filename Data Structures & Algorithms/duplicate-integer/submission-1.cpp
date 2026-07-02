class Solution {
   
public:
    bool hasDuplicate(vector<int>& nums) {
        std::unordered_set<int> num_map{};
        for (int num : nums) {
            if (num_map.find(num) != num_map.end()) {
                return true;
            } else {
                num_map.insert(num);
            }
        }
        return false;
    }
};