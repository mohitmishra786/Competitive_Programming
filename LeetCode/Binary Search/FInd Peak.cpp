class Solution {
public:
    int peak(vector<int>& arr , int n, int l , int r){
        if(n == 1) return 0;
        if(arr[0] > arr[1]){
            return 0;
        }
        if(arr[r] > arr[r - 1]){
            return r;
        }
        if(l == r){
            return l;
        }

        int mid = l + (r - l)/2;
        if(arr[mid] > arr[mid + 1] and arr[mid] > arr[mid - 1]){
            return mid;
        }
        if(arr[mid] < arr[mid + 1]){
            return peak(arr , n , mid + 1 , r);
        }
        return peak(arr , n , l , mid - 1);
    }

    int findPeakElement(vector<int>& nums) {
        int ans = peak(nums, nums.size() , 0 , nums.size() - 1);
        return ans;
    }
};