// week18-2.cpp
// LeetCode 54. Spiral Matrix
class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int m = matrix.size(), n = matrix[0].size(); // �x�}
        int i = 0, j = 0, d = 0; // ��V
        int di[4] = {0, 1, 0, -1};
        int dj[4] = {1, 0, -1, 0};
        vector<int> ans;
        while (ans.size() < m * n) {
            ans.push_back(matrix[i][j]);
            matrix[i][j] = 999; // 999�N���L
            int i2 = i + di[d], j2 = j + dj[d];
            if (i2 >= m || i2 < 0 || j2 >= n || j2 < 0 || matrix[i2][j2] == 999) {
                d = (d + 1) % 4;
            }
            i = i + di[d];
            j = j + dj[d];
        }
        return ans;
    }
};
