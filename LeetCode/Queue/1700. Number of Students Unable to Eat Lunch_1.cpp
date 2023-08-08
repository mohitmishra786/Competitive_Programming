/*
    Used Queue and Stack, just made sure that both are not empty and also number of times both top are not equal is less than n.
    Also in stack i took element of sandwiches vector in reverse
*/

class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
        queue<int> std;
        stack<int> sand;

        for(auto i : students){
            std.push(i);
        }

        for(int i = sandwiches.size() - 1; i >= 0 ; i--){
            sand.push(sandwiches[i]);
        }


        int n = std.size();
        int r = 0, cnt = 0;

        while(!std.empty() && !sand.empty() && r < n){
            if(std.front() == sand.top()){
                std.pop();
                sand.pop();
                cnt++;
                r = 0;
            }
            else{
                int temp = std.front();
                std.pop();
                std.push(temp);
                r++;
            }
        }

        return n - cnt;
    }
};