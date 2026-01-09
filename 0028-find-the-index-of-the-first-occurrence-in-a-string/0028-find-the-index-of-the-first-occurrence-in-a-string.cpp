class Solution {
public:
    int strStr(string haystack, string needle) {
        
        for(int i = 0; i< haystack.size(); i++){
            bool allmatch = true;
            for(int j = 0 ; j<needle.size() ; j++){
                if(haystack[i+j]!=needle[j]){
                    allmatch = false;
                    break;
                }
            }
            if(allmatch){
                return i;
            }
        }
        return -1;
    }
};