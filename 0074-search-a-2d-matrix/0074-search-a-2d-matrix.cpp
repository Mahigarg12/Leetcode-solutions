class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n = matrix.size();         // Number of rows
    int m = matrix[0].size();      // Number of columns
    int row = 0, col = m - 1;
    while (row < n && col >= 0) {
        if (matrix[row][col] == target) {
            cout << "Found at " << row << " , " << col << endl;
            return true;
        } else if (matrix[row][col] > target) {
            col--;
        } else {
            row++;
        }
    }
    return false;
    //cout << "Not found" << endl;
    }
};