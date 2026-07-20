class Solution {
public:
    bool isMiddleElementUnique(vector<int>& nums) {
        int n = nums[nums.size()/2];
        int count = 0;
        for(int num : nums){
            if(num == n) count++;
        }
        return count==1;
       
        
    }
};