class Solution {
public:
    int maxArea(vector<int>& height) {
        ios_base::sync_with_stdio(0);
        cin.tie(0);
        int n=height.size();
        int l=0,r=n-1;
        int ans=0;
        while(l<r){
            int currA=min(height[l],height[r])*(r-l);
            ans=max(ans,currA);
            if(height[l]<height[r])
                l++;
            else
                r--;
        }
        return ans;
    }
};