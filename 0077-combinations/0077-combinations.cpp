class Solution {
    private:
    void solve(int start, int n, int k, vector<int>&ans, vector<vector<int>>&ds){
        if(ans.size()==k){
            ds.push_back(ans);
            return;
        }
        for(int i=start;i<=n;i++){
            ans.push_back(i);
            solve(i+1,n,k,ans,ds);
            ans.pop_back();
        }
    }
public:
    vector<vector<int>> combine(int n, int k) {
        vector<vector<int>>ans;
        vector<int> temp;

        solve(1, n, k, temp, ans);

        return ans;
    }
};