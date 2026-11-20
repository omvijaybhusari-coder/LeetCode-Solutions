class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
    int maxCount=0,count=0;

    for(int val:nums){
        if(val==1){
            count++;
        }else{
            count=0;
        }
        maxCount=max(maxCount,count);
    }
      return maxCount;
    }
    
};