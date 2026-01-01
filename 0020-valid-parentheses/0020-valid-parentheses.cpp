class Solution {
public:
    bool isValid(string s) {
        stack<int>st;
        for(char &str: s){
            if(str =='('|| str== '{' || str == '['){
                st.push(str);
            }
            else{
                if (st.empty()) return false;
                if((str == ')' && st.top()=='(') ||
                    (str=='}' && st.top()=='{') ||
                    (str==']' && st.top()=='[')){
                    st.pop();
                }
                else{
                    return false;
                }
            }
            
            
        }
        return st.empty();
        
        

    }
};