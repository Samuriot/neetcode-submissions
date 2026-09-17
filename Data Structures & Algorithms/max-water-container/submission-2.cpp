class Solution {
public:
    int maxArea(vector<int>& heights) {
        int l = 0;
        int r = heights.size() - 1;
        int area = min(heights[l], heights[r]) * (r-l);
        while (l < r) {
            int h = min(heights[l], heights[r]);
            area = max(area, (h * (r-l)) );
            if(heights[l] < heights[r]) l++;
            else r--;
        }

        return area;
    }
};
