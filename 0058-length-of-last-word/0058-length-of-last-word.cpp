class Solution {
public:
    int lengthOfLastWord(string s) {
        int a = s.length() -1;
       while(a>=0 && s[a] == ' '){
        a--;
       }

       int cnt =0;

       while(a>=0 && s[a]!= ' '){
        cnt++;
        a--;
       }
         return cnt;
    }
};