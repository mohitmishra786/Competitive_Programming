class Solution {
private:
    int n = 3;
    vector<vector<int>> board;
public:
    string tictactoe(vector<vector<int>>& moves) {
        board.assign(n , vector<int>(n , 0));
        int player = 1;
        for(vector<int> move : moves){
            int row = move[0];
            int col = move[1];
            
            board[row][col] = player;
            
                if (checkrow(row, player) || checkcol(col, player) || (row == col && checkdiag(player)) ||(row + col == n - 1 && checkantidiag(player))) {
                return player == 1 ? "A" : "B";
                return player == 1 ? "A" : "B";
            }
            
            player*= -1;
        }
        
        return moves.size() == 9 ? "Draw" : "Pending";
        
        
    }
    
    bool checkrow(int row , int player){
        for(int col = 0 ; col < n ; ++col){
            if(board[row][col] != player) return false;
        }
        return true;
    }
    
    bool checkcol(int col , int player){
        for(int row = 0 ; row < n ; ++row){
            if(board[row][col] != player) return false;
        }
        return true;
    }
    
    bool checkantidiag(int player){
        for(int row = 0; row < n ; ++row){
            if(board[row][n - row - 1] != player) return false;
        }
        return true;
    }
    bool checkdiag(int player){
        for(int row = 0 ;  row < n ; ++row){
            if(board[row][row] != player){
                return false;
            }
        }
        return true;
    }
};
