class Solution {
public:
    int furthestDistanceFromOrigin(string moves) {
        int x = 0;
        int y = 0;
        int blank = 0;
        for(char ch : moves){
            if(ch == 'L'){
                x++;
            }
            else if(ch == 'R'){
                y++;
            }
            else{
                blank++;
            }
        }
        return abs(x-y) + blank;
        
    }
};