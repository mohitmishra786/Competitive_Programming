// Problem Link - https://bit.ly/41Tk8ql

// Iterative Solution

int search(vector<int> &nums, int target) {
    // Write your code here.
    int l = 0;
    int n = nums.size();
    int r = n - 1;
    while(l <= r){
        int mid = (l + r)/2;
        if(nums[mid] == target) return mid;
        else if(target > nums[mid]) l = mid + 1;
        else r = mid - 1;
    }
    return -1;
}