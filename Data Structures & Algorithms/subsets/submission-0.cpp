class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
       vector<vector<int>> res;

       res = backtrack(nums, res, 0, {});

       return res;

    }

    vector<vector<int>> backtrack(vector<int>& nums, vector<vector<int>> res, int idx, vector<int> path)   {
            // base case
            if (idx == nums.size()) {
                res.push_back(path);
                return res;
            }

            // descision 1:
            path.push_back(nums[idx]);
            res = backtrack(nums, res, idx + 1, path);
            path.pop_back();

            // descision 2:
            res = backtrack(nums, res, idx + 1, path); 

            return res;
       }
};
