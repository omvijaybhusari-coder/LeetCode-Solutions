class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& arr) {
        int sum=0;
        int n=arr.size();
        for(int st=0;st<n;st++){
            for(int end=st;end<n;end++){
                   int len = end - st + 1;
                    if(len % 2 != 0) {
                    for(int i = st; i <= end; i++) {
                        sum += arr[i];
                    }
                    }
                
            }
        }
        return sum;
    }
};