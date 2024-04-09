#include<bits/stdc++.h>
using namespace std;

void solve(int x, int y, int r, int c, vector<vector<int>>& arr, vector<vector<int>>& a, vector<vector<int>>& b){
	if(x > r) return ;
	if(y == c){
		arr[x][y] = a[x][y] + b[x][y];
		solve(x + 1, 0, r, c, arr, a , b);
		return ;
	}
	arr[x][y] = a[x][y] + b[x][y];
	solve(x, y + 1, r, c, arr, a, b);
}

int main(){
	int r, c, p;
	cin >> r >> c;
	vector<vector<int>> a(r, vector<int> (c, 0));
	vector<vector<int>> b(r, vector<int> (c, 0));
	for(int i = 0 ; i < r; i++){
		for(int j = 0 ; j < c; j++){
			cin >> p;
			a[i][j] = p;
		}
	}
	for(int i = 0 ; i < r; i++){
		for(int j = 0 ; j < c; j++){
			cin >> p;
			b[i][j] = p;
		}
	}
	vector<vector<int>> arr(r, vector<int> (c, 0));
	solve(0, 0, r - 1, c - 1, arr, a, b);
	for(int i = 0 ; i < r; i++){
		for(int j = 0 ; j < c; j++){
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}
}
