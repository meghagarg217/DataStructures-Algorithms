class Solution {
public:
    int strStr(string haystack, string needle) {
        if(haystack.size()==0 && needle.size()==0)
            return 0;
        return haystack.find(needle);
    }
};