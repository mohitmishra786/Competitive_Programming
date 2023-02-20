class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int maxm = 0;
        for(int i = 0 ; i < sentences.size();i++){
            int p = 0;
            for(int j = 0 ; j < sentences[i].size();j++){
                if(sentences[i][j] == ' '){
                    p++;
                }
            }

            maxm = max(maxm, p);
        }

        return maxm + 1;
    }
};
