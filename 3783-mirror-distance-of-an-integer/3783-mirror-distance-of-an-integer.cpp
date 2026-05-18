class Solution {
public:
    int mirrorDistance(int n) {
        long long rev = 0;
        int m = n;
        while(n>0){
            int a = n%10;
            rev = 10*rev + a;
            n = n/10;


        }
       return abs(m - rev);
        

        
    }
};