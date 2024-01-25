//  Question Link:- https://bit.ly/3Mdw2FX

// Solution without Binary Search
// This gives TLE
// Time Complexity:- O(n)
pair<int, int> firstAndLastPosition(vector<int>& arr, int n, int k)
{
    // Write your code here
    int first = -1, last = -1;
    for(int i = 0 ; i < n; i++){
        if(arr[i] == k){
            if(first == -1) first = i;
            last = i;
        }
    }
    return {first, last};
}


// LB and UB Solution
// Time Complexity:- Olog(n)
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
    if(arr[lb] != x) return {-1, -1};
    return {lb, ub - 1};
}



// LB and While Loop Solution
// Time Complexity:- Olog(n)
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
