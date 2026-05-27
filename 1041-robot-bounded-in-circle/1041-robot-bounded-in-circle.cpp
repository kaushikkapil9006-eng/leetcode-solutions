class Solution {
public:
    bool isRobotBounded(string instructions) {
        int x = 0, y = 0;
        int dir = 0; // 0=N, 1=E, 2=S, 3=W

        for(char ch : instructions) {
            if(ch == 'G') {
                if(dir == 0) y++;
                else if(dir == 1) x++;
                else if(dir == 2) y--;
                else x--;
            }
            else if(ch == 'L') {
                dir = (dir + 3) % 4; // dir + 3 bhi kr skte h 
            }
            else if(ch == 'R') {
                dir = (dir + 1) % 4;
            }
        }

        return (x == 0 && y == 0) || dir != 0;
    }
};