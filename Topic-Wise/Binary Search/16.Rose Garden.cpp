// Problem Link:- https://bit.ly/3Cl6KB6
// TC - O(log(max(arr[])-min(arr[])+1) * N)

#include<bits/stdc++.h>

int minNumber(vector<int> &arr, int n){
	int minNum = INT_MAX;
	for(int i = 0 ; i < n; i++){
		minNum = min(minNum, arr[i]);
	}
	return minNum;
}

int maxNumber(vector<int> &arr, int n){
	int maxNum = INT_MIN;
	for(int i = 0 ; i < n; i++){
		maxNum = max(maxNum, arr[i]);
	}
	return maxNum;
}

bool totalBouqets(vector<int> &arr, long long val, int k, int m, int n){
	int cnt = 0;
	int numOfBouqets = 0;
	for(int i = 0 ; i < n; i++){
		if(arr[i] <= val){
			cnt++;
		}
		else{
			numOfBouqets += (cnt/k);
			cnt = 0;
		}
	}
	numOfBouqets += (cnt/k);
	if(numOfBouqets >= m) return true;
	else return false;
}

int roseGarden(vector<int> arr, int k, int m)
{
	// Write your code here
	int n = arr.size();
	long long val = k * 1LL * m * 1LL;
	if(val > n) return -1;
	int low = minNumber(arr, n), high = maxNumber(arr, n);
	while(low <= high){
		long long mid = (low + high)/2;
		if(totalBouqets(arr, mid, k, m, n)){
			high = mid - 1;
		}
		else low = mid + 1;
	}
	return low;
}
