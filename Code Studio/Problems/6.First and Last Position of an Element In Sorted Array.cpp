pair<int, int> firstAndLastPosition(vector<int>& arr, int n, int x)
{
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
    int ans1 = lb;
    while(arr[lb] == x){
        lb++;
    }
    int ans2 = lb - 1;
    if(arr[ans1] != x) return {-1, -1};
    return {ans1, ans2};
}
