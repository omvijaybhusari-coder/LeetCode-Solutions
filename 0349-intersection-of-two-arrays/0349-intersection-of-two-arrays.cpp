class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,int> mp;
        vector<int> ans;
          for(auto val:nums1){
            mp[val]++;
          }

          for(auto val:nums2){
            if(mp.find(val)!=mp.end()){
                ans.push_back(val);
                mp.erase(val);
            }
    }
    return ans;
    }
};