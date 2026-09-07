class Solution {
public:

    // Previous Smaller Element
    vector<int> PSE(vector<int>& arr) {
        int n = arr.size();
        vector<int> pse(n);
        stack<int> s;

        for (int i = 0; i < n; i++) {

            while (!s.empty() && arr[s.top()] >= arr[i]) {
                s.pop();
            }

            pse[i] = s.empty() ? -1 : s.top();

            s.push(i);
        }

        return pse;
    }

    // Next Smaller Element
    vector<int> NSE(vector<int>& arr) {
        int n = arr.size();
        vector<int> nse(n);
        stack<int> s;

        for (int i = n - 1; i >= 0; i--) {

            while (!s.empty() && arr[s.top()] > arr[i]) {
                s.pop();
            }

            nse[i] = s.empty() ? n : s.top();

            s.push(i);
        }

        return nse;
    }

    // Previous Greater Element
    vector<int> PGE(vector<int>& arr) {
        int n = arr.size();
        vector<int> pge(n);
        stack<int> s;

        for (int i = 0; i < n; i++) {

            while (!s.empty() && arr[s.top()] <= arr[i]) {
                s.pop();
            }

            pge[i] = s.empty() ? -1 : s.top();

            s.push(i);
        }

        return pge;
    }

    // Next Greater Element
    vector<int> NGE(vector<int>& arr) {
        int n = arr.size();
        vector<int> nge(n);
        stack<int> s;

        for (int i = n - 1; i >= 0; i--) {

            while (!s.empty() && arr[s.top()] < arr[i]) {
                s.pop();
            }

            nge[i] = s.empty() ? n : s.top();

            s.push(i);
        }

        return nge;
    }

    long long subArrayRanges(vector<int>& nums) {

        int n = nums.size();

        vector<int> pse = PSE(nums);
        vector<int> nse = NSE(nums);

        vector<int> pge = PGE(nums);
        vector<int> nge = NGE(nums);

        long long minimum = 0;
        long long maximum = 0;

        for (int i = 0; i < n; i++) {

            long long leftMin = i - pse[i];
            long long rightMin = nse[i] - i;

            minimum += 1LL * nums[i] * leftMin * rightMin;


            long long leftMax = i - pge[i];
            long long rightMax = nge[i] - i;

            maximum += 1LL * nums[i] * leftMax * rightMax;
        }

        return maximum - minimum;
    }
};