class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        vector<int> ans;
        int max = *max_element(nums.begin(),nums.end());
        int min = *min_element(nums.begin(),nums.end());
        for(int i = min;i<=max;i++){
            bool found = false;
            for(int num : nums){

                if(num== i){
                    found = true;
                    break;
                }
                
            }
            if(!found){
                ans.push_back(i);
            }
        }
       
        return ans;
    }
};