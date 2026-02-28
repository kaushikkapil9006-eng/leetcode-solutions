class Solution {
public:
    bool isPowerOfFour(int n) {
        int i;
        for(i = 0;i<31;i++){
            long long ans = pow(4,i);
            if(ans == n){
                return true;
            }
        }
        return false;
        
    }
};