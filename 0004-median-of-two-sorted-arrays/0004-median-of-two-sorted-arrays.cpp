class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int m =nums1.size();
        int n = nums2.size();
        vector<int>result(m+n);
        merge(nums1.begin(),nums1.end(),nums2.begin(),nums2.end(),result.begin());
        
        if( (m+n)%2 ==0){
            return (result[(m+n)/2]+result[(m+n)/2 -1])/2.0;
        }
        return result[(m+n)/2];
        
        
    }
};