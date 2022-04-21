class Solution {
public:
    //int cntP(int i,int j,int n,int m){
    //    if(i==m-1&&j==n-1)return 1;
    //    else if(i>=m||j>=n)return 0;
    //    else return cntP(i+1,j,n,m)+cntP(i,j+1,n,m);
    //}
    int uniquePaths(int m, int n) {
        ios_base::sync_with_stdio(0);
        cin.tie(0);
        int t=n+m-2;
        int r=n-1;
        double ans=1;
        for(int i=1;i<=r;i++){
            ans=ans*(t-r+i)/i;
        }
        return (int)ans;
    }
    
};