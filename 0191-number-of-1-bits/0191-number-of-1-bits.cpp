class Solution {
public:
    int hammingWeight(int n) {
        if(n==0){
            return 0;
        }
        vector<int>ans;
        while(n>0){
            int rem=n%2;
            ans.push_back(rem);
            n=n/2;

        }
        int count=0;
        for(int i=0;i<ans.size();i++){
            if(ans[i]==1){
                count++;
            }

        }
        return count;
        
    }
};