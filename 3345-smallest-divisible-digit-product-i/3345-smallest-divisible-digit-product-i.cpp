class Solution {
public:
    int smallestNumber(int n, int t) {
        int number = n;
        while(true){// creating an infinte loop  bcz There is no formula that tells us exactly how many numbers we'll need to test
            int product = 1;
            n = number;
            while(n!=0){
                product*=n%10;
                n = n/10;
            }
            if(product%t == 0) break;
            else{
                number++;
            }
        }
        return number;   
    }
};