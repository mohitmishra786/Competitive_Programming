// Problem Link - https://bit.ly/43QDpdG
// TC - O(N * log(sum(weights[]) – max(weights[]) + 1))

#include<bits/stdc++.h>
int sumWeight(vector<int> &weights, int n){
    int sum = 0;
    for(int i = 0; i < n; i++){
        sum += weights[i];
    }
    return sum;
}

int maxNumber(vector<int> &arr, int n){
	int maxNum = INT_MIN;
	for(int i = 0 ; i < n; i++){
		maxNum = max(maxNum, arr[i]);
	}
	return maxNum;
}

int totalDays(vector<int> &weights, int n, int val, int d){
    int cnt = 0, sum = 0;
    for(int i = 0 ; i < n; i++){
        sum += weights[i];
        if(sum > val){
            cnt++;
            sum = weights[i];
        }
    }
    if(sum != 0) cnt++;
    return cnt;
}

int leastWeightCapacity(vector<int> &weights, int d)
{
    // Write your code here.
    int n = weights.size();
    int low = maxNumber(weights, n), high = sumWeight(weights, n);
    while(low <= high){
        int mid = (low + high)/2;
        if(totalDays(weights, n, mid, d) <= d) high = mid - 1;
        else low = mid + 1;
    }
    return low;
}
