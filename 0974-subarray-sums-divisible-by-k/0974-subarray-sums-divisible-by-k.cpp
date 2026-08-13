class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k){
        int n=nums.size();
        int count=0;
        int sum=0;
        vector<int>temp(k,0);
        temp[0]=1;
        for(int i=0;i<n;i++){
            sum=sum+nums[i];
            int rem=sum%k;
            if(rem<0){
                rem=rem+k;
            }
            count=count+temp[rem];
            temp[rem]++;
        }
        return count;
    }
};