class Solution {
public:
    int strStr(string haystack, string needle) {
        return haystack.find(needle);
        // find gives the first occurence of needle in heystack
        // and will return -1 when string is not present in haysteck

        
    }
};