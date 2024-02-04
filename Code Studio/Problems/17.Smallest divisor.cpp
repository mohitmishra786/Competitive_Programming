// Problem Link:- https://bit.ly/43QDpdG
// TC - O(log(max(arr[]))*N)

#include<bits/stdc++.h>
int maxNumber(vector<int> &arr, int n){
	int maxNum = INT_MIN;
	for(int i = 0 ; i < n; i++){
		maxNum = max(maxNum, arr[i]);
	}
	return maxNum;
}

bool exceedLimit(vector<int> &arr, int n, int limit, int val){
	int cnt = 0;
	for(int i = 0 ; i < n; i++){
		cnt += ceil((double)arr[i]/ (double)val);
	}

	return cnt <= limit;
}

int smallestDivisor(vector<int>& arr, int limit)
{
	// Write your code here.
	int n = arr.size();
	int low = 1, high = maxNumber(arr, n);
	while(low <= high){
		int mid = (low + high)/2;
		if(exceedLimit(arr, n, limit, mid)){
			high = mid - 1;
		}
		else low = mid + 1;
	}
	return low;
}

