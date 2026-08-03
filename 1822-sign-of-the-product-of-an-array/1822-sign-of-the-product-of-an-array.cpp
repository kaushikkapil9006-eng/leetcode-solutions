class Solution {
public:
    int arraySign(vector<int>& nums) {
        int n = nums.size();
       int sign = 1;
       for(int num : nums){
        if(num == 0) return 0;
        if(num<0){
            sign = -sign;
        }

       }
       return sign;
        
    }
};