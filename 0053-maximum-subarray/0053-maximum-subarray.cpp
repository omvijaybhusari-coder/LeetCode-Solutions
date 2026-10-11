class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maximum=INT_MIN;
        int cs=0;
        for(int i=0;i<nums.size();i++){
            cs+=nums[i];
            maximum=max(cs,maximum);
            if(cs<0){
                cs=0;
            }
        }
        return maximum;
    }
};