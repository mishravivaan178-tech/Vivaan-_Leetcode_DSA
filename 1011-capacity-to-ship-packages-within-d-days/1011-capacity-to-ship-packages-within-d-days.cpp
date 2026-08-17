class Solution {
    private:
    int shipd(vector<int>&weights,int days,int cap){
        int maxw=0;
        int dj=1;
        int n=weights.size();
        for(int i=0;i<n;i++){
            if(maxw+weights[i]>cap){
                maxw=weights[i];
                dj=dj+1;
            }
            else{
                maxw=maxw+weights[i];
            }
        }
        return dj;
    }
public:
    int shipWithinDays(vector<int>& weights, int days) {
        int low=*max_element(weights.begin(),weights.end());
        int n=weights.size();
        int high=0;
        for(int i=0;i<n;i++){
            high=high+weights[i];
        }
        while(low<=high){
            int mid=(low+high)/2;
            if(shipd(weights,days,mid)<=days){
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return low;
    }
};