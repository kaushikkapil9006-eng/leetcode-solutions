class Solution {
public:
    int totalMoney(int n) {
        if(n<=7){
            return n*(n+1)/2;
        }
        int weeks = n/7;
        int days = n%7;
        int total = 0;
        
        for(int i = 0;i<weeks;i++){
            total+= i*7+28;
        }

        for(int i = 0;i<days;i++){
            total+=weeks+1+i;
        }
        return total;

        
    }
};