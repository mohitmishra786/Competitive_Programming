/*
    Here I Have Used Both
*/

class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
        queue<int> std;
        queue<int> sand;

        for(auto i : students){
            std.push(i);
        }

        for(auto i : sandwiches){
            sand.push(i);
        }

        int n = std.size();
        int r = 0, cnt = 0;

        while(!std.empty() && !sand.empty() && r < n){
            if(std.front() == sand.front()){
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