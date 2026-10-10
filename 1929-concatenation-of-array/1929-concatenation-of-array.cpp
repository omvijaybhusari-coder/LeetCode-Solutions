class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
            int n=nums.size();
             vector<int> dupli(n*2);

             for(int i=0;i<n;i++){
                dupli[i]=nums[i];
               dupli[i+n]=nums[i];
             }
             return dupli;
    }
};