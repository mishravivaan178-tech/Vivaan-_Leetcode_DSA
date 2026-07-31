class Solution {
public:
    int maxArea(vector<int>& height) {
        int n=height.size();
        int l=0;
        int mw=0;
        int r=n-1;
        int w;
        while(l<r){
                w=r-l;
                int h=min(height[l],height[r]);
                int area=w*h;
                mw=max(mw,area);
                 if(height[l] < height[r]){
            l++;
        } else {
            r--;
        }
    }
        return mw;
    }
};