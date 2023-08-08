/*
    Here i just increased the depth if the char is '(' and updated max_depth and also i  reduced the depth if char = ')'. 
    Other characters does not matter for this question
*/

class Solution {
public:
    int maxDepth(string s) {
        int d = 0;
        int max_d = 0;

        for(char c: s){
            if(c == '('){
                d++;
                max_d = max(max_d , d);
            }
            else if(c == ')'){
                d--;
            }
        }

        return max_d;
    }
};