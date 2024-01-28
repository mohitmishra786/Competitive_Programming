//  Problem Link:- https://bit.ly/3MCdLTY
// TC:- Olog(n)

bool searchInARotatedSortedArrayII(vector<int>&A, int key) {
    // Write your code here.
    int n = A.size();
    int low = 0, high = n - 1;
    while(low <= high){
        int mid = (low + high)/2;
        if(A[mid] == key) return 1;
        if(A[low] == A[mid] && A[mid] == A[high]){
            low++;
            high--;
        }
        else if(A[mid] >= A[low]){
            if(A[low] <= key && A[mid] >= key){
                high = mid - 1;
            }
            else low = mid + 1;
        }
        else{
            if(A[mid] <= key && A[high] >= key){
                low = mid + 1;
            }
            else high = mid - 1;
        }
    }
    return 0;
}
