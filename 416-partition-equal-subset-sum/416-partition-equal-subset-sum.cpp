class Solution {
public:
    bool subsetsum(vector<int>nums,int s){
        int n=nums.size();
        int w=s;
        bool dp[n+1][w+1];
        for(int i=0;i<n+1;i++){
            for(int j=0;j<w+1;j++){
                if(j==0)dp[i][j]=true;
                else if(i==0)dp[i][j]=false;
            }
        }
        for(int i=1;i<n+1;i++){
            for(int j=1;j<w+1;j++){
                if(nums[i-1]<=j){
                    dp[i][j]=dp[i-1][j-nums[i-1]]||dp[i-1][j];
                }
                else{
                    dp[i][j]=dp[i-1][j];
                }
            }
        }
        return dp[n][w];
    }
    bool canPartition(vector<int>& nums) {
        ios_base::sync_with_stdio(0);
        cin.tie(0);
        int s=0;
        for(auto i:nums)
            s+=i;
        if(s%2!=0)return false;
        
        else{
            return subsetsum(nums,s/2);    
        }
    }
};