class Solution {
public:
    string decodeString(string s) {
        stack<pair<string,int>> st;
        string cur="";
        int num=0;
        for(int i=0;i<s.length();i++){
            if(isdigit(s[i])){
                num=num*10+(s[i]-'0');
            }
            else if(s[i]=='[') {
                st.push({cur, num});
                cur = "";
                num = 0;
            }
            else if(s[i] == ']') {

                string prev = st.top().first;
                int repeat = st.top().second;

                st.pop();

                string temp = "";

                for(int j=0;j < repeat;j++) {
                    temp=temp + cur;
                }

                cur=prev + temp;
            }

            else {
                cur = cur + s[i];
            }
        }

        return cur;
        }
    
};