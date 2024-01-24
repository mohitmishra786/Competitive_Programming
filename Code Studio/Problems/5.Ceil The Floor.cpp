// Question Link:- https://www.codingninjas.com/studio/problems/ceiling-in-a-sorted-array_1825401

pair<int, int> getFloorAndCeil(vector<int> &a, int n, int x) {
	// Write your code here.
	
	// Ceil (Lower Bound Only)
	int low = 0, high = n - 1;
	int lb = -1;
	while(low <= high){
		int mid = (high + low)/2;
		if(a[mid] >= x){
			lb = a[mid];
			high = mid - 1;
		}
		else low = mid + 1;
	}


	// Floor
	low = 0, high = n - 1;
	int ans = -1;
	while(low <= high){
		int mid = low + (high - low)/2;
		if(a[mid] <= x){
			ans = a[mid];
			low = mid + 1;
		}
		else{
			high = mid - 1;
		}
	}
	return {ans, lb};
}
