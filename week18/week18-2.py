# week12-8.py 一二合一
# LeetCode 54. Spiral Matrix
class Solution:
    def spiralOrder(self, matrix: List[List[int]]) -> List[int]:
        M, N = len(matrix), len(matrix[0])
        i, j, d = 0, 0, 0
        di = [0, 1, 0, -1] # 向量 i 方向
        dj = [1, 0, -1, 0] # 向量 j 方向
        dd = [1, 0, 3, 2] # 轉彎方向, 先 d[d] 再 d[d]
        ans = []
        while len(ans) < M*N: # 還沒蒐集完
            ans.append(matrix[i][j])
            matrix[i][j] = 999 # 999 代表走過了
            i2, j2 = i + di[d], j + dj[d]
            if i2 < 0 or i2 >= M or j2 < 0 or j2 >= N or matrix[i2][j2] == 999: # 轉彎條件 or 走過了
                d = (d + 1) % 4 # 轉彎
                i2, j2 = i + di[d], j + dj[d]
            i, j = i2, j2
        return ans
