class Solution {
public:
    bool isValid(string s) {
        stack<char>st;
        for(char ut:s){
            if(ut=='(' || ut=='['||ut=='{'){
                st.push(ut);

            }
            else{
                if(st.empty()){
                    return false;
                }

                if(ut==')' && st.top()!='(' || ut=='}' && st.top()!='{' || ut==']' && st.top()!='['){
                    return false;
                }
                st.pop();
            }
        }
        return st.empty();
        
    }
};