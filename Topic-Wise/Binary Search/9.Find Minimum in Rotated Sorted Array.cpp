// Problem Link:- https://bit.ly/41My2dR
// TC:- Olog(n)

int findMin(vector<int>& arr)
{
	// Write your code here.
	int n = arr.size();
	int ans = INT_MAX;
	int low = 0, high = arr.size() - 1;

	while(low <= high){
		int mid = (low + high)/2;
		if(arr[mid] >= arr[low]){
			ans = min(ans, arr[low]);
			low = mid + 1;
		}
		else{
			ans = min(ans, arr[mid]);
			high = mid - 1;
		}
	}
	return ans;
}
