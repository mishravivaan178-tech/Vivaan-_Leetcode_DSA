class Solution {
public:
    void reverseString(vector<char>& s) {
        int i=0;
        int n= s.size();
        vector<char>vm;
        for(int i=n-1;i>=0;i--){
            vm.push_back(s[i]);
        }
        for(int i=0;i<n;i++){
            s[i]=vm[i];
        }
    }
};