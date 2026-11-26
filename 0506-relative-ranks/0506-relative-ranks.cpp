class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        vector<int> temp = score;
        sort(temp.rbegin(), temp.rend());

        unordered_map<int, int> mp;

        for(int i = 0; i < temp.size(); i++) {
            mp[temp[i]] = i + 1;
        }

        vector<string> ans;

        for(auto val : score) {
            int rank = mp[val];

            if(rank == 1)
                ans.push_back("Gold Medal");
            else if(rank == 2)
                ans.push_back("Silver Medal");
            else if(rank == 3)
                ans.push_back("Bronze Medal");
            else
                ans.push_back(to_string(rank));
        }

        return ans;
    }
};