class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int l = 0;
        // this will return the height of the 
        int r = matrix.size() - 1;
        int targetRow = -1;
        while (l <= r) {
            int m = l + (r - l) / 2;
            if (matrix[m][0] < target) {
                l = m + 1;
                targetRow = m;
            } else if (matrix[m][0] > target) {
                r = m - 1;
            } else {
                // return early because we found it
                return true;
            }
        }
        if (targetRow == -1) return false;

        // then go side to side
        return binSearch(matrix[targetRow], target);
    }
private:
    bool binSearch(vector<int>& matrix, int target) {
        int l = 0;
        int r = matrix.size() - 1;
        while (l <= r) {
            int m = l + (r-l) / 2;
            if (matrix[m] < target) {
                l = m + 1;
            } else if (matrix[m] > target) {
                r = m - 1;
            } 
            else return true;
        }
        return false;
    }
};
