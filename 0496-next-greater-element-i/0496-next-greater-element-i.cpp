class Solution {
public:

    // Function 1: Find next greater element for every element
    vector<int> nextGreater(vector<int>& arr) {
        
        int n = arr.size();
        vector<int> ans(n);

        stack<int> s;

        for (int i = n - 1; i >= 0; i--) {

            // Remove elements smaller than or equal to current
            while (!s.empty() && s.top() <= arr[i]) {
                s.pop();
            }

            // If stack is empty, no greater element
            if (s.empty()) {
                ans[i] = -1;
            }
            else {
                ans[i] = s.top();
            }

            // Current element can be useful for elements on left
            s.push(arr[i]);
        }

        return ans;
    }


    // Function 2: Solve the actual problem
    vector<int> nextGreaterElement(vector<int>& nums1, 
                                   vector<int>& nums2) {

        // Get NGE of every element in nums2
        vector<int> nge = nextGreater(nums2);

        vector<int> ans;

        // Find each nums1 element inside nums2
        for (int i = 0; i < nums1.size(); i++) {

            for (int j = 0; j < nums2.size(); j++) {

                if (nums1[i] == nums2[j]) {
                    ans.push_back(nge[j]);
                    break;
                }
            }
        }

        return ans;
    }
};