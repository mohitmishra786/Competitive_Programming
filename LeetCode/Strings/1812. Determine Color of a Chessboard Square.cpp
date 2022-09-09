class Solution {
public:
    bool squareIsWhite(string coordinates) {
        int n  = coordinates[1];
        char ans = coordinates[0];
        if((n == '1' || n == '3' || n == '5' || n == '7') and (ans == 'a' || ans == 'c' || ans == 'e' || ans == 'g') or (n == '2' || n == '4' || n == '6' || n == '8') and (ans == 'b' || ans == 'd' || ans == 'f' || ans == 'h')){
            return false;            
        }
        else return true;
    }
};
