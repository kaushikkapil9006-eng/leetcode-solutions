class Solution {
public:
    int nthUglyNumber(int n) {
        vector<int> ugly(n);
        ugly[0] =1;
        int i2 =0;
        int i3 =0;
        int i4 =0;

        for(int i = 1;i<n;i++){
            int next2 = ugly[i2]*2;
            int next3 = ugly[i3]*3;
            int next4 = ugly[i4]*5;

            int nextugly = min({next2,next3,next4});
            ugly[i] = nextugly;

            if(nextugly == next2) i2++;
            if(nextugly == next3) i3++;
            if(nextugly == next4) i4++;

            
        }
        return ugly[n-1];
        
    }
};