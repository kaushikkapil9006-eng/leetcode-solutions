class Solution {
public:
    vector<int> separateDigits(vector<int>& nums) {
        vector<int> digits;
       
       for(int num : nums){
        string s = to_string(num);

        for(char ch : s){
            digits.push_back(ch - '0');

        }
       }
       return digits;
    }
};