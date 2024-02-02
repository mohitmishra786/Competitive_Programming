// Problem Link - https://bit.ly/48ZzFt6
// TC - Olog(n)

int findPeakElement(vector<int> &arr) {
    // Write your code here
    int n = arr.size();
    int low = 1, high = n - 2;
    if(arr[0] > arr[1]) return 0;
    if(arr[n - 1] > arr[n - 2]) return n - 1;
    while(low <= high){
        int mid = (low + high)/2;
        if(arr[mid - 1] < arr[mid] && arr[mid] > arr[mid + 1]) return mid;
        if(arr[mid] > arr[mid - 1]) low = mid + 1;
        else high = mid - 1;
    }
}
