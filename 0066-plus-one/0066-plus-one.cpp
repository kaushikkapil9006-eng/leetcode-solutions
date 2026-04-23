class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n = digits.size() - 1;
        for(int i = n;i>=0;i--){
            if(digits[i]<9){  // agr lst digit 9 se km h toh last digit ko inc. krdenge
                digits[i]++;
                return digits;// yha p digits return krdi
            }
            digits[i] = 0;// agr last digit 9 h toh last digit ko 0 krdenge 
        }
        digits.insert(digits.begin(),1);// agr saari digits 9 h toh sbse aage as a carry add krdenge 
        return digits;
    }
};