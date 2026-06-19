class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int highest = 0;
        int altitude = 0;
        for(int i : gain){
            altitude += i;
            highest = max(highest,altitude);
        }
        return highest;

        
    }
};