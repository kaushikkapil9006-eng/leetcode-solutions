class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
        
        int sum = 0;
        long long digitsum = 0;
        
        for(int  i = 0;i<nums.size();i++){
             sum = sum+ nums[i];
        
        int temp = nums[i];
        while(temp>0){
          
            digitsum+=temp%10;
            temp = temp/10;
         }
        }
        return abs(sum - digitsum);


    }
};