#include <bits/stdc++.h>
using namespace std;

void printVec(vector<int> v){
	for(auto x : v){
		cout << x << " ";
	}
	cout << endl;
}

void solve(vector<int> v, int n){
	for(int i = 1 ; i < v.size(); i++){
		if(v[i] - v[i - 1] != 1){
			vector<int> new_v;
			if(v[i] > v[i - 1]){
				int l = v[i - 1] + 1;
				while(l < v[i]){
					new_v.push_back(l);
					l++;
				}
			}
			else{
				int l = v[i - 1] - 1;
				// cout << l << " ";
				while(l > v[i]){
					new_v.push_back(l);
					l--;
				}
			}
			
			
			v.insert(v.begin() + i, new_v.begin(), new_v.end() );
		}
	}
	 printVec(v);
}

int main(){
	int n;
	cin >> n;
	vector<int> v(n);
	bool p = true;
	for(int i = 0 ; i < n; i++){
		cin >> v[i];
		if(abs(v[i] - v[i - 1]) != 1 && i >= 1){
			p = false;
		}
	}
	if(p){
		printVec(v);
	}
	else solve(v, n);
}	