// Question Link - https://bit.ly/42ZDqM4
// Time Complexity - O(n)
int count(vector<int>& arr, int n, int x) {
    // Write your code here
    int low = 0, high = n - 1;
    int lb = n;
    while(low <= high){
        int mid = (high + low)/2;
        if(arr[mid] >= x){
            lb = mid;
            high = mid - 1;
        }
        else low = mid + 1;
    } 

    low = 0, high = n - 1;
    int ub = n;    
    while(low <= high){
        int mid = (high + low)/2;
        if(arr[mid] > x){
            ub = mid;
            high = mid - 1;
        }
        else low = mid + 1;
    }
    if(arr[lb] != x) return 0;
	else return ub - lb;
}
