class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) {
        vector<int> disc = prices;
        int n = prices.size();
        stack<int> st;
        for(int i = 0 ; i < n ; i++){
            st.push(prices[i]);
            int j = i + 1;
            while(!st.empty()  and j != n){
                if(st.top() >= prices[j]){
                    disc[i] -= prices[j];
                    st.pop();
                }
                else{
                    j++;
                }
            }
        }
        return disc;
    }
};
