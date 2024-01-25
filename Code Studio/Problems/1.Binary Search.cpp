// Problem Link - https://bit.ly/41Tk8ql
// Time Complexity:- Olog(n)

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

// Recursive Solution

int solve(vector<int> &nums, int target, int l, int r){
    if(r < l){
        return -1;
    }
    int mid = (l + r)/2;
    if(target == nums[mid]) return mid;
    else if(target > nums[mid]) solve(nums, target, mid + 1, r);
    else solve(nums, target, l, mid - 1);
}

int search(vector<int> &nums, int target) {
    // Write your code here.
    int n = nums.size();
    int l = 0;
    int r = n - 1;
    return solve(nums, target, l, r);
}
