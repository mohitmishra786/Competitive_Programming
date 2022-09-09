class Solution {
public:
    int maxNumberOfBalloons(string text) {
        int arr[7] = {0 , 0 , 0 , 0 , 0 , 0 , 0};
        int p = 1 , q = 1;
        for(int i = 0 ; i < text.length() ; i++){
            if(text[i] == 'b'){
                arr[0]++;
            }
            else if(text[i] == 'a'){
                arr[1]++;
            }
            else if(text[i] == 'l' and (p % 2 != 0) ){
                arr[2]++;
                p++;
            }
            else if(text[i] == 'l' and (p % 2 == 0)){
                arr[3]++;
                p++;
            }
            else if(text[i] == 'o' and (q % 2 != 0)){
                arr[4]++;
                q++;
            }
            else if(text[i] == 'o' and (q % 2 == 0)){
                arr[5]++;
                q++;
            }
            else if(text[i] == 'n'){
                arr[6]++;
            }
        }
        
        int z = *min_element(arr, arr + 7);
        
        return z;
    }
};
