class Solution {
public:
    int maxAscendingSum(vector<int>& nums) {
        int n = nums.size();
        int ans = nums[0];
        int sum = nums[0];
        for(int i = 1;i<n;i++){
            int start = nums[i];
            if(nums[i-1]< nums[i]){
                sum+=nums[i];
            }
            else{
                sum = nums[i];
            }
            ans = max(sum,ans);
        }
        return ans;
    }
};