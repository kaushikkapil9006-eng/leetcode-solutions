class Solution {
public:
    string reverseWords(string s) {
        stack<string> st;
        string word;
        string ans = "";

        for (int i = 0; i < s.size(); i++) {

            if (s[i] != ' ') {
                word += s[i];
            }
            else if (!word.empty()) {
                st.push(word);
                word = "";
            }
        }
        if (!word.empty()) {
            st.push(word);
        }
        while (!st.empty()) {
            if (!ans.empty()) {
                ans += ' ';
            }
            ans += st.top();
            st.pop();
        }
        return ans;
    }
};