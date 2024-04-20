#include<bits/stdc++.h>
using namespace std;

void solve(int index, int n, string curr, vector<int>& freq, vector<string>& sol){
	if(index == n){
		sol.push_back(curr);
		return;
	}
	
	for(int i = 0 ; i < 26; i++){
		if(freq[i] > 0){
			freq[i]--;
			solve(index + 1, n , curr + char('a' + i), freq, sol);
			freq[i]++;
		}
	}
}

int main(){
	string s;
	cin >> s;
	int n = s.size();
	vector<int> freq(26);
	vector<string> sol;
	for(auto &i : s){
		freq[i - 'a']++;
	}
	solve(0, n, "", freq, sol);
	cout << sol.size() << endl;
	for(auto &p: sol){
		cout << p << endl;
	}
}
