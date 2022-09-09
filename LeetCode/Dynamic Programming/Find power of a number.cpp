long long Pow(int X, int N)
{
    // Write your code here. 
    if(N == 0) return 1;
    long long ans = Pow(X , N/2);
    if(N % 2 == 1) return ans * ans * X;
    return ans * ans;
}
