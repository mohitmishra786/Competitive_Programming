#include <bits/stdc++.h>
using namespace std;



void solve(){
	string a,b;
  	cin>>a>>b;
  	int c1=0,c2=0;
  	for(int i=0,j=0;i<a.length(),j<b.length();i++,j++){
   		if(a[i]=='X') c1++;
   		if(b[j]=='X') c2++;
  	}
  	if(a[a.length()-1]=='S' && b[b.length()-1]=='M') cout<<"<\n";
  	else if(a[a.length()-1]=='S' && b[b.length()-1]=='L') cout<<"<\n";
  	else if(a[a.length()-1]=='M' && b[b.length()-1]=='L') cout<<"<\n";
  	else if(a[a.length()-1]=='L' && b[b.length()-1]=='S') cout<<">\n";
  	else if(a[a.length()-1]=='L' && b[b.length()-1]=='M') cout<<">\n";
  	else if(a[a.length()-1]=='M' && b[b.length()-1]=='S') cout<<">\n";
  	else{
   		if(a[a.length()-1]=='S'){
   			if(c1==c2) cout<<"=\n";
   			else if(c1>c2) cout<<"<\n";
   			else cout<<">\n";
   		}
   	else{
    	if(c1==c2) cout<<"=\n";
    	else if(c1>c2) cout<<">\n";
    	else cout<<"<\n";
   	}
  }
}

// void solve1(){
// 	string a , b;
// 	cin >> a >> b;
	
// 	int n = a.length() , m = b.length();
	
// 	if(a[n - 1] == b[m - 1]){
// 		if(a[n - 1] == 'S'){
// 			if(n > m) cout << '<' << endl;
// 			else if(n < m) cout << '>' << endl;
// 			else cout << '=' << endl;
// 		}
// 		else{
// 			if(n > m) cout << '>' << endl;
// 			else if(n < m) cout << '<' << endl;
// 			else cout << '=' << endl;
// 		}
// 	}
// 	else if(a[n - 1] == 'S'){
// 		cout << '<' << endl;
// 	}
// 	else if(a[n - 1] == 'M'){
// 		if(b[n - 1] == 'L'){
// 			cout << '<' << endl;
// 		}
// 		else{
// 			cout << '>' << endl;
// 		}
// 	}
// 	else{
// 		cout << '>' << endl;
// 	}
// } 

int main() {
    int tc = 1;
    cin >> tc;
    for(int i = 0 ; i < tc ; i++){
    	solve();
    }
     
}    