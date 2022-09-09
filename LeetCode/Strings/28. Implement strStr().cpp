class Solution {
public:
    int strStr(string haystack, string needle) {
        if(haystack.empty() and needle.empty()) return 0;
        size_t i = haystack.find(needle);
        if(i != string::npos) return i;
        return -1;
    }
};
