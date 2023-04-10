class Solution {
    public:
    bool isSafe1(int row, int col ,vector<string>& board, int n  ){
        int dupRow = row;
        int dupCol = col;
        while(row >= 0 && col >=0){
            if(board[row][col] == 'Q')
            return false;
            row--;
            col--;
        }
        row = dupRow;
        col = dupCol;
        while(col>=0){
            if(board[row][col] == 'Q')return false;
            col--;
        }
        row = dupRow;
        col = dupCol;
        while(row < n && col>=0){
            if(board[row][col] == 'Q')return false;
            row++;
            col--;
        }
       return true;
    }
  public: 
  void solve(int col , vector<string>& board, vector<vector<string>> &ans, int n ){
      if(col == n){
          ans.push_back(board);
          return;
      }

      for(int row = 0 ; row<n; row++){
          if(isSafe1(row , col, board, n)){
              board[row][col] = 'Q';
              solve(col+1, board, ans, n);
              board[row][col] = '.';
          }
      }
  }

public:
    vector<vector<string>> solveNQueens(int n) {
        vector<vector<string>> ans;
        vector<string> board(n, string(n, '.'));   // creates n rows of n dots each
         solve(0, board ,ans, n);
         return ans;
    }
};
