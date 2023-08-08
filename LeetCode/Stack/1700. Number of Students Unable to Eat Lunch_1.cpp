/*
    In this solution, I have used both Stack and Queue
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