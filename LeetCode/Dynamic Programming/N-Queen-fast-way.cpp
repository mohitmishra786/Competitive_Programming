void helper(int i, int n, vector<vector<int>>& chessboard, vector<vector<int>>& ans , vector<int>& col , vector<int>& tl , vector<int>& tr){
    
    if(i == n){
        vector<int> temp;
        for(int j = 0; j < n ; j++){
            for(int k = 0 ; k < n ; k++){
                temp.push_back(chessboard[j][k]);
            }
        }
        ans.push_back(temp);
        return;
    }
    
    
    for(int j = 0 ; j < n ; j++){
        if(col[j] == 0  and tl [i - j  + n - 1] == 0 and tr[i + j] == 0){
            chessboard[i][j] = 1;
            col[j] = tl[i - j + n - 1] = tr[i + j] = 1;
            helper(i + 1 , n , chessboard, ans , col , tl , tr);
            chessboard[i][j] = 0;
            col[j] = tl[i - j + n - 1] = tr[i + j] = 0;
        }
    }
}

vector<vector<int>> solveNQueens(int n) {
    // Write your code here.
    vector<vector<int>> ans;
    vector<vector<int>> chessboard(n , vector<int>(n , 0));
    vector<int> col(n , 0) , tl(2 * n , 0) , tr(2 * n , 0);
    helper(0 , n , chessboard, ans , col , tl , tr);
    return ans;
}
