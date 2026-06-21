class Solution {
public:
    int maxIceCream(vector<int>& costs, int coins) {
       sort(costs.begin(), costs.end());
       int cnt = 0;
       for(int nums : costs){
        if(coins<nums) break;

        coins -=nums;
        cnt++;
       }
       return cnt;

   
    }
};