// Problem Link:- https://bit.ly/3pMzTCh
// TC - Olog(n)

int findKRotation(vector<int> &arr){
    // Write your code here.
    int ans = 10000007;
    int n = arr.size();
    int index = -1;

    int low = 0, high = n - 1;
    while(low <= high){
        int mid = (low + high)/2;
        if(arr[mid] >= arr[low]){
            if(arr[low] < ans){
                ans = arr[low];
                index = low;
            }
            low = mid + 1;
        }
        else{
            if(arr[mid] < ans){
                ans = arr[mid];
                index = mid;
            }
            high = mid - 1;
        }
    }
    return index;    
}
