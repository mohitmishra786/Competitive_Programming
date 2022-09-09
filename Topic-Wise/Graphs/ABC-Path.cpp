//AFTER STRUGGLE,PEACE RESIDES,WORK HARD TODAY FOR THE BETTER TOMORROW !
 
/**
 *    author:  immadmohit      
**/
 
#include <bits/stdc++.h>
using namespace std;
 
/* CODE STARTS HERE */
 
void init_code(){
    #ifndef Mohit_Mishra
        freopen("Input.txt", "r", stdin);
        freopen("Output.txt", "w", stdout);
        freopen("Error.txt", "w", stderr);
    #endif
}
 
 
int dx[]={1,1,0,-1,-1,-1,0,1};
int dy[]={0,1,1,1,0,-1,-1,-1};//8 direction
int maxPathLen = 0;
 
 
inline bool isValid(const vector<vector<char>> &grid , int row , int col){
	if(row < 0 or row >= grid.size() or col < 0 or col >= grid[row].size()) return false;
	return true;
}
 
 
void dfs(const vector<vector<char>> &grid , vector<vector<int>> &visited , int row , int col , int cur_len = 1){
	if(visited[row][col]) return;
	visited[row][col] = 1;
	maxPathLen =  max(maxPathLen , cur_len);
	for(int i = 0 ; i < 8 ; i++){
		int new_row = row + dx[i];
		int new_col = col + dy[i];
		if(isValid(grid, new_row , new_col)){
			if(grid[new_row][new_col] - grid[row][col] == 1){
				dfs(grid , visited , new_row , new_col , cur_len + 1);
			}
		}
	}
}
 
 
 
 
void dfs_A(const vector<vector<char>> &grid , vector<vector<int>> &visited){
	for(int i = 0 ; i < grid.size() ; i++){
		for(int j = 0 ; j< grid[i].size() ; j++){
			if(grid[i][j] == 'A'){
				dfs(grid, visited , i , j);
			}
		}
	}
}
 
void solve(){
    //Why it has to be me
    int row , col, k = 0;
 
    while(cin >> row >> col){
    	if(!row and !col) break;
	    vector<vector<char>> grid(row , vector<char>(col));
    	vector<vector<int>> visited(row , vector<int>(col));
 
    	for(int i = 0 ; i < row; i++){
    		for(int j = 0 ; j < col ; j++){
    			cin >> grid[i][j];
    		}
    	}
 
    	dfs_A(grid , visited);
 
    	cout << "Case " << ++k << ": " << maxPathLen << "\n";
    	maxPathLen = 0;     	
    }
	return;
}
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    //init_code();
 
    int t = 1;
    //cin >> t;
    while(t--){
        solve();
    }
 
} 
