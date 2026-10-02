class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        deque<int> maxi(k);
        vector<int> ans;
        int n = nums.size();

        for(int i = 0;i<n;i++){
            while(!maxi.empty() && maxi.front()<=i-k){
            maxi.pop_front();
            }
            while(!maxi.empty() && nums[maxi.back()]<=nums[i]){
            maxi.pop_back();
            }

            maxi.push_back(i);

            if(i>=k-1){
                ans.push_back(nums[maxi.front()]);
            }
        }
        return ans;


        
    }
};