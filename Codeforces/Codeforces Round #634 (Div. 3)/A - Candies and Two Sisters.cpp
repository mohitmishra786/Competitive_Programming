#include <bits/stdc++.h>

using namespace std;

int main(){
	int x , t ;
	cin>> x;
	while(x--){
		cin >> t;
		if(t%2 == 0){
			cout << abs(t/2) - 1 << "\n";
		}
		else
			cout << abs(t/2) << "\n";
		
	}
}
