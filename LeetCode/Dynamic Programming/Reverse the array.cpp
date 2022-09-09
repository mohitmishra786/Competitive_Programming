
void Reversal(vector<int> &arr , int l , int r){
    if(l >= r) return ;
    int temp = arr[l];
    arr[l] = arr[r];
    arr[r] = temp;
    Reversal(arr , l + 1 , r - 1);
}

void reverseArray(vector<int> &arr , int m)
{
	// Write your code here.
    Reversal(arr , m + 1 , arr.size() - 1);
}

