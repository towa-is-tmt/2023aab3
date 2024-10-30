class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int M = matrix.size(), N = matrix[0].size();
        vector<int> up(N);
        vector<int> left(M);
        for(int i=0;i<M;i++){
            for(int j=0;j<N;j++){
                if(matrix[i][j]==0){
                    up[j] = 1;//for(int ii=0;ii<M;ii++) martix[ii][j]=0;
                    left[i]=1;//for(int jj=0;jj<N;jj++) martix[i][jj]=0;
                }
            }
        }
        for(int i=0; i<M; i++){
                if(left[i]==1) for(int jj=0;jj<N;jj++) matrix[i][jj]=0;
        }
        for(int j=0;j<N;j++){
            if(up[j]==1) for(int ii=0; ii<M;ii++) matrix[ii][j]=0;
            }
        }
};
};
