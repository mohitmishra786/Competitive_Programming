// It will be same as Lower Bound
// Question Link:- https://bit.ly/3ocI0HW 
// Time Complexity:- Olog(n)
int searchInsert(vector<int>& arr, int m)
{
	// Write your code here.
	int n = arr.size();
	int low =0, high = n - 1;
	int ans = n;
	while(low <= high){
		int mid = low + (high - low)/2;
		if(arr[mid] >= m){
			ans = mid;
			high = mid - 1;
		}
		else low = mid + 1;
	}
	return ans;
}
