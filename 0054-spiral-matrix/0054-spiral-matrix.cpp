class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
    //if (matrix.empty() || matrix[0].empty()) return {};

    int rows = matrix.size();
    int cols = matrix[0].size();
    vector<int> result(rows * cols);
    int index = 0;

    int sr = 0;
    int er = rows - 1;
    int sc = 0;
    int ec = cols - 1;

    while (sr <= er && sc <= ec) {
        // top
        for (int j = sc; j <= ec; j++) {
            result[index++] = matrix[sr][j];
        }
        // right
        for (int i = sr + 1; i <= er; i++) {
            result[index++] = matrix[i][ec];
        }
        // bottom
        for (int j = ec - 1; j >= sc; j--) {
            if (sr == er) {
                break;
            }
            result[index++] = matrix[er][j];
        }
        // left
        for (int i = er - 1; i >= sr + 1; i--) {
            if (sc == ec) {
                break;
            }
            result[index++] = matrix[i][sc];
        }
        sr++;
        sc++;
        er--;
        ec--;
    }

    return result;

    } 
        
};