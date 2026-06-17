class Solution {
public:
    bool asteroidsDestroyed(int mass, vector<int>& asteroids) {
        int n = asteroids.size();
        sort(asteroids.begin(),asteroids.end());
        long long newMass = mass;
        for(int num : asteroids){
            if(newMass<num){
                return false;
            }
            newMass += num; 
        }
        return true;
        
    }
};