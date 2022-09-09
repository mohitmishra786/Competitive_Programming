#include<bits/stdc++.h>

using namespace std;
const int N = 100005;
vector<int> adj_list[N];
bool visited[N];

void dfs(int curr){
    visited[curr] = true;
    for(int next : adj_list[curr]){
        if(visited[next]) continue;
        dfs(next);
    }
}

int main(){
    int n , m;
    cin >> n >> m;
    for(int i = 0 ; i < m ; i++){
        int x , y;
        cin >> x >> y;
        adj_list[x].push_back(y);
        adj_list[y].push_back(x);
    }

    int ans = 0;

    for(int i = 1 ; i <= n ; i++){
        if(visited[i]) continue;
        dfs(i);
        ans++;
    }

    cout << ans << endl;
}
