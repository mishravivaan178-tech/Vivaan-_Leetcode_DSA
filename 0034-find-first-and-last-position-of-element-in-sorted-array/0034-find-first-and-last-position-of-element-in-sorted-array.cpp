class Solution {
public:
  int fo(vector<int>&nums,int target){
    int n= nums.size();
    int f=-1;
    int low=0;
    int high=n-1;
    while(low<=high){
       int mid=(low+high)/2;
        if(nums[mid]==target){
                f=mid;
                high=mid-1;
        }
        else if(nums[mid]<target){
            low=mid+1;
        }
        else{
            high=mid-1;
        }
    }
    return f;
  }
  int lo(vector<int>&nums,int target){
    int n= nums.size();
    int l=-1;
    int low=0;
    int high=n-1;
    while(low<=high){
        int mid=(low+high)/2;
        if(nums[mid]==target){
                l=mid;
                low=mid+1;
        }
       else if(nums[mid]<target){
            low=mid+1;
        }
        else{
            high=mid-1;
        }
    }
    return l;
  }
    vector<int> searchRange(vector<int>& nums, int target) {
        int res=fo(nums,target);
        int tes=lo(nums,target);
        return {res,tes};
        }
    
};