// #include <bits/stdc++.h>
// using namespace std;

// bool helper(int n, int s , vector<int>& top , vector<int>& bottom , string &ans){
	
// 	// base cases
// 	if(s == 0){
// 		return true;
// 	}
// 	if(n == 0){
// 		if(top[n] == s || bottom[n] == s){
// 			if(top[n] == s) {
// 				ans += 'H';
// 				return true;
// 			}
// 			else {
// 				ans += 'T';
// 				return true;
// 			}
// 		}
// 		else{
// 			return false;
// 		}
// 	}
	
	
	
// 	s -= top[n];
// 	ans += 'H';
// 	n--;
// 	helper(n , s , top , bottom, ans);
// 	n++;
// 	s += top[n];
// 	ans.pop_back();
	
// 	s -= bottom[n];
// 	ans += 'T';
// 	n--;
// 	helper(n, s , top , bottom, ans);
// 	n++;
// 	s += bottom[n];
// 	ans.pop_back();
	
	
	
	
	
// 	// bool t1 = false, t2 = false;
// 	// if(top[n] <= s){
// 	// 	ans += 'H';
// 	// 	t1 = helper(n - 1 , s - top[n] , top, bottom , ans);
// 	// 	ans.pop_back();
// 	// }
// 	// if(bottom[n] <= s){
// 	// 	ans += 'H';
// 	// 	t2 = helper(n - 1 , s - bottom[n] , top, bottom , ans);
// 	// 	ans.pop_back();
// 	// }
	
// 	// if(t1 || t2) return true;
// }

// void solve(){
// 	int n , s;
// 	cin >> n >> s;
	
// 	vector<int> top(n);
// 	vector<int> bottom(n);
	
// 	for(int i = 0 ; i < n ; i++){
// 		cin >> top[i] >> bottom[i];
// 	}
	
// 	string ans = "";
// 	if(helper(n - 1 , s , top , bottom , ans)){

// 		cout << "YES" << endl;
// 		reverse(ans.begin() , ans.end());
// 		ans += 'H';
// 		cout <<ans << endl;
// 	}
// 	else cout << "NO" << endl;
// } 

// int main() {
//     int tc = 1;
//    // cin >> tc;
//     for(int i = 0 ; i < tc ; i++){
//     	solve();
//     }
     
// }    



#include <bits/stdc++.h>
using namespace std;

void solve(){
	int n , s;
	cin >> n >> s;
	
	vector<int> a(n), b(n);
	
	for(int i = 0 ; i < n ; i++){
		cin >> a[i] >> b[i];
	}

	
	vector<vector<bool>> dp(n + 1 , vector<bool> (s + 1 , false));
	
	dp[0][0] = true;
	
	for(int i = 0 ; i < n ; i++){
		for(int j = 0; j <= s ; j++){
			if(dp[i][j]){
				if(a[i] + j <= s){
					dp[i + 1][j + a[i]] = true;
				}
				if(b[i] + j <= s){
					dp[i + 1][j + b[i]] = true;
				}
			}
		}
	}
	
	
	if (dp[n][s]) {
        cout << "Yes\n";
        string t(n, 'H');
        for (int i = n - 1; i >= 0; --i) {
            if (s >= a[i] and dp[i][s - a[i]]) {
                t[i] = 'H';
                s -= a[i];
            } else {
                t[i] = 'T';
                s -= b[i];
            }
        }
        cout << t << '\n';
    } else {
        cout << "No\n";
    }
	
} 

int main() {
    int tc = 1;
   // cin >> tc;
    for(int i = 0 ; i < tc ; i++){
    	solve();
    }
     
}    