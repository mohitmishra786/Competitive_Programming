class Solution {
public:
    string interpret(string command) {
        int n = command.length();
        string s = "";
        
        for(int i =  0 ; i < n ; ){
            if(command[i] == 'G'){
                s += 'G';
                i++;
            }
            else if(command[i] == '(' and command[i + 1] == ')'){
                s += 'o';
                i+=2;
            }
            else{
                s+= "al";
                i+=4;
            }
        }
        
        return s;
    }
};
