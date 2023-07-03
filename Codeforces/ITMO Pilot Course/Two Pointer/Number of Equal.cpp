#include <bits/stdc++.h>
using namespace std;

int countPairs(vector<int> a, vector<int> b, int n, int m) {
    if (n == 0 || m == 0) {
        return 0;
    }
    unordered_map<int, int> countA, countB;
    for (int i = 0; i < n; i++) {
        countA[a[i]]++;
    }
    for (int j = 0; j < m; j++) {
        countB[b[j]]++;
    }
    int count = 0;
    for (auto it : countA) {
        if (countB.find(it.first) != countB.end()) {
            count += it.second * countB[it.first];
        }
    }
    return count;
}

void solve(){
	int n , m;
	cin >> n >> m;
	vector<int> a(n), b(m), c;
	for (int i = 0; i < n; ++i)
	{
		cin >> a[i];
	}
	
	for(int j = 0 ; j < m ; j++){
		cin >> b[j];
	}
	
	int sum = countPairs(a, b , n , m);
	cout << sum << endl;
}

int main(){
	solve();
}	