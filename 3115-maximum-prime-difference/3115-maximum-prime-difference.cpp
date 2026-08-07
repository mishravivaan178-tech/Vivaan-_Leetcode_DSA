class Solution {
    private:
    bool isprime(int n){
        if(n<2){
            return false;
        }
        for(int i=2;i*i<=n;i++){
            if(n%i==0){
                return false;
            }
     
        }
         return true;
    }
public:
    int maximumPrimeDifference(vector<int>& nums) {
        int n=nums.size();
        int ans;
        vector<int>temp;
        for(int i=0;i<n;i++ ){
            if(isprime(nums[i])){
                temp.push_back(i);

            }
        }
        sort(temp.begin(),temp.end());
        if(temp.size()==1){
            return 0;
        }
        return temp.back()-temp.front();
    }
};