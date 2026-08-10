class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int n=nums.size();
        int sum=0;
        for(int i=0;i<k;i++){
            sum=sum+nums[i];

        }
        int maxsum=sum;
        for(int j=k;j<n;j++){
          sum=sum+nums[j];
          sum=sum-nums[j-k];
          maxsum=max(maxsum,sum);
        }
       
        return (double)maxsum/k;
        
    }
};