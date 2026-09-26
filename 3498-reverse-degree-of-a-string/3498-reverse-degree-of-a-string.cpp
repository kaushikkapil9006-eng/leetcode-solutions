class Solution {
public:
    int reverseDegree(string s) {
        int sum = 0;
        for(int i = 0;i<s.size() ;i++){
            char ch = s[i];
            int value = 'z' - ch +1;
            sum = sum + value*(i+1);
        }
        return sum;
        
    }
};