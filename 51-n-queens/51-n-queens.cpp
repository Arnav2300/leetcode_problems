class Solution {
public:  
    void func(int col,int n,vector<int>& ro,vector<int>& ud,vector<int>& ld,vector<string>& brd,vector<vector<string>>& res){
        if(col==n){
            res.push_back(brd);
            return;
        }
        for(int row=0;row<n;row++){
            if(ro[row]==0 && ud[n-1+col-row]==0 && ld[row+col]==0){
                brd[row][col]='Q';
                ro[row]=1;
                ud[n-1+col-row]=1;
                ld[row+col]=1;
                func(col+1,n,ro,ud,ld,brd,res);
                brd[row][col]='.';
                ro[row]=0;
                ud[n-1+col-row]=0;
                ld[row+col]=0;
            }
        }
    }
    vector<vector<string>> solveNQueens(int n) {
        ios_base::sync_with_stdio(0);
        cin.tie(0);
        vector<vector<string>>res;
        vector<string>board(n);
        string str(n,'.');
        for(int i=0;i<n;i++){
            board[i]=str;
        }
        vector<int>ro(n,0),ud(2*n-1,0),ld(2*n-1,0);
        func(0,n,ro,ud,ld,board,res);
        return res;
        
    }
};