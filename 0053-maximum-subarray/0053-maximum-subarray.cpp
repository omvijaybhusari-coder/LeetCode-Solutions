class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int current_sum=0;
        int maxSum=INT_MIN;

        for(auto val : nums){
            current_sum+=val;
           maxSum=max(maxSum,current_sum);
           if(current_sum<0){
            current_sum=0;
           }
        }
        return maxSum;
    }
    
};