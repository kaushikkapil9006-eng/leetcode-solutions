class Solution {
public:
    bool isPowerOfThree(int n) {
        int x;
       
        for( x = 0;x<31;x++){
         long long ans = pow(3,x);
        if(ans == n){
            return true;
          }
        }
        return false;



    }
};