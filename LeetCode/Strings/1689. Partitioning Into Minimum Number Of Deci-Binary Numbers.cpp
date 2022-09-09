class Solution {
public:
    int minPartitions(string n) {
        int m = n.length();
        int max_ans = 0;
        for(int i = 0 ; i < m ; i++){
            if(n[i] - '0' > max_ans) max_ans = n[i] - '0'; 
        }
        return max_ans;
    }
};
