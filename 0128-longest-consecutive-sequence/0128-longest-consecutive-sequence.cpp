class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n=nums.size();
         if(n == 0) return 0;
        int count=1;
        int count2=1;
        sort(nums.begin(),nums.end());
        for(int i=0;i<n-1;i++){
            if(nums[i]==nums[i+1]){
                continue;
            }
            else if(nums[i+1]==nums[i]+1){
                count++;
            }
            else{
                count2=max(count,count2);
                count=1;
            }
        }
        count2=max(count2,count);
        return count2;
    }
};