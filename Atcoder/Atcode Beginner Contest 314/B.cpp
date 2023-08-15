#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, x;
    cin >> n;
    vector<vector<int>> bets(n);
    for (int i = 0; i < n; i++) {
        int c;
        cin >> c;
        for (int j = 0; j < c; j++) {
            int a;
            cin >> a;
            bets[i].push_back(a);
        }
    }
    cin >> x;
    int min_bets = INT_MAX;
    for (int i = 0; i < n; i++) {
        if (find(bets[i].begin(), bets[i].end(), x) != bets[i].end()) {
            int num_bets = bets[i].size();
            if (num_bets < min_bets) {
                min_bets = num_bets;
            }
        }
    }
    int count = 0;
    vector<int> ans;
    for (int i = 0; i < n; i++) {
        if (find(bets[i].begin(), bets[i].end(), x) != bets[i].end() && bets[i].size() == min_bets) {
            count++;
            ans.push_back(i + 1);
        }
    }
    
    cout << count << endl;
    for(auto y : ans){
        cout << y << " ";
    }
    cout << endl;
    return 0;
}
