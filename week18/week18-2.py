# week12-8.py �@�G�X�@
# LeetCode 54. Spiral Matrix
class Solution:
    def spiralOrder(self, matrix: List[List[int]]) -> List[int]:
        M, N = len(matrix), len(matrix[0])
        i, j, d = 0, 0, 0
        di = [0, 1, 0, -1] # �V�q i ��V
        dj = [1, 0, -1, 0] # �V�q j ��V
        dd = [1, 0, 3, 2] # ���s��V, �� d[d] �A d[d]
        ans = []
        while len(ans) < M*N: # �٨S�`����
            ans.append(matrix[i][j])
            matrix[i][j] = 999 # 999 �N���L�F
            i2, j2 = i + di[d], j + dj[d]
            if i2 < 0 or i2 >= M or j2 < 0 or j2 >= N or matrix[i2][j2] == 999: # ���s���� or ���L�F
                d = (d + 1) % 4 # ���s
                i2, j2 = i + di[d], j + dj[d]
            i, j = i2, j2
        return ans
