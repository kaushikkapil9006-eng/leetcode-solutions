class Solution {
public:
    int countNumbersWithUniqueDigits(int n) {
        if(n == 0) return 1;
       int ans = 10;
       int unique = 9;
       int avlable = 9;

       for(int i =2;i<=n && avlable>0;i++){
        unique = unique*avlable;
        ans += unique;
        avlable--;

       }
       return ans;

        
    }
};