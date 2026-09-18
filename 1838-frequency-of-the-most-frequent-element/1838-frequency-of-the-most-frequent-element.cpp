class Solution {
public:
    int maxFrequency(vector<int>& nums, int k) {

        sort(nums.begin(), nums.end());

        long long sum = 0;
        int left = 0;
        int ans = 1;

        for(int right = 0; right < nums.size(); right++) {

            sum += nums[right];

            long long target = nums[right];
            long long required = target * (right - left + 1) - sum;

            while(required > k) {
                sum -= nums[left];
                left++;

                required = target * (right - left + 1) - sum;
            }

            ans = max(ans, right - left + 1);
        }

        return ans;
    }
};