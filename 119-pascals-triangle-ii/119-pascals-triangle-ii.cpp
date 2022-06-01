class Solution {
public:
    vector<int> getRow(int rowIndex) {
        
        ios_base::sync_with_stdio(0);
        cin.tie(0);
        unsigned long long b=rowIndex;
        vector<int>ans;
        ans.push_back(1);
        if(rowIndex>0)ans.push_back(rowIndex);
        for(int i=1;i<rowIndex;i++){
            unsigned long long z=(ans[i]*(b-i))/(i+1);
            ans.push_back(z);
        }
        
        return ans;
    }
    
};