class Solution {
public:
    int maxProfit(vector<int>& prices) {
       int minPrice = INT_MAX;
       int maxProfit = 0;
       for(int nums : prices){
        minPrice = min(minPrice,nums);
        maxProfit = max(maxProfit,nums - minPrice);


       }
            
        return maxProfit;
        
    }
};