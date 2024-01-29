// Problem Link:- https://bit.ly/42KKHj5
// TC - Olog(n)

int singleNonDuplicate(vector<int>& arr)
{
	// Write your code here
	int n = arr.size();
	if(n == 1) return arr[0];
	int low = 0, high = n - 1;
	while(low <= high){
		int mid = (low + high)/2;
		if(arr[mid] != arr[mid - 1] && arr[mid] != arr[mid + 1]){
			return arr[mid];
		}
		if(arr[mid] == arr[mid - 1] && mid % 2 == 0) high = mid - 1;
		else if(arr[mid] == arr[mid - 1] && mid % 2 == 1) low = mid + 1;
		else if(arr[mid] != arr[mid - 1] && mid % 2 == 1) high = mid - 1;
		else low = mid + 1;
	}
}


int singleNonDuplicate(vector<int>& arr)
{
	// Write your code here
	int n = arr.size();
	if(n == 1) return arr[0];
	int low = 0, high = n - 1;
	while(low <= high){
		int mid = (low + high)/2;
		if(arr[mid] != arr[mid - 1] && arr[mid] != arr[mid + 1]){
			return arr[mid];
		}
		if(arr[mid] == arr[mid - 1] && mid % 2 == 0 || arr[mid] != arr[mid - 1] && mid % 2 == 1) high = mid - 1;
		else low = mid + 1;
	}
}
