class Solution {
public:
    string convert(string s, int numRows) {
       if(numRows==1) return s;
       string ans = "";
       int cycle = 2*numRows-2;
       for(int i =0 ; i<numRows; i++){
        for(int j = i; j<s.size();j+=cycle){
            ans += s[j];
            int second = j + cycle -2*i;
            if(i>0 && i< numRows-1 && second< s.size()){
                ans+=s[second];
            }
        }
       } 
       return ans;
    }
};