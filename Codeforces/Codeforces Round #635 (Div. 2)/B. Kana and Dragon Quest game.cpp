//░░░░░░░░░░ // You have struggled your way here with no guidance from anyone,keep the faith
//░░░░░░░░▄▐░▄▄█████▄▄     //You have practiced a hell lot of questions,have faith in yourself
//░░░░░░▄█████████████▄▀▄▄▄▄▄    //Dont just stare at the problem use that damn pen and paper
//░░░░░█████████████████▄██████ // write down whats in ur head !
//░░░░████▐█████▌████████▌█████▌
//░░░████▌█████▌█░████████▐▀██▀
//░▄█████░█████▌░█░▀██████▌█▄▄▀▄
//░▌███▌█░▐███▌▌░░▄▄░▌█▌███▐███░▀
//▐░▐██░░▄▄▐▀█░░░▐▄█▀▌█▐███▐█
//░░███░▌▄█▌░░▀░░▀██░░▀██████▌
//░░░▀█▌▀██▀░▄░░░░░░░░░███▐███
//░░░░██▌░░░░░░░░░░░░░▐███████▌
//░░░░███░░░░░▀█▀░░░░░▐██▐███▀▌
//░░░░▌█▌█▄░░░░░░░░░▄▄████▀░▀    
//░░░░░░█▀██▄▄▄░▄▄▀▀▒█▀█░▀
//░░░░░░░░░▀░▀█▀▌▒▒▒░▐▄▄
//░░░░░░░░▄▄▀▀▄░░░░░░▄▀░▀▀▄▄
//░░░░░░▄▀░▄▀▄░▌░░░▄▀░░░░░░▄▀▀▄
//░░░░░▐▒▄▀▄▀░▌▀▄▄▀░░░░░░▄▀▒▒▒▐
//░░░░▐▒▒▌▀▄░░░░░▌░░░░▄▄▀▒▐▒▒▒▒▌
//░░░▐▒▒▐░▌░▀▄░░▄▀▀▄▀▀▒▌▒▐▒▒▒▒▐▐
//░░░▌▄▀░░░▄▀░█▀▒▒▒▒▀▄▒▌▐▒▒▒▒▒▌▌
//░░▄▀▒▐░▄▀░░░▌▒▐▒▐▒▒▒▌▀▒▒▒▒▒▐▒▌

//AFTER STRUGGLE,PEACE RESIDES,WORK HARD TODAY FOR THE BETTER TOMORROW !

/**
 *    author:  immadmohit      
**/

#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ff first
#define ss second
#define vec vector
#define pb push_back
#define ll long long
#define vi vector<int>
#define vll vector<ll>
#define pll pair<ll,ll>
#define pi pair<int,int>
#define mod(a,b) (a%b+b)%b
#define ceil(a,b) ((a+b-1)/b)
#define flushout cout.flush();
#define sz(x) ((int) (x).size())
#define __lcm(a,b) (a*b)/__gcd(a,b)
#define all(x) (x).begin(), (x).end()
#define vin(a) for(auto &ii : a)cin>>ii
#define f(i,a,b) for(int i=(a);i<(b);i++)
#define fr(i,a,b) for(int i=(b-1);i>=(a);i--)
#define dbg(x) cout<<'>'<< #x <<':'<< x <<endl;
#define pout(x,n) cout<<fixed<<setprecision(x)<<n
#define vout(v) for(auto ii:v)cout<<ii<<' ';cout<<endl;
const int M = 1000000007;

/* CODE STARTS HERE */

void init_code(){
    #ifndef Mohit_Mishra
        freopen("Input.txt", "r", stdin);
        freopen("Output.txt", "w", stdout);
        freopen("Error.txt", "w", stderr);
    #endif
}

void use_this_for_prime_generator(){
    bool prime[100];
    for(int i = 2; i < 100 ; i++){
        prime[i] = true;
        for(int j = 2 ; j * j <= i ; j++){
            if(i % j == 0){
                prime[i] = false;
            }
        }
    }
}


void solve(){
    //Why it has to be me
    
    int x , n , m;
    cin >> x >> n >> m;
    for(int i = 0 ; i < n ; i++){
    	if(x <= 19 and x >= 11 and m >= 2){
    	    cout << "YES" << endl;
    	    return;
    	}
    	else if(x <= 10 and m >= 1){
    	    cout << "YES" << endl;
    	    return;
    	}
    	x = (x/2) + 10;
    }
    if(x <= 0){
    	cout << "YES" << endl;
    	return;
    }

    for(int i = 0 ; i < m ; i++){
    	x -= 10;
    }

    if(x <= 0){
    	cout << "YES" << endl;
  		return;
    }
    cout << "NO" << endl;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    
   // init_code();

    int t = 1;
    cin >> t;
    while(t--){
        solve();
    }

}