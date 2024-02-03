// Problem Link - https://bit.ly/3CmCKVI
// TC - O(n * log(max(arr[])))

#include <bits/stdc++.h>
int maxElement(vector<int> &v, int n){
    int maxI = INT_MIN;
    for(int i = 0 ; i < n; i++){
        maxI = max(maxI, v[i]);
    }
    return maxI;
}

long long totalHour(vector<int> &v, int n, int k){
    long long ans = 0;
    for(int i = 0 ; i < n; i++){
        ans += ceil((double)v[i]/(double)k);
    }
    return ans;
}

int minimumRateToEatBananas(vector<int> v, int h) {
    // Write Your Code Here
    int n = v.size();
    int low = 1, high = maxElement(v, n);
    int ans = -1;
    while(low <= high){
        int mid = (low + high)/2;
        if(totalHour(v, n, mid) <= h ){
            ans = mid;
            high = mid - 1;
        }
        else low = mid + 1;
    }
    return ans;
}
