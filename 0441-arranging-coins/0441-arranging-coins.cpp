class Solution {
public:
    int arrangeCoins(int n) {
        int row = 1;
        while(n>=row){  //// agr hm row  = 0 lenge toh n ki value hrr baar same hii rhegi
            n = n-row;
            row++;
        }
        return row-1;
       
       
        
    }
};