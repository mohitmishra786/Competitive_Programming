class Solution {
public:
    
    bool isSafe(int i , int j , int n , vector<string>& chessBoard){
        int tempI = i;
        while(tempI >= 0){
            if(chessBoard[tempI][j] == 'Q') return false;
            tempI--;
        }
        
        tempI = i;
        int tempJ = j;
        while(tempI >= 0 and tempJ <= n - 1){
            if(chessBoard[tempI][tempJ] == 'Q') return false;
            tempI--;
            tempJ++;
            
        }
        
        
        tempI = i;
        tempJ = j;
        while(tempI >= 0 and tempJ >= 0){
            if(chessBoard[tempI][tempJ] == 'Q') return false;
            tempI--;
            tempJ--;
        }
        
        return true;
    }
    
    
    void helper(int i , int n , vector<string>& chessBoard, vector<vector<string>>& ans){
        if(i == n){
            ans.push_back(chessBoard);
            return;
        }
        
        for(int j = 0 ; j < n ; j++){
            if(isSafe(i , j , n , chessBoard)){
                chessBoard[i][j] = 'Q';
                helper(i + 1 , n , chessBoard , ans);
                chessBoard[i][j] = '.';
            }
        }
    }
    vector<vector<string>> solveNQueens(int n) {
        vector<vector<string>> ans;
        vector<string> chessBoard(n , string(n , '.'));
        helper( 0 , n , chessBoard , ans);
        return ans;
    }
};
