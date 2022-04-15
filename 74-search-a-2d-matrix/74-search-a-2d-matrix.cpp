class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        ios_base::sync_with_stdio(0);
        cin.tie(0);
        if(!matrix.size())return false;        
        int r=matrix.size();
        int c=matrix[0].size();
        int lo=0,hi=(r*c)-1;
        while(lo<=hi){
            int mid=(lo+(hi-lo)/2);
            if(matrix[mid/c][mid%c]==target)return true;
            if(matrix[mid/c][mid%c]<target)lo=mid+1;
            else hi=mid-1;
            
        }
        return false;
    }
};