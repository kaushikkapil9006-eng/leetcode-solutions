class Solution {
public:
int reversenumber(int n){
    int reverse = 0;
    while(n>0){
        int c =n%10;
        reverse = reverse*10 +c;
        n = n/10;      
    }
    return reverse;
}
    bool isSameAfterReversals(int num) {
        if(num < 9){
            return true;
        }
        int n1 = reversenumber(num);
        int n2 = reversenumber(n1);
        if(n2 == num){
            return true;
        }
        return false;

        
    }
};