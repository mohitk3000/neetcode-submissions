class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        // forward pass
        vector<int> pref(nums.size(), 1);
        int num = 1;
        int prd = 1;
        for (int i = 0; i < nums.size(); i++) {
            pref[i] = prd * num;
            num = nums[i];
            prd = pref[i]; 
        }

        // backward pass
        vector<int> suff(nums.size(), 1);
        num = 1;
        prd = 1;
        for (int i = nums.size() - 1; i >= 0 ; i--) {
            suff[i] = prd * num;
            num = nums[i]; 
            prd = suff[i];
        }

        vector<int> res;
        for (int i = 0; i < nums.size(); i++) {
            res.push_back(pref[i] * suff[i]);
        }
        return res;
    }
};
