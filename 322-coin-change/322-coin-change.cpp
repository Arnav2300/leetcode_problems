class Solution {
public:
    int coinChange(vector<int>& coins, int amount) {
        ios_base::sync_with_stdio(0);
        cin.tie(0);
        int n=coins.size();
        int w=amount;
        int dp[n+1][w+1];
        for(int i=0;i<n+1;i++){
            for(int j=0;j<w+1;j++){
                if(i==0)dp[i][j]=INT_MAX-1;
                else if(j==0)dp[i][j]=0;
            }
        }
        for(int j=1;j<w+1;j++){
            if(j%coins[0]==0)dp[1][j]=j/coins[0];
            else dp[1][j]=INT_MAX-1;
        }
        //initialization complete
        for(int i=2;i<n+1;i++){
            for(int j=1;j<w+1;j++){
                if(coins[i-1]<=j){
                    dp[i][j]=min(1+dp[i][j-coins[i-1]],dp[i-1][j]);
                }
                else
                    dp[i][j]=dp[i-1][j];
            }
        }
        if(dp[n][w]>=INT_MAX-1)return -1;
        return dp[n][w];
    }
};