class Solution {
public:
    int countDigits(int n) {
        int count=0;
        int temp=n;
        while(temp>0){
            
           int   ld=temp%10;
             
              if(n%ld==0){
                count++;
              }

              temp/=10;
        }
        return count;
    }
};