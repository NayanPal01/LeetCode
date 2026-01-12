class Solution {
public:
    bool allCap(string word){
        for(char &ch:word){
            if(ch<'A' || ch>'Z'){
                return false;
            }
        }
        return true;
    }
    bool allSmall(string word){
        for(char &ch:word){
            if(ch<'a' || ch>'z'){
                return false;
            }

        }
        return true;
    }
    bool detectCapitalUse(string word) {
        if(allCap(word) || allSmall(word) || allSmall(word.substr(1))){
            return true;
        }
        return false;
    }
};