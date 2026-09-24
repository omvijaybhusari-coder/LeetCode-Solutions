class Solution {
public:
    void solve(vector<int>& nums, vector<vector<int>>& ans,
               vector<int>& temp, vector<bool>& used) {

        // permutation complete
        if (temp.size() == nums.size()) {
            ans.push_back(temp);
            return;
        }

        for (int i = 0; i < nums.size(); i++) {

            // already used
            if (used[i])
                continue;

            // choose
            used[i] = true;
            temp.push_back(nums[i]);

            // explore
            solve(nums, ans, temp, used);

            // backtrack
            temp.pop_back();
            used[i] = false;
        }
    }

    vector<vector<int>> permute(vector<int>& nums) {

        vector<vector<int>> ans;
        vector<int> temp;
        vector<bool> used(nums.size(), false);

        solve(nums, ans, temp, used);

        return ans;
    }
};