// Prbblem Link - https://bit.ly/3oWhSkW
// TC - Olog(n) * Olog(n)

int solve(int j, int n, int m){
  long long ans = 1;
  while(n--){
    ans = ans * j;
    if(ans > m) return 2;
  }
  if(ans == m) return 1;
  return 0;
}

int NthRoot(int n, int m) {
  // Write your code here.
  int low = 1, high = m;
  while(low <= high){
    int mid = (low + high)/2;
    int val = solve(mid, n, m);
    if(val == 1) return mid;
    if(val == 0) low = mid + 1;
    else high = mid - 1;
  }
  return -1;
}
