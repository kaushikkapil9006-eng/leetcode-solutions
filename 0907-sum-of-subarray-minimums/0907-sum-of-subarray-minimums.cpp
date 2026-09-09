class Solution {
public:

    vector<int> NSE(vector<int>& arr) {
        stack<int> s;
        int n = arr.size();
        vector<int> nse(n);

        for(int i = n - 1; i >= 0; i--) {
            while(!s.empty() && arr[s.top()] >= arr[i]) {
                s.pop();
            }

            nse[i] = s.empty() ? n : s.top();
            s.push(i);
        }

        return nse;
    }

    vector<int> PSEE(vector<int>& arr) {
        stack<int> s;
        int n = arr.size();
        vector<int> psee(n);

        for(int i = 0; i < n; i++) {
            while(!s.empty() && arr[s.top()] > arr[i]) {
                s.pop();
            }

            psee[i] = s.empty() ? -1 : s.top();
            s.push(i);
        }

        return psee;
    }

    int sumSubarrayMins(vector<int>& arr) {
        int mod = 1e9 + 7;
        long long total = 0;

        vector<int> psee = PSEE(arr);
        vector<int> nse = NSE(arr);

        for(int i = 0; i < arr.size(); i++) {
            long long left = i - psee[i];
            long long right = nse[i] - i;

            total = (total + (left * right * arr[i]) % mod) % mod;
        }

        return total;
    }
};