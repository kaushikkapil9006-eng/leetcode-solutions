class Solution {
public:
    int divide(int dividend, int divisor) {
        if(int INT_MIN ==dividend && divisor ==-1){
            return INT_MAX;
        }
        
        long quotient = (long) dividend/(long) divisor;
       return (int)quotient;

        
    }
};