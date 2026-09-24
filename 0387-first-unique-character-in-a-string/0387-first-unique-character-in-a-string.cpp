class Solution {
public:
    int firstUniqChar(string s) {

        unordered_map<char, int> count;
        queue<int> q;

        for(int i = 0; i < s.size(); i++) {

            count[s[i]]++;
            q.push(i);

            while(!q.empty()) {

                if(count[s[q.front()]] > 1) {
                    q.pop();
                }
                else {
                    break;
                }
            }
        }

        if(q.empty()) {
            return -1;
        }

        return q.front();
    }
};