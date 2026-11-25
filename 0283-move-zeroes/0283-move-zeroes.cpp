class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        vector<int> ans;
   for(auto val:nums){
    if(val!=0){
        ans.push_back(val);
    }

   }

   while(ans.size()<nums.size()){
    ans.push_back(0);
   }
   nums=ans;
    }
};