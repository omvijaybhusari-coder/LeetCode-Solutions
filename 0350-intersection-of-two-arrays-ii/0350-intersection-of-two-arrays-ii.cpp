class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans;
        unordered_map<int,int> mp;

        for(auto val:nums1){
            mp[val]++;
        }

        for(auto val:nums2){
            if(mp[val]>0){
                ans.push_back(val);
                mp[val]--;
            }
        }
        return ans;
    }
};