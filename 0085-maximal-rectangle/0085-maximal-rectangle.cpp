class Solution {
public:

    vector<int> nextSmallerElement(int* arr, int n) {
        stack<int> s;
        s.push(-1);

        vector<int> ans(n);

        for(int i = n - 1; i >= 0; i--) {

            int curr = arr[i];

            while(s.top() != -1 && curr <= arr[s.top()]) {
                s.pop();
            }

            ans[i] = s.top();
            s.push(i);
        }

        return ans;
    }


    vector<int> prevSmallerElement(int* arr, int n) {
        stack<int> s;
        s.push(-1);

        vector<int> ans(n);

        for(int i = 0; i < n; i++) {

            int curr = arr[i];

            while(s.top() != -1 && curr <= arr[s.top()]) {
                s.pop();
            }

            ans[i] = s.top();
            s.push(i);
        }

        return ans;
    }


    int largestRectangleArea(int* heights, int n) {

        vector<int> next = nextSmallerElement(heights, n);
        vector<int> prev = prevSmallerElement(heights, n);

        int area = 0;

        for(int i = 0; i < n; i++) {

            if(next[i] == -1) {
                next[i] = n;
            }

            int length = heights[i];
            int breadth = next[i] - prev[i] - 1;

            int newArea = length * breadth;

            area = max(area, newArea);
        }

        return area;
    }


    int maximalRectangle(vector<vector<char>>& matrix) {

        if(matrix.empty()) {
            return 0;
        }

        int n = matrix.size();
        int m = matrix[0].size();

        vector<int> heights(m, 0);

        int maxi = 0;

        for(int i = 0; i < n; i++) {

            // Create histogram for current row
            for(int j = 0; j < m; j++) {

                if(matrix[i][j] == '1') {
                    heights[j]++;
                }
                else {
                    heights[j] = 0;
                }
            }

            // Find largest rectangle in current histogram
            int area = largestRectangleArea(heights.data(), m);

            maxi = max(maxi, area);
        }

        return maxi;
    }
};