class Solution {
public:
    double myPow(double x, int n) {
        ios_base::sync_with_stdio(0);
        cin.tie(0);
        double res=1.0;
        int p=0;
        long long int y=n;
        if(y<0)p=1,y*=-1;
        while(y>0){
            if(y&1)
                res=res*x;
            x=x*x;
            y=y>>1;
        }
        if(p)res=1/res;
        return res;
    }
};