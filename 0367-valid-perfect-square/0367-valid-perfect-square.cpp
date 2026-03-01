class Solution {
public:
    bool isPerfectSquare(int num) {
        long long i;
        for(i = 0;i<1000000;i++){
            long long ans = i*i;
            if(ans == num){
                return true;
            }
        }
        return false;
        
    }
};