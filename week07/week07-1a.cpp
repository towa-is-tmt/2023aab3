class Solution {
public:
    void myDrawBoard(int board[3][3]){
        for(int i=0; i<3; i++){
            for(int j=0; j<3; j++){
                cout << board[i][j] << ' ';
            }
            cout << "\n";
        }
        cout << "\n";
    }
    bool tesrWin(int board[3][3]){
        if(board[0][0])==borad[0][1] && board[0][1])==borad[0][2] return true;
        if(board[1][0])==borad[1][1] && board[1][1])==borad[01[2] return true;
        if(board[2][0])==borad[2][1] && board[2][1])==borad[2][2] return true;
    }
    string tictactoe(vector<vector<int>>& moves) {
        int board[3][3] = {};
        int now = 1;
        myDrawBoard(board);
        for(auto move : moves){
            int i= move[0], j = move[1];
            board[i][j] = now;
            myDrawBoard(board);
            now = 3 - now;
        }
        return "B"; // "A" or "B" or "draw"
    }
};
