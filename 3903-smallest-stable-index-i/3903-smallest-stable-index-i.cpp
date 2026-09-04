class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        if(nums.empty()){
            return -1;
        }
        int maxi = INT_MIN;
        int mini = INT_MAX;
        int score;
        
        for(int  i = 0;i<nums.size();i++){
             score = 0;
             maxi = *max_element(nums.begin(),nums.begin()+i+1);
             mini = *min_element(nums.begin()+i,nums.end());
             score = maxi - mini;

             if(score<=k){
             return i;
            }
        }
       
        return -1;
       
        
    }
};