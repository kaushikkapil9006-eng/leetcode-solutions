class Solution {
public:

    vector<int> nextSmallerElement(vector<int>& arr, int n) {
        stack<int> s;
        s.push(n);

        vector<int> ans(n);

        for (int i = n - 1; i >= 0; i--) {
            while (s.top() != n && arr[s.top()] >= arr[i]) {
                s.pop();
            }

            ans[i] = s.top();
            s.push(i);
        }

        return ans;
    }

    vector<int> prevSmallerElement(vector<int>& arr, int n) {
        stack<int> s;
        s.push(-1);

        vector<int> ans(n);

        for (int i = 0; i < n; i++) {
            while (s.top() != -1 && arr[s.top()] >= arr[i]) {
                s.pop();
            }

            ans[i] = s.top();
            s.push(i);
        }

        return ans;
    }

    int largestRectangleArea(vector<int>& heights) {

        int n = heights.size();

        vector<int> next = nextSmallerElement(heights, n);
        vector<int> prev = prevSmallerElement(heights, n);

        int area = 0;

        for (int i = 0; i < n; i++) {

            int length = heights[i];

            int breadth = next[i] - prev[i] - 1;

            int newArea = length * breadth;

            area = max(area, newArea);
        }

        return area;
    }
};