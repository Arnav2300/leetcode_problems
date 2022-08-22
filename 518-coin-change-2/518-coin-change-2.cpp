class Solution {
public:
    int change(int amount, vector<int>& coins) {
        ios_base::sync_with_stdio(0);
        cin.tie(0);
        int n=coins.size();
        int w=amount;
        int dp[n+1][w+1];
        for(int i=0;i<n+1;i++){
            for(int j=0;j<w+1;j++){
                if(i==0&&j==0)dp[i][j]=NULL;
                else if(i==0)dp[i][j]=0;
                else if(j==0)dp[i][j]=1;
            }
        }
        for(int i=1;i<n+1;i++){
            for(int j=1;j<w+1;j++){
                if(coins[i-1]<=j){
                    dp[i][j]=dp[i-1][j]+dp[i][j-coins[i-1]];
                }
                else{
                    dp[i][j]=dp[i-1][j];
                }
            }
            
        }
        return dp[n][w];
    }
};