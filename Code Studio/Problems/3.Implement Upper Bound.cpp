int upperBound(vector<int> &arr, int x, int n){
	// Write your code here.
	int low = 0, high = n - 1;
	int ans = n;

	while(low <= high){
		int mid = (low + high)/2;
		if(arr[mid] > x){
			ans = mid;
			high = mid - 1;
		}
		else low = mid + 1;
	}
	return ans;	
}
