class Solution {
public:
    int longestPalindromeSubseq(string s) {
        ios_base::sync_with_stdio(0);
        cin.tie(0);
        int m=s.length();
        int n=m;
        string str=s;
        reverse(str.begin(),str.end());
        //cout<<s<<" "<<str;
        int dp[m+1][n+1];
        for(int i=0;i<m+1;i++){
            for(int j=0;j<n+1;j++){
                if(i==0||j==0)dp[i][j]=0;
            }
        }
        for(int i=1;i<m+1;i++){
            for(int j=1;j<n+1;j++){
                if(s[i-1]==str[j-1])
                    dp[i][j]=1+dp[i-1][j-1];
                else
                    dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
            }
        }
        return dp[m][n];
    }
};