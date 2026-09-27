class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int> freq(101, 0);

        // Count frequency
        for (int x : nums) {
            freq[x]++;
        }

        vector<int> ans;

        // Repeat until all occurrences are removed
        while (ans.size() < nums.size()) {
            for (int i = 1; i <= 100; i++) {
                if (freq[i] > 0) {
                    ans.push_back(i);
                    freq[i]--;
                }
            }
        }

        return ans;
    }
};